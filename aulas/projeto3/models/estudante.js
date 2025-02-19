import { Sequelize } from "sequelize"
import db from "../config/database.js"

const {DataTypes} = Sequelize
const Estudante = db.define("estudante",{
    matricula_estudante: {
        type: DataTypes.INTEGER,
        primaryKey:true
    },
    nome_estudante: {
        type: Sequelize.STRING(200)
    },
    email_estudante: {
        type: Sequelize.STRING(100)
    } 
},  {
        timestamps:false,
        freezeTableName: true 

}) 
export default Estudante
