import pet from "../models/pet.js"

//Buscar todos os pets
export const getPets = async (req, res) => {
  try {
    const pets = await pet.findAll()
    res.send(pets)
  } catch (erro) {
    console.log(erro)
  }
}

// Buscar pet por id
export const getPetById = async (req, res) => {
  try {
    const pets = await pet.findAll({
      where: {
        id: req.params.id
      }
    })
    res.send(pets)
  } catch (erro) {
    console.log(erro)
  }
}

// Buscar pet por tipo
export const getPetByTipo = async (req, res) => {
  try {
    const pets = await pet.findAll({
      where: {
        tipo: req.params.tipo
      }
    })
    res.send(pets)
  } catch (erro) {
    console.log(erro)
  }
}

// Atualizar pet por id
export const updatePet = async (req, res) => {
  try {
    await pet.update(req.body, {
      where: {
        id: req.params.id
      }
    })
    res.json({
      "Mensagem": "O pet com ID " + req.params.id + " foi atualizado."
    })
  } catch (erro) {
    console.log(erro)
  }
}

// Excluir pet por id
export const deletePet = async (req, res) => {
  try {
    await pet.destroy({
      where: {
        id: req.params.id
      }
    })
    res.json({
      "Mensagem": "O pet com ID " + req.params.id + " foi excluído do banco de dados."
    })
  } catch (erro) {
    console.log(erro)
  }
}


// Criar um novo pet
export const createPet = async (req, res) => {
  try {
    await pet.create(req.body)
    res.json({
      "messangem": "Um novo pet foi inserido no banco de dados"
    })
  } catch (erro) {
    console.log(erro)
  }
}