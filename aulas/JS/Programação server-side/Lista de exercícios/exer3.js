function converteMedida(temperatura){
    temperaturaCelsius = (temperatura - 32)*(5/9)
    
    return temperatura + " graus farenheit equivalem à " + temperaturaCelsius + " graus celsius";
}


console.log(converteMedida(32));