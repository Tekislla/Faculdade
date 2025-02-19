package com.treino.treinamento.services;

import java.util.List;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

import com.treino.treinamento.dto.AlunoDTO;
import com.treino.treinamento.entidades.Aluno;
import com.treino.treinamento.repositorios.AlunoRepository;

@Service
public class AlunoService {
	@Autowired
	AlunoRepository repo;

	public Long criar(Aluno aluno) {
		Aluno a = new Aluno();
		a.setNome(aluno.getNome());
		a.setCpf(aluno.getCpf());
		a.setIdade(aluno.getIdade());
		a.setSenha(aluno.getSenha());

		repo.save(a);
		return a.getId();
	}

	public List<Aluno> listar() {
		return (List<Aluno>) repo.findAll();
	}

	public Aluno buscarPeloId(Long id) {
		return repo.findById(id).get();
	}

	public void editar(Long id, AlunoDTO dto) {
		Aluno a = repo.findById(id).get();
		a.setNome(dto.getNome());
		a.setIdade(dto.getIdade());
		a.setSenha(dto.getSenha());

		repo.save(a);
	}

	public void excluir(Long id) {
		repo.deleteById(id);
	}

	public Long login(Long cpf, String senha) {
		Aluno aluno = repo.findByCpf(cpf);
		if (aluno == null) {
			return 0L;
		} else {
			if (aluno.getSenha().equals(senha)) {
				return aluno.getId();
			} else {
				return 400L;
			}
		}
	}

}
