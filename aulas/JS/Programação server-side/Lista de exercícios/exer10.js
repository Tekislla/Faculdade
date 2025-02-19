// Deixei a estrutura de código inteira para fazer o relógio andar em tempo real, porém, não consegui fazê-lo.

function relogio(){
    now = new Date;
    hh = now.getHours();
    mm = now.getMinutes();
    ss = now.getSeconds();

    if (ss < 60) {
        ss++;
    } else {
        ss = 0;
        mm++;
    }

    if (mm < 60) {
        mm = mm;
    } else {
        mm = 0;
        hh ++;
    }

    if (hh < 24){
        hh = hh;
    } else {
        hh = 0;
    }

    if (mm < 10){
        mm  = "0" + mm;
    }

    if (ss < 10){
        ss  = "0" + ss;
    }

    horario = hh + ":" + mm + ":" + ss;

    return horario;
}

console.log(relogio())