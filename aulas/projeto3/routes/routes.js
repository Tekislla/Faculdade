import express from "express"
import { getEstudantes,
         getEstudanteByMatr,
         createEstudante,
         updateEstudante,
         deleteEstudante 
 } from "../controllers/estudante.js"

import { createLivro } from "../controllers/livro.js"

const router = express.Router()

router.get("/estudante", getEstudantes)
router.get("/estudante/:matricula", getEstudanteByMatr)
router.post("/estudante", createEstudante)
router.put("/estudante/:matricula", updateEstudante)
router.delete("/estudante/:matricula", deleteEstudante)

//Rota da Entidade Livro
router.post("/livro", createLivro)

export default router