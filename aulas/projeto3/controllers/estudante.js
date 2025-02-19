import estudante from "../models/estudante.js"

//Buscar todos Estudantes na Tabela Estudante
export const getEstudantes = async (req, res) => {
  try {
    const estudantes = await estudante.findAll()
    res.send(estudantes)
  } catch (erro) {
    console.log(erro)
  }
}

//Buscar Estudante por Matricula
export const getEstudanteByMatr = async (req, res) => {
  try {
    const estudantes = await estudante.findAll({
      where: {
        matricula_estudante: req.params.matricula
      }
    })
    res.send(estudantes)
  } catch (erro) {
    console.log(erro)
  }
}

//Criar um novo estudante
export const createEstudante = async (req, res) => {
  try {
    await estudante.create(req.body)
    res.json({
      "messangem": "Um novo estudante foi criado no Bando de Dados"
    })
  } catch (erro) {
    console.log(erro)
  }
}

//Atualizar um Estudante usando a sua Matricula
export const updateEstudante = async (req, res) => {
  try {
    await estudante.update(req.body, {
      where: {
        matricula_estudante: req.params.matricula
      }
    })
    res.json({
      "messangem": "O estudante " + req.params.matricula + " foi Atualizada"
    })
  } catch (erro) {
    console.log(erro)
  }
}

//Excluir um Estudante usando a sua Matricula
export const deleteEstudante = async (req, res) => {
  try {
    await estudante.destroy({
      where: {
        matricula_estudante: req.params.matricula
      }
    })
    res.json({
      "messangem": "O estudante " + req.params.matricula + " foi Excluido do Banco de Dados"
    })
  } catch (erro) {
    console.log(erro)
  }
}