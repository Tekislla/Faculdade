import express from "express"
import { getDispositivos,
         createDispositivo
         
 } from "../controllers/dispositivo.js"

const router = express.Router()

router.get("/get-dispositivos", getDispositivos)
router.post("/add-dispositivo", createDispositivo)

export default router