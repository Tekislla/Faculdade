function myFunction() {
    var element = document.body;
    element.classList.toggle("dark-mode");
 }
 
function mascara(i){
    var v = i.value;

    if(isNaN(v[v.length-1])){
        i.value = v.substring(0, v.length-1);
        return;
    }

    i.setAttribute("maxlength", "14");
    if (v.length == 3 || v.length == 7)
        i.value += ".";
    if (v.length == 11)
        i.value += "-";
}

function loginAluno() {
    var cpf = document.getElementById("alunoCpf").value;
    var senha = document.getElementById("alunoSenha").value;

    fetch('http://localhost:8080/treinamento/aluno/login/' + cpf + '/' + senha, {
    method: 'POST',
    headers: {
      'Accept': 'application/json',
      'Content-Type': 'application/json'
    }
  }).then(response => response.json()).then((loginResponse) =>{
    if (loginResponse == 0) {
      alert("Aluno não encontrado!")
    } else if (loginResponse == 400) {
      alert("Senha incorreta!")
    } else {
      localStorage.setItem("alunoId",loginResponse)
      window.location.href = "selecionatreino.html";
    }
  })
}

function loginProfessor() {
    var cpf = document.getElementById("professorCpf").value;
    var senha = document.getElementById("professorSenha").value;

    fetch('http://localhost:8080/treinamento/professor/login/' + cpf + '/' + senha, {
    method: 'POST',
    headers: {
      'Accept': 'application/json',
      'Content-Type': 'application/json'
    }
  }).then(response => response.json()).then((loginResponse) =>{
    if (loginResponse == 0) {
      alert("Professor não encontrado!")
    } else if (loginResponse == 400) {
      alert("Senha incorreta!")
    } else {
      localStorage.setItem("professorId",loginResponse)
      window.location.href = "cadastrodetreino.html";
    }
  })
}

function cadastraTreino() {
    var aluno = localStorage.getItem("alunoId");
    var professor = document.getElementById("professorTreino").value;
    var treino = document.getElementById("tipoTreinoAluno").value;
    var dia = document.getElementById("dia-do-treino").value;
    var horarioTreino = document.getElementById("hora").value;

    fetch('http://localhost:8080/treinamento/treino/agendar', {
    method: 'POST',
    headers: {
      'Accept': 'application/json',
      'Content-Type': 'application/json'
    },
    body: JSON.stringify({hora: horarioTreino, diaTreino: dia, alunoId: aluno, professorId: professor, tipoTreino: treino})
  }).then(response => response.json()).then((res) =>{
    localStorage.removeItem("diaTreino");
    localStorage.removeItem("hora");
    localStorage.removeItem("exercicios");

    localStorage.setItem("diaTreino", res["diaTreino"]);
    localStorage.setItem("hora", res["hora"]);
    localStorage.setItem("exercicios", res["exercicios"]);
    window.location.href = "checkaluno.html";
  })
}

function cadastraExercicio() {
  var nomeExercicio = document.getElementById("exercicioNomeCad").value;
  var tipo = document.getElementById("tipoExercicio").value;
  var series = document.getElementById("seriesExercicioCad").value;
  var nrRepeticoes = document.getElementById("repeticoesExercicioCad").value;
  
  fetch('http://localhost:8080/treinamento/exercicio/cadastrar', {
    method: 'POST',
    headers: {
      'Accept': 'application/json',
      'Content-Type': 'application/json'
    },
    body: JSON.stringify({nome: nomeExercicio, tipoExercicio: tipo, numeroSeries: series, repeticoes: nrRepeticoes})
  }).then(response => response.json()).then((res) =>{
    window.location.href = "checkprofessor.html";
  })

}


function mostraTreino() {
    infosTreino = document.getElementById("infosTreino");
    infosTreino.innerHTML += "Treino do dia <br>";
    infosTreino.innerHTML += "Hora: " + localStorage.getItem("hora") + "<br>";
    infosTreino.innerHTML += "Dia: " + localStorage.getItem("diaTreino") + "<br>";
    let exercicios = localStorage.getItem("exercicios");
    for(i = 0; i < exercicios.length; i++) {
        infosTreino.innerHTML += "Exercício " + (i+1) + ": " + exercicios[i]["nome"] + " - " + exercicios[i]["numeroSeries"] + " séries - " + exercicios[i]["repeticoes"] +" repetições <br>";
    }
}

function mostraProfessores() {
  let professorTreino = document.getElementById("professorTreino");
  fetch('http://localhost:8080/treinamento/professor/listar', {
    method: 'GET',
    headers: {
      'Accept': 'application/json',
      'Content-Type': 'application/json'
    }
  }).then(response => response.json()).then((professores) =>{
    for (i = 0; i < professores.length; i++) {
      professorTreino.innerHTML += "<option value='" + professores[i]["id"] + "'>" + professores[i]["nome"] + "</option>";
    }
  })
}
