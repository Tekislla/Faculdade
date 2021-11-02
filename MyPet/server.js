import express from "express"
import cors from "cors"
import db from "./config/database.js"
import Router from "./routes/routes.js"

const server = express()
server.use(express.json())
server.use(cors())

try {
    await db.authenticate()
    console.log("Conexão com o banco de dados estabelecida.")
} catch (erro) {
    console.error("Conexão com banco de dados falhou.")
}

server.use(Router)

server.listen(5000, ()=> console.log("Server executando em http//localhost:5000"))