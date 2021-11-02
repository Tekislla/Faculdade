import veiculo from "../models/veiculo.js"

export const getVeiculos = async (req, res) => {
  try {
    const veiculos = await veiculo.findAll()
    res.send(veiculos)
  } catch (erro) {
    console.log(erro)
  }
}

export const getVeiculoByPlaca = async (req, res) => {
  try {
    const veiculos = await veiculo.findAll({
      where: {
        placa_veiculo: req.params.placa_veiculo
      }
    })
    res.send(veiculos)
  } catch (erro) {
    console.log(erro)
  }
}

export const createVeiculo = async (req, res) => {
  try {
    await veiculo.create(req.body)
    res.json({
      "Mensagem": "Um novo veículo foi criado no banco de dados!"
    })
  } catch (erro) {
    console.log(erro)
  }
}

export const updateVeiculo = async (req, res) => {
  try {
    await veiculo.update(req.body, {
      where: {
        placa_veiculo: req.params.placa_veiculo
      }
    })
    res.json({
      "Mensagem": "O veículo com a placa " + req.params.placa_veiculo + " foi atualizado."
    })
  } catch (erro) {
    console.log(erro)
  }
}

export const deleteVeiculo = async (req, res) => {
  try {
    await veiculo.destroy({
      where: {
        placa_veiculo: req.params.placa_veiculo
      }
    })
    res.json({
      "Mensagem": "O veículo com a placa " + req.params.placa_veiculo + " foi excluído do banco de dados."
    })
  } catch (erro) {
    console.log(erro)
  }
}