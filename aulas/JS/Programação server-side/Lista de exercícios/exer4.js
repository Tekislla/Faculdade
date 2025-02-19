function salarioTotal(horasTrabalhadas, salarioHora){
    if (horasTrabalhadas <= 40){
        return "Seu salário final é " + (horasTrabalhadas * salarioHora);
    } else {
        horasExtras = horasTrabalhadas - 40;
        bonusHoraExtra = salarioHora * 0.5;
        salarioBonus = horasExtras * bonusHoraExtra;
        return "Seu salário final é " + ((horasTrabalhadas * salarioHora) + salarioBonus);
    }
}

console.log(salarioTotal(50, 50))