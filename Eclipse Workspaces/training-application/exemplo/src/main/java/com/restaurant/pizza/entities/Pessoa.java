package com.restaurant.pizza.entities;

import javax.persistence.Entity;
import javax.persistence.Table;

@Entity
@Table
public class Pessoa {
	private Long id;
	private String nome;
	private Long cpf;
	private Integer idade;

	public Pessoa(Long id, String nome, Long cpf, Integer idade) {
		this.id = id;
		this.nome = nome;
		this.cpf = cpf;
		this.idade = idade;
	}

	public Long getId() {
		return id;
	}

	public void setId(Long id) {
		this.id = id;
	}

	public String getNome() {
		return nome;
	}

	public void setNome(String nome) {
		this.nome = nome;
	}

	public Long getCpf() {
		return cpf;
	}

	public void setCpf(Long cpf) {
		this.cpf = cpf;
	}

	public Integer getIdade() {
		return idade;
	}

	public void setIdade(Integer idade) {
		this.idade = idade;
	}

}
