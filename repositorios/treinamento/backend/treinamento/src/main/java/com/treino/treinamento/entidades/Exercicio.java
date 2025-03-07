package com.treino.treinamento.entidades;

import javax.persistence.Entity;
import javax.persistence.GeneratedValue;
import javax.persistence.GenerationType;
import javax.persistence.Id;
import javax.persistence.Table;

@Entity
@Table
public class Exercicio {
	@Id
	@GeneratedValue(strategy = GenerationType.IDENTITY)
	private Long id;
	private String nome;
	private String tipoExercicio;
	private Integer numeroSeries;
	private Integer repeticoes;

	public Exercicio() {

	}

	public Exercicio(Long id, String nome, String tipoExercicio, Integer numeroSeries, Integer repeticoes) {
		this.id = id;
		this.nome = nome;
		this.tipoExercicio = tipoExercicio;
		this.numeroSeries = numeroSeries;
		this.repeticoes = repeticoes;
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

	public String getTipoExercicio() {
		return tipoExercicio;
	}

	public void setTipoExercicio(String tipoExercicio) {
		this.tipoExercicio = tipoExercicio;
	}

	public Integer getNumeroSeries() {
		return numeroSeries;
	}

	public void setNumeroSeries(Integer numeroSeries) {
		this.numeroSeries = numeroSeries;
	}

	public Integer getRepeticoes() {
		return repeticoes;
	}

	public void setRepeticoes(Integer repeticoes) {
		this.repeticoes = repeticoes;
	}

}
