function connect() {
    if (global.connection && global.connection.state !== 'disconnected')
        return global.connection;
    const mysql = require("mysql2/promise");
    const conexao = mysql.createConnection("mysql://root:@localhost:3306/projeto_crud");
    console.log("Conectado ao SGBD MySQL, banco teste");
    return conexao;
}

// Módulo de consulta

async function selectPessoa(){
    const conn = await connect();
    const [rows] = await conn.query("SELECT * FROM teste;");
    return rows;
}

// Módulo de inserção

async function insertPessoa(pessoa){
    const conn = await connect();
    const sql = "INSERT INTO teste (nome, telefone, email) VALUES (?, ?, ?);";
    const values = [pessoa.nome, pessoa.telefone, pessoa.email];
    return await conn.query(sql, values);

}

// Módulo de atualização

async function updatePessoa(id, pessoa){
    const conn = await connect();
    const sql = "UPDATE teste SET nome = ?, telefone = ?, email = ? WHERE id = ?;";
    const values = [pessoa.nome, pessoa.telefone, pessoa.email, id];
    return await conn.query(sql, values);
}

// Módulo de remoção

async function deletePessoa(id){
    const conn = await connect();
    const sql = "DELETE FROM teste WHERE id = ?;";
    const values = [id];
    return await conn.query(sql, values);
}

module.exports = {selectPessoa, insertPessoa, updatePessoa, deletePessoa};