const mysql = require('mysql');

// Configurando a conexão

const con = mysql.createConnection({
    host: 'localhost',
    user: 'root',
    password: '',
    database: 'projeto_crud'
});

// Iniciando a conexão

con.connect((erro) => {
    if (erro){
        console.log("\nErro ao conectar ao banco de dados MySQL", erro);
        return;
    }

    console.log("\nConexão estabelecida!");
});

// Inserindo algo no banco de dados (CREATE)

const newPessoa = {nome: 'Julia', telefone: '47995846235', email: 'julia@gmail.com'};
con.query('INSERT INTO teste SET ?',newPessoa, (erro, res) => {
    if (erro) throw erro;
    console.log("\nPessoa " + res.nome + " adicionado.")
})


// Consulta no banco de dados (READ)

con.query('SELECT * FROM TESTE', (erro, rows) => {
    if (erro) throw erro;
    rows.forEach(row => {
        console.log("\nID: " + row.id + "\nNome: " + row.nome + "\nTelefone: " + row.telefone + "\nEmail: " + row.email);

    });
});

// Atualizar valor do banco de dados (UPDATE)
con.query('UPDATE teste SET nome = ? WHERE id = ?',
  ['Vanessinha', 2], (erro,result) => {
      if(erro) throw erro;

      console.log('Change d ', result)
  }
)


// Remover algo do banco de dados (DELETE)
con.query('DELETE FROM teste WHERE id = ?', [7], (erro, result) => {
    if (erro) throw erro;
  console.log(`Exclui ${result.affectedRows} row(s)`);
}
);



// Encerrando a conexão

con.end((erro) => {
    if (erro){
        console.log("\nErro ao finalizar a conexão", erro);
        return
    }

    console.log("\nConexão finalizada.");
});