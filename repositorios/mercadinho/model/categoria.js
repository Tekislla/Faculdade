import { Sequelize } from "sequelize"
import db from "../src/db.js"

const Categoria = db.define("categorias",{
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

export default Categoria