package com.treino.treinamento.repositorios;

import org.springframework.data.repository.CrudRepository;

import com.treino.treinamento.entidades.Aluno;

public interface AlunoRepository extends CrudRepository<Aluno, Long> {
	
	public Aluno findByCpf(Long cpf);

}