package com.treino.treinamento.repositorios;

import org.springframework.data.repository.CrudRepository;

import com.treino.treinamento.entidades.Professor;

public interface ProfessorRepository extends CrudRepository<Professor, Long> {
	
	public Professor findByCpf(Long cpf);

}