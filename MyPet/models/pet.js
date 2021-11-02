import { Sequelize } from "sequelize"
import db from "../config/database.js"

const Pet = db.define("pet", {
  id: {
    type: Sequelize.INTEGER,
    primaryKey: true
  },
  nome: {
    type: Sequelize.STRING(50),
  },
  tipo: {
    type: Sequelize.STRING(50),
  },
  raca: {
    type: Sequelize.STRING(50),
  }, 
  idade: {
    type: Sequelize.INTEGER,
  }
},
{
  timestamps: false,
  freezeTableName: true
})
export default Pet