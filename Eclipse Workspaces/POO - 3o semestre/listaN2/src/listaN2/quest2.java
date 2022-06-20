package listaN2;

import java.util.Scanner;

public class quest2 {
	public static class Pessoa {
		public String nome;
		public Integer idade;

		public Pessoa(String nome, Integer idade) {
			this.nome = nome;
			this.idade = idade;
		}

		public void mostraDados(Pessoa pessoa) {
			System.out.println("Nome da pessoa: " + pessoa.nome);
			System.out.println("Idade da pessoa: " + pessoa.idade);
		}

	}

	public static class Aluno extends Pessoa {
		public String curso;

		public Aluno(String nome, Integer idade, String curso) {
			super(nome, idade);
			this.curso = curso;
		}

		public void mostraDados(Aluno aluno) {
			System.out.println("Nome do aluno: " + aluno.nome);
			System.out.println("Idade do aluno: " + aluno.idade);
			System.out.println("Curso do aluno: " + aluno.curso);
		}

	}

	public static void main(String[] args) {
		Pessoa pessoaReferencia = new Pessoa("João", 21);
		Scanner s = new Scanner(System.in);

		System.out.println("Digite A para instanciar um aluno e P para instanciar uma pessoa: ");
		String tipo = s.next();
		s.close();
		
		if (tipo.equals("a") || tipo.equals("A")) {
			Aluno aluno = new Aluno(pessoaReferencia.nome, pessoaReferencia.idade, "Engenharia de software");
			aluno.mostraDados(aluno);
		} else if (tipo.equals("p") || tipo.equals("P")) {
			Pessoa pessoa = new Pessoa(pessoaReferencia.nome, pessoaReferencia.idade);
			pessoa.mostraDados(pessoa);
		} else {
			System.out.println("Entrada inválida, finalizando a aplicação...");
		}
		
		
	}

}
