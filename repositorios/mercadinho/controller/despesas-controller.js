import despesa from "../model/despesa.js"

export const createDespesa = async (req, res) => {
  try {
    await despesa.create(req.body)
    res.json({
      "Mensagem": "Nova despesa inserida com sucesso"
    })
  } catch (erro) {
    console.log(erro)
  }
}

export const getDespesas = async (req, res) => {
  try {
    const despesas = await despesa.findAll()
    res.send(despesas)
  } catch (erro) {
    console.log(erro)
  }
}

export const getDespesaById = async (req, res) => {
  try {
    const despesas = await despesa.findAll({
      where: {
        id: req.params.id
      }
    })
    res.send(despesas)
  } catch (erro) {
    console.log(erro)
  }
}

export const updateDespesa = async (req, res) => {
  try {
    await despesa.update(req.body, {
      where: {
        id: req.params.id
      }
    })
    res.json({
      "Mensagem": "A despesa com id " + req.params.id + " foi atualizada"
    })
  } catch (erro) {
    console.log(erro)
  }
}

export const deleteDespesa = async (req, res) => {
  try {
    await despesa.destroy({
      where: {
        id: req.params.id
      }
    })
    res.json({
      "Mensagem": "A despesa com o id " + req.params.id + " foi excluída do banco de dados."
    })
  } catch (erro) {
    console.log(erro)
  }
}