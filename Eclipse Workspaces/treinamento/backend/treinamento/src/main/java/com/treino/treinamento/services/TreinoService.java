package com.treino.treinamento.services;

import java.util.List;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

import com.treino.treinamento.dto.TreinoDTO;
import com.treino.treinamento.entidades.Treino;
import com.treino.treinamento.repositorios.TreinoRepository;

@Service
public class TreinoService {
	@Autowired
	TreinoRepository repo;
	
	@Autowired
	AlunoService alunoService;
	
	@Autowired
	ProfessorService professorService;
	
	@Autowired
	ExercicioService exercicioService;
	
	public Treino agendarTreino(TreinoDTO dto) {
		Treino t = new Treino();
		t.setAluno(alunoService.buscarPeloId(dto.getAlunoId()));
		t.setProfessor(professorService.buscarPeloId(dto.getProfessorId()));
		t.setExercicios(exercicioService.buscarPorTipo(dto.getTipoTreino()));
		t.setDiaTreino(dto.getDiaTreino());
		t.setHora(dto.getHora());
		
		repo.save(t);
		return t;
	}
	
	public List<Treino> listar() {
		return (List<Treino>) repo.findAll();
	}
	
	public void desmarcarTreino(Long id) {
		repo.deleteById(id);
	}
	
}
