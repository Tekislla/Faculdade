package com.main.mypet.service;

import java.util.List;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;
import org.springframework.web.multipart.MultipartFile;

import com.main.mypet.dto.PetDto;
import com.main.mypet.entities.Pet;
import com.main.mypet.repository.PetRepository;

@Service
public class PetService {
	@Autowired
	PetRepository petRepository;
	
	public Long createPet(PetDto petDto) {
		Pet pet = new Pet();
		pet.setName(petDto.getName());
		pet.setType(petDto.getType());
		pet.setRace(petDto.getRace());
		pet.setCity(petDto.getCity());
		pet.setState(petDto.getState());
		pet.setContactEmail(petDto.getContactEmail());
		pet.setAge(petDto.getAge());
		
		petRepository.save(pet);
		return  pet.getId();
	}
	
	public String upload(MultipartFile file) {
		if (file != null) {
			System.out.println("chegou");
			return "chegou";
		} else {
			return "erro";
		}
	}
	
	public List<Pet> findAll() {
		List<Pet> pets = (List<Pet>) petRepository.findAll();
		return pets;
	}
	
	public Pet findById(Long id) {
		Pet pet = petRepository.findById(id).get();
		return pet;
	}
	
	public String updatePet(Long id, PetDto petDto) {
		Pet pet = petRepository.findById(id).get();
		pet.setName(petDto.getName());
		pet.setType(petDto.getType());
		pet.setRace(petDto.getRace());
		pet.setCity(petDto.getCity());
		pet.setState(petDto.getState());
		pet.setAge(petDto.getAge());
		
		petRepository.save(pet);
		return "Pet " + pet.getName() + " updated!";
	}
	
	public String deletePet(Long id) {
		String petName = petRepository.findById(id).get().getName();
		petRepository.deleteById(id);
		return "Pet " + petName + " deleted!";
	}

}
