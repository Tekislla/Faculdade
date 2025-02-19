import categoria from "../model/categoria.js"

export const getCategorias = async (req, res) => {
  try {
    const categorias = await categoria.findAll()
    res.send(categorias)
  } catch (erro) {
    console.log(erro)
  }
}