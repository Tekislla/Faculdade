import { Sequelize } from "sequelize"
import db from "../config/db.js"

const Dispositivo = db.define("dispositivo",{
    id_disptvo: {
        type: Sequelize.INTEGER,
        primaryKey:true
    },
    nome_disptvo: {
        type: Sequelize.STRING(50)
    },
    descr_disptvo: {
        type: Sequelize.STRING(50)
    } 
},  {
        timestamps:false,
        freezeTableName: true 

}) 
export default Dispositivo