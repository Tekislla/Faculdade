import express from "express"
import { getPessoas,
         getPessoaByLogin,
         createPessoa,
         updatePessoa,
         deletePessoa 
 } from "../controllers/pessoa.js"

import { getPets,
         getPetById,
         getPetByTipo,
         createPet,
         updatePet,
         deletePet
} from "../controllers/pet.js"

const router = express.Router()

// Rotas da pessoa
router.get("/get-pessoas", getPessoas)
router.get("/get-pessoa/:login", getPessoaByLogin)
router.post("/create-pessoa", createPessoa)
router.put("/update-pessoa/:login", updatePessoa)
router.delete("/delete-pessoa/:login", deletePessoa)

// Rotas do pet
router.get("/get-pets", getPets)
router.get("/get-pet-id/:id", getPetById)
router.get("/get-pet-tipo/:tipo", getPetByTipo)
router.post("/create-pet", createPet)
router.put("/update-pet/:id", updatePet)
router.delete("/delete-pet/:id", deletePet)

export default router