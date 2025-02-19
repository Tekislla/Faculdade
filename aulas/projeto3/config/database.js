import sequelize from "sequelize"
const db = new sequelize("faculdade", "root", "", {
    host: "localhost",
    dialect: "mysql"
})

export default db