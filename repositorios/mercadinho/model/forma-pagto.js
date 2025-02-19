import { Sequelize } from "sequelize"
import db from "../src/db.js"

const FormaPagto = db.define("forma_pagto",{
    id: {
        type: Sequelize.INTEGER,
        primaryKey:true
    },
    nome: {
        type: Sequelize.STRING(255)
    }
},  
{
    timestamps:false,
    freezeTableName: true 
})

export default FormaPagto