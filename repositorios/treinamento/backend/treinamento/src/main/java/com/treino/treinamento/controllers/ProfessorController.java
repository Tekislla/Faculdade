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

import com.treino.treinamento.dto.ProfessorDTO;
import com.treino.treinamento.entidades.Professor;
import com.treino.treinamento.services.ProfessorService;

@RestController
@CrossOrigin
@RequestMapping(value = "/professor")
public class ProfessorController {
	@Autowired
	ProfessorService service;

	@PostMapping(value = "/cadastrar")
	public Long cadastrar(@RequestBody Professor p) {
		return service.criar(p);
	}

	@GetMapping(value = "/listar")
	public List<Professor> listar() {
		return service.listar();
	}

	@GetMapping(value = "/buscar/{id}")
	public Professor buscarPeloId(@PathVariable Long id) {
		return service.buscarPeloId(id);
	}

	@PostMapping(value = "/editar/{id}")
	public void editar(@PathVariable Long id, @RequestBody ProfessorDTO dto) {
		service.editar(id, dto);
	}

	@PostMapping(value = "/remover/{id}")
	public void remover(@PathVariable Long id) {
		service.excluir(id);
	}

	@PostMapping(value = "/login/{cpf}/{senha}")
	public Long login(@PathVariable Long cpf, @PathVariable String senha) {
		return service.login(cpf, senha);
	}

}
