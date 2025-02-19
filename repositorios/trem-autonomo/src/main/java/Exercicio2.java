package main.java;

public class Exercicio2 {
    public static void main(String[] args) {
        Boolean modoInfinito = false;
        String[] comandos = {"direita", "direita", "direita", "esquerda", "esquerda", "direita", "esquerda", "direita", "esquerda", "direita"};

        int limiteMinimo = -2;
        int limiteMaximo = 10;

        int posicaoAtual = 0;

        for (String comando : comandos) {
            if (comando.equals("direita")) {
                if (!modoInfinito) {
                    if (posicaoAtual < limiteMaximo) {
                        posicaoAtual++;
                    }
                } else {
                    posicaoAtual++;
                }
            } else if (comando.equals("esquerda")) {
                if (!modoInfinito) {
                    if (posicaoAtual > limiteMinimo) {
                        posicaoAtual--;
                    }
                } else {
                    posicaoAtual--;
                }
            }
        }

        System.out.println("Posição final do trem: " + posicaoAtual);
    }
}