import fornecedor from "../model/fornecedor.js"

export const createFornecedor = async (req, res) => {
  try {
    await fornecedor.create(req.body)
    res.json({
      "Mensagem": "Novo fornecedor inserido com sucesso"
    })
  } catch (erro) {
    console.log(erro)
  }
}

export const getFornecedores = async (req, res) => {
  try {
    const fornecedores = await fornecedor.findAll()
    res.send(fornecedores)
  } catch (erro) {
    console.log(erro)
  }
}

export const getFornecedorById = async (req, res) => {
  try {
    const fornecedores = await fornecedor.findAll({
      where: {
        id: req.params.id
      }
    })
    res.send(fornecedores)
  } catch (erro) {
    console.log(erro)
  }
}

export const updateFornecedor = async (req, res) => {
  try {
    await fornecedor.update(req.body, {
      where: {
        id: req.params.id
      }
    })
    res.json({
      "Mensagem": "O fornecedor com id " + req.params.id + " foi atualizado"
    })
  } catch (erro) {
      console.log(erro)
  }
}

export const deleteFornecedor = async (req, res) => {
  try {
    await fornecedor.destroy({
      where: {
        id: req.params.id
      }
      })
    res.json({
      "Mensagem": "O fornecedor com o id " + req.params.id + " foi excluído do banco de dados"
    })
  } catch (erro) {
    console.log(erro)
  }
}