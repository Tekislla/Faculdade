import formaPagto from "../model/forma-pagto.js"

export const getFormasPagto = async (req, res) => {
  try {
    const formasPagto = await formaPagto.findAll()
    res.send(formasPagto)
  } catch (erro) {
    console.log(erro)
  }
}