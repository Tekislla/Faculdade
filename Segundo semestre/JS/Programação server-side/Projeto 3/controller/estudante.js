var db_connect = require('./../config/connection')

var estudante = {};

//Busca por todos os estudantes 
estudante.all = async function (req, res) {
  try {
    var estudantes = await db_connect.query("SELECT * FROM teste;");
    res.send(estudantes);
  } catch (erro) {
    console.log("erro..........", erro)
  }
}

//Consulta de Estudante por Matricula
estudante.byMatricula = async function (req, res) {
  try {
    var estudante_matr = req.params.estudante_matr;
    console.log(estudante_matr)
    var query = "SELECT * FROM teste WHERE id = ?;"
    var estudantes = await db_connect.query(query, [estudante_matr]);
    res.send(estudantes);
  } catch (erro) {
    console.log("erro..........", erro)
  }
}

//============ Inserção =====================//
estudante.create = async function (req, res) {
  try {
    var estudante = req.body;
    var query = "INSERT INTO teste (nome, email, telefone) VALUES(?,?,?);"
    var values = [estudante.nome, estudante.email, estudante.nome]
    var result = await db_connect.query(query, values);
    res.send({
      status: 'Inserção Efetuada com Sucesso',
      result: result
    });
  } catch (erro) {
    console.log("erro..........", erro)
  }
}

// ==================== Busca por nome de Estudante name ====================
estudante.search = async function (req, res) {
  try {
    var nome = req.params.name;
    var query = `SELECT * FROM teste WHERE nome LIKE '${nome}%';`
    var estudantes = await db_connect.query(query);
    res.send(estudantes);
  } catch (erro) {
    console.log("erro..........", erro)
  }
}

//============= Atualização de Registro na Tabela estudante =============
estudante.update = async function (req, res) {
  try {
    var estudante_matr = req.params.estudante_matr;
    var estudante = req.body;
    var query = 'UPDATE teste SET nome=?,email=?, telefone=? WHERE id=?'
    const values = [estudante.nome, estudante.email, estudante.telefone, id]
    var result = await db_connect.query(query, values);
    res.send({
      status: "Atualização do Estudante :" + estudante.nome,
      result: result
    });
  } catch (erro) {
    console.log("erro..........", erro)
  }
}

// ============== EXCLUSÃO de Registros na Tabela Estudante ==================
estudante.delete = async function (req, res) {
  try {
    var id = req.params.id;
    var query = 'DELETE FROM estudante WHERE matricula_estudante=?;';
    var result = await db_connect.query(query, [id])
    res.send({
      status: "A Exclusão do Estudante : " + id + " Foi Realizada!",
      result: result
    });
  } catch (erro) {
    console.log("erro..........", erro)
  }
}

module.exports = estudante;