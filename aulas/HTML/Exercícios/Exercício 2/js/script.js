// Validar formulário

function validar(){
    var nome = formulario_cad.nome;
    var usuario = formulario_cad.usuario;
    var senha = formulario_cad.senha;
    var email = formulario_cad.email;
    var celular = formulario_cad.celular;
    var nascimento = formulario_cad.nascimento;
    var sexo = formulario_cad.sexo;
    var est_civil = formulario_cad.est_civil;
    var tipo = formulario_cad.tipo;

    if (nome.value == "") {
        alert("Informe seu nome!");
        nome.focus();
    }

    if (usuario.value == "") {
        alert("Informe seu usuário!");
        usuario.focus();
    }

    if (senha.value == "") {
        alert("Informe sua senha!");
        senha.focus();
    }

    if (email.value == "") {
        alert("Informe seu email!");
        email.focus();
    }

    if (celular.value == "") {
        alert("Informe seu celular!");
        celular.focus();
    }

    if (nascimento.value == "") {
        alert("Informe sua data de nascimento!");
        nascimento.focus();
    }

    if (sexo.value == "") {
        alert("Informe seu sexo!");
        sexo.focus();
    }

    if (est_civil.value == "") {
        alert("Informe seu estado civil!");
        est_civil.focus();
    }

    if (tipo.value == "") {
        alert("Informe se você é estudante, professor ou coordenador!");
        tipo.focus();
    }

    if (nome.value != "" && usuario.value != "" && senha.value != "" && email.value != "" && celular.value != "" && nascimento.value != "" && sexo.value != "" && est_civil.value != "" && tipo.value != "") {
        alert("Cadastro realizado com sucesso!");
    }
    
}

var slideIndex = 1;
showSlides(slideIndex);

// próximo/prévio
function plusSlides(n) {
showSlides(slideIndex += n);
}

// thumb
function currentSlide(n) {
showSlides(slideIndex = n);
}

function showSlides(n) {
var i;
var slides = document.getElementsByClassName("mySlides");
var dots = document.getElementsByClassName("dot");
if (n > slides.length) {slideIndex = 1}
if (n < 1) {slideIndex = slides.length}
for (i = 0; i < slides.length; i++) {
    slides[i].style.display = "none";
}
for (i = 0; i < dots.length; i++) {
    dots[i].className = dots[i].className.replace(" active", "");
}
slides[slideIndex-1].style.display = "block";
dots[slideIndex-1].className += " active";
}
var slideIndex = 0;
showSlides();

function showSlides() {
var i;
var slides = document.getElementsByClassName("mySlides");
for (i = 0; i < slides.length; i++) {
    slides[i].style.display = "none";
}
slideIndex++;
if (slideIndex > slides.length) {slideIndex = 1}
slides[slideIndex-1].style.display = "block";
setTimeout(showSlides, 2000); // Change image every 2 seconds
}
