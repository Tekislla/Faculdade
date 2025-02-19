package com.treino.treinamento.services;

import java.util.List;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

import com.treino.treinamento.entidades.Exercicio;
import com.treino.treinamento.repositorios.ExercicioRepository;

@Service
public class ExercicioService {
	@Autowired
	ExercicioRepository repo;
	
	public Exercicio criar(Exercicio exercicio) {
		Exercicio e = new Exercicio();
		e.setNome(exercicio.getNome());
		e.setNumeroSeries(exercicio.getNumeroSeries());
		e.setRepeticoes(exercicio.getRepeticoes());
		e.setTipoExercicio(exercicio.getTipoExercicio());
		
		repo.save(e);
		return e;
	}

	public List<Exercicio> listar() {
		return (List<Exercicio>) repo.findAll();
	}

	public Exercicio buscarPeloId(Long id) {
		return repo.findById(id).get();
	}
	
	public List<Exercicio> buscarPorTipo(String tipoExercicio) {
		return repo.findByTipoExercicio(tipoExercicio);
	}

	public void excluir(Long id) {
		repo.deleteById(id);
	}

}
