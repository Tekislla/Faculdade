package com.treino.treinamento.services;

import java.util.List;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

import com.treino.treinamento.dto.ProfessorDTO;
import com.treino.treinamento.entidades.Professor;
import com.treino.treinamento.repositorios.ProfessorRepository;

@Service
public class ProfessorService {
	@Autowired
	ProfessorRepository repo;

	public Long criar(Professor professor) {
		Professor p = new Professor();
		p.setNome(professor.getNome());
		p.setCpf(professor.getCpf());
		p.setIdade(professor.getIdade());
		p.setSenha(professor.getSenha());

		repo.save(p);
		return p.getId();
	}

	public List<Professor> listar() {
		return (List<Professor>) repo.findAll();
	}

	public Professor buscarPeloId(Long id) {
		return repo.findById(id).get();
	}

	public void editar(Long id, ProfessorDTO dto) {
		Professor p = repo.findById(id).get();
		p.setNome(dto.getNome());
		p.setIdade(dto.getIdade());
		p.setSenha(dto.getSenha());

		repo.save(p);
	}

	public void excluir(Long id) {
		repo.deleteById(id);
	}
	
	public Long login(Long cpf, String senha) {
		Professor professor = repo.findByCpf(cpf);
		if (professor == null) {
			return 0L;
		} else {
			if (professor.getSenha().equals(senha)) {
				return professor.getId();
			} else {
				return 400L;
			}
		}
	}

}
