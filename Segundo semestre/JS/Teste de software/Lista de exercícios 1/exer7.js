function estaEntre(num, min, max, inc = false){
    if (inc == true){
        if (num >= min && num <= max){
            return true;
        } else {
            return false;
        }
    } else {
        if (num > min && num < max){
            return true;
        } else {
            return false;
        }
    } 

}


console.log(estaEntre(1, 1, 100))