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

import com.treino.treinamento.dto.TreinoDTO;
import com.treino.treinamento.entidades.Treino;
import com.treino.treinamento.services.TreinoService;

@RestController
@CrossOrigin
@RequestMapping(value = "/treino")
public class TreinoController {
	@Autowired
	TreinoService service;

	@PostMapping(value = "/agendar")
	public Treino agendar(@RequestBody TreinoDTO dto) {
		return service.agendarTreino(dto);
	}

	@GetMapping(value = "/listar")
	public List<Treino> listar() {
		return service.listar();
	}


	@PostMapping(value = "/desmarcar/{id}")
	public void desmarcar(@PathVariable Long id) {
		service.desmarcarTreino(id);
	}

}
