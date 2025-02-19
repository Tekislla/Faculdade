import express from "express";
const routes = express.Router();

import {
  createFornecedor,
  getFornecedores,
  getFornecedorById,
  updateFornecedor,
  deleteFornecedor
} from "../controller/fornecedor-controller.js";

import {
  createDespesa,
  getDespesas,
  getDespesaById,
  updateDespesa,
  deleteDespesa
} from "../controller/despesas-controller.js";

import {
  getCategorias
} from "../controller/categoria-controller.js";

import {
  getFormasPagto
} from "../controller/forma-pagto-controller.js";




// Fornecedores
routes.post("/fornecedores/add", createFornecedor);
routes.get("/fornecedores", getFornecedores);
routes.get("/fornecedores/:id", getFornecedorById);
routes.put("/fornecedores/update", updateFornecedor);
routes.delete("/fornecedores/delete", deleteFornecedor);

// Despesas
routes.post("/despesas/add", createDespesa);
routes.get("/despesas", getDespesas);
routes.get("/despesas/:id", getDespesaById);
routes.put("/despesas/update", updateDespesa);
routes.delete("/despesas/delete", deleteDespesa);

// Categorias
routes.get("/categorias", getCategorias);


// Formas de pagamento
routes.get("/formas-pagto", getFormasPagto);

export { routes as default };