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

import com.treino.treinamento.dto.AlunoDTO;
import com.treino.treinamento.entidades.Aluno;
import com.treino.treinamento.services.AlunoService;

@RestController
@CrossOrigin
@RequestMapping(value = "/aluno")
public class AlunoController {
	@Autowired
	AlunoService service;

	@PostMapping(value = "/cadastrar")
	public Long cadastrar(@RequestBody Aluno a) {
		return service.criar(a);
	}

	@GetMapping(value = "/listar")
	public List<Aluno> listar() {
		return service.listar();
	}

	@GetMapping(value = "/buscar/{id}")
	public Aluno buscarPeloId(@PathVariable Long id) {
		return service.buscarPeloId(id);
	}

	@PostMapping(value = "/editar/{id}")
	public void editar(@PathVariable Long id, @RequestBody AlunoDTO dto) {
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
