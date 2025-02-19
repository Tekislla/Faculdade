(async () => {
    const db = require("./db");

    // Chamada para o módulo de inserção
    console.log("Inserção na tabela teste");
    const ret_insert = await db.insertPessoa({nome: "Mateus", telefone: "47998953265", email: "mateus@gmail.com"});
    console.log(ret_insert);

    // Chamada para o módulo de atualização
    console.log("Atualização de valor na tabela teste");
    const ret_update = await db.updatePessoa(9, {nome: "Mateusinho", telefone: "47995841532", email: "mateusinho@gmail.com"});
    console.log(ret_update);

    // Chamada para o módulo de remoção
    console.log("Remoção de valor na tabela teste");
    const ret_delete = await db.deletePessoa(9);
    console.log(ret_delete);

    //Chamada para o módulo de consulta
    console.log("Consulta na tabela teste");
    const pessoas = await db.selectPessoa();
    console.log(pessoas);

    
})()