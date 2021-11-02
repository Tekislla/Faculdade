import express from "express"
import { getVeiculos,
         getVeiculoByPlaca,
         createVeiculo,
         updateVeiculo,
         deleteVeiculo 
 } from "../controllers/veiculo.js"

const router = express.Router()

router.get("/getveiculos", getVeiculos)
router.get("/getveiculo/:placa_veiculo", getVeiculoByPlaca)
router.post("/addveiculo", createVeiculo)
router.put("/updateveiculo/:placa_veiculo", updateVeiculo)
router.delete("/deleteveiculo/:placa_veiculo", deleteVeiculo)

export default router