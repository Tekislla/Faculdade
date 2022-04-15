import pessoa from "../models/pessoa.js"

//Buscar todas as pessoas
export const getPessoas = async (req, res) => {
  try {
    const pessoas = await pessoa.findAll()
    res.send(pessoas)
  } catch (erro) {
    console.log(erro)
  }
}

// Buscar pessoa por login
export const getPessoaByLogin = async (req, res) => {
  try {
    const pessoas = await pessoa.findAll({
      where: {
        login: req.params.login
      }
    })
    res.send(pessoas)
  } catch (erro) {
    console.log(erro)
  }
}

// Criar uma pessoa
export const createPessoa = async (req, res) => {
  try {
    await pessoa.create(req.body)
    res.json({
      "Mensagem": "Uma nova pessoadd foi inserida no banco de dados."
    })
  } catch (erro) {
    console.log(erro)
  }
}

// Atualizar pessoa por login
export const updatePessoa = async (req, res) => {
  try {
    await pessoa.update(req.body, {
      where: {
        login: req.params.login
      }
    })
    res.json({
      "Mensagem": "A pessoa com o login " + req.params.login + " foi atualizada."
    })
  } catch (erro) {
    console.log(erro)
  }
}

// Excluir pessoa por login
export const deletePessoa = async (req, res) => {
  try {
    await pessoa.destroy({
      where: {
        login: req.params.login
      }
    })
    res.json({
      "Mensagem": "A pessoa com o login " + req.params.login + " foi excluída do banco de dados."
    })
  } catch (erro) {
    console.log(erro)
  }
}