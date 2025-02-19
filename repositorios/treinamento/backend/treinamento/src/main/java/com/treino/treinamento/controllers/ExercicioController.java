package com.treino.treinamento.controllers;

import java.util.List;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.web.bind.annotation.CrossOrigin;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.PathVariable;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestBody;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;

import com.treino.treinamento.entidades.Exercicio;
import com.treino.treinamento.services.ExercicioService;

@RestController
@CrossOrigin
@RequestMapping(value = "/exercicio")
public class ExercicioController {
	@Autowired
	ExercicioService service;

	@PostMapping(value = "/cadastrar")
	public Exercicio cadastrar(@RequestBody Exercicio e) {
		return service.criar(e);
	}

	@GetMapping(value = "/listar")
	public List<Exercicio> listar() {
		return service.listar();
	}

	@GetMapping(value = "/buscar/{id}")
	public Exercicio buscarPeloId(@PathVariable Long id) {
		return service.buscarPeloId(id);
	}

	@PostMapping(value = "/remover/{id}")
	public void remover(@PathVariable Long id) {
		service.excluir(id);
	}

}
