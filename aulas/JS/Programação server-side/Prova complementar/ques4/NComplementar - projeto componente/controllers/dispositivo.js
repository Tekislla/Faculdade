import dispositivo from "../models/dispositivo.js"

export const getDispositivos = async (req, res) => {
  try {
    const dispositivos = await dispositivo.findAll()
    res.send(dispositivos)
  } catch (erro) {
    console.log(erro)
  }
}

export const createDispositivo = async (req, res) => {
  try {
    await dispositivo.create(req.body)
    res.json({
      "Mensagem": "Um novo dispositivo foi criado no banco de dados!"
    })
  } catch (erro) {
    console.log(erro)
  }
}