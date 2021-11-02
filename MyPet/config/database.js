import sequelize from "sequelize"
const db = new sequelize("mypet", "root", "", {
    host: "localhost",
    dialect: "mysql"
})

export default db