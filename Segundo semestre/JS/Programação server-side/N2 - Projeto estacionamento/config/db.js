import sequelize from "sequelize"
const db = new sequelize("estacionamento", "root", "", {
    host: "localhost",
    dialect: "mysql"
})

export default db