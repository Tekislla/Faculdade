import { Sequelize } from "sequelize"
import db from "../config/db.js"

const Veiculo = db.define("veiculo",{
    placa_veiculo: {
        type: Sequelize.STRING(50),
        primaryKey:true
    },
    modelo_veiculo: {
        type: Sequelize.STRING(50)
    },
    marca_veiculo: {
        type: Sequelize.STRING(50)
    } 
},  {
        timestamps:false,
        freezeTableName: true 

}) 
export default Veiculo