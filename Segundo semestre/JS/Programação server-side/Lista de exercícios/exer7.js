function procuraNome(nome1, nome2, nome3, nome4, nome5, nome6, nome7, nome8, nome9, nome10, nomeProcurar){
    nomes = [nome1, nome2, nome3, nome4, nome5, nome6, nome7, nome8, nome9, nome10];
    
    for(i = 0; i < nomes.length; i++) {
        if(nomes[i] === nomeProcurar){
          nomes = nomes[i];
          return "Achei"
          break;
        } else {
            return "Não achei"
        }
      }

}


console.log(procuraNome("joao", "julia", "alberto", "zorro", "zé", "joca", "zeca", "josé", "luna", "helena", "juca"))