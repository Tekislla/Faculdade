package com.treino.treinamento.entidades;

import java.util.List;

import javax.persistence.CascadeType;
import javax.persistence.Entity;
import javax.persistence.FetchType;
import javax.persistence.GeneratedValue;
import javax.persistence.GenerationType;
import javax.persistence.Id;
import javax.persistence.JoinColumn;
import javax.persistence.JoinTable;
import javax.persistence.ManyToMany;
import javax.persistence.OneToOne;
import javax.persistence.Table;

@Entity
@Table
public class Treino {
	@Id
	@GeneratedValue(strategy = GenerationType.IDENTITY)
	public Long id;
	public Integer hora;
	public String diaTreino;

	@ManyToMany(cascade = CascadeType.ALL, fetch = FetchType.EAGER)
	@JoinTable(name = "treino_exercicio", joinColumns = { @JoinColumn(name = "treino_id") }, inverseJoinColumns = {
			@JoinColumn(name = "exercicio_id") })
	@JoinColumn(name = "exercicio_id")
	public List<Exercicio> exercicios;

	@OneToOne(cascade = CascadeType.ALL, fetch = FetchType.EAGER)
	@JoinColumn(name = "aluno_id")
	public Aluno aluno;

	@OneToOne(cascade = CascadeType.ALL, fetch = FetchType.EAGER)
	@JoinColumn(name = "professor_id")
	public Professor professor;

	public Treino() {

	}

	public Treino(Long id, Integer hora, String diaTreino, List<Exercicio> exercicios, Aluno aluno,
			Professor professor) {
		this.id = id;
		this.hora = hora;
		this.diaTreino = diaTreino;
		this.exercicios = exercicios;
		this.aluno = aluno;
		this.professor = professor;
	}

	public Long getId() {
		return id;
	}

	public void setId(Long id) {
		this.id = id;
	}

	public Integer getHora() {
		return hora;
	}

	public void setHora(Integer hora) {
		this.hora = hora;
	}

	public String getDiaTreino() {
		return diaTreino;
	}

	public void setDiaTreino(String diaTreino) {
		this.diaTreino = diaTreino;
	}

	public List<Exercicio> getExercicios() {
		return exercicios;
	}

	public void setExercicios(List<Exercicio> exercicios) {
		this.exercicios = exercicios;
	}

	public Aluno getAluno() {
		return aluno;
	}

	public void setAluno(Aluno aluno) {
		this.aluno = aluno;
	}

	public Professor getProfessor() {
		return professor;
	}

	public void setProfessor(Professor professor) {
		this.professor = professor;
	}

}
