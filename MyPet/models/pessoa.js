import { Sequelize } from "sequelize"
import db from "../config/database.js"

const {DataTypes} = Sequelize
const Pessoa = db.define("pessoa",{
    login: {
        type: Sequelize.STRING(15),
        primaryKey:true
    },
    nome: {
        type: Sequelize.STRING(80)
    },
    email: {
        type: Sequelize.STRING(80)
    },
    password: {
        type: Sequelize.STRING(15)
    },
},   
{
    timestamps:false,
    freezeTableName: true 
}) 
export default Pessoa