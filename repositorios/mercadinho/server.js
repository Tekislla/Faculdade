import express from "express";
import router from "./routes/router.js";
import cors from 'cors';

const app = express();

app.use(express.json());
app.use(router);
app.use(cors());

app.listen(4000, () => console.log("Servidor iniciado na porta 4000"));