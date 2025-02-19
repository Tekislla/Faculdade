import sequelize from "sequelize"
const db = new sequelize("componente", "root", "", {
    host: "localhost",
    dialect: "mysql"
})

export default db