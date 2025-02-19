package com.treino.treinamento.repositorios;

import java.util.List;

import org.springframework.data.repository.CrudRepository;

import com.treino.treinamento.entidades.Exercicio;

public interface ExercicioRepository extends CrudRepository<Exercicio, Long> {
	
	public List<Exercicio> findByTipoExercicio(String tipoExercicio);

}