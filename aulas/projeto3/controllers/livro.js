import livro from "../models/livro.js"

export const createLivro = async (req, res) => {
  try {
    await livro.create(req.body)
    res.json({
      "messangem": "Um novo Livro foi criado do Banco de Dados"
    })
  } catch (erro) {
    console.log(erro)
  }
}