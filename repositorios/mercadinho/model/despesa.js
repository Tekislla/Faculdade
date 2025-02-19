import { Sequelize } from "sequelize"
import db from "../src/db.js"

const Despesa = db.define("despesas",{
    id: {
        type: Sequelize.INTEGER,
        primaryKey:true
    },
    descricao: {
        type: Sequelize.STRING(255)
    },
    categoria_id: {
        type: Sequelize.INTEGER
    },
    valor: {
        type: Sequelize.DECIMAL(10,2)
    },
    data: {
        type: Sequelize.DATE
    },
    forma_pagamento_id: {
        type: Sequelize.INTEGER
    },
    fornecedor_id: {
        type: Sequelize.INTEGER
    }
},
{
    timestamps:false,
    freezeTableName: true 
})

export default Despesa