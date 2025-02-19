package main.java;
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Exercicio3 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int limiteMinimo = 0;
        int limiteMaximo = 0;

        System.out.print("O trem possui limite infinito? (s/n): ");
        String respostaLimiteInfinito = scanner.next();
        boolean limiteInfinito = respostaLimiteInfinito.equalsIgnoreCase("s");

        if (!limiteInfinito) {
            System.out.print("Informe o limite mínimo do trilho: ");
            limiteMinimo = scanner.nextInt();
            System.out.print("Informe o limite máximo do trilho: ");
            limiteMaximo = scanner.nextInt();
        }

        System.out.print("Informe a posição inicial do trem: ");
        int posicaoAtual = scanner.nextInt();

        List<Integer> comandos = new ArrayList<>();

        System.out.println("Informe os comandos de movimento (1 para direita, -1 para esquerda):");
        while (comandos.size() < 30) {
            System.out.print("Comando: ");
            int comando = scanner.nextInt();
            if (comando == 1 || comando == -1) {
                comandos.add(comando);
            } else {
                System.out.println("Comando inválido! Apenas 1 ou -1 são permitidos.");
            }

            System.out.print("Deseja adicionar mais um comando? (s/n): ");
            String continuar = scanner.next();
            if (!continuar.equalsIgnoreCase("s")) {
                break;
            }
        }

        for (int comando : comandos) {
            int novaPosicao = posicaoAtual + comando;

            if (!limiteInfinito) {
                if (novaPosicao >= limiteMinimo && novaPosicao <= limiteMaximo) {
                    posicaoAtual = novaPosicao;
                }
            } else {
                posicaoAtual = novaPosicao;
            }
        }

        System.out.println("Posição final do trem: " + posicaoAtual);

        scanner.close();
    }
}
