package listaN2;

import java.util.Scanner;

public class quest3 {
	public static class Ingresso {
		public Double valor;

		public Ingresso(Double valor) {
			this.valor = valor;
		}

		public void imprimeValor(Ingresso ingresso) {
			System.out.println("Valor do ingresso: R$" + ingresso.valor);
		}
	}

	public static class Vip extends Ingresso {
		public Double valor = super.valor + (super.valor * 0.5);

		public Vip(Double valor) {
			super(valor + (valor * 0.75));
		}

		public void imprimeIngresso(Vip vip) {
			System.out.println("Tipo de ingresso: VIP");
			System.out.println("Valor do ingresso VIP: R$" + vip.valor);
		}
	}

	public static class Normal extends Ingresso {
		public Normal(Double valor) {
			super(valor);
		}

		public void imprimeIngresso(Normal normal) {
			System.out.println("Tipo de ingresso: normal");
			System.out.println("Valor do ingresso: R$" + normal.valor);
		}

	}

	public static class CamaroteInferior extends Vip {
		public String localizacao = "Camarote inferior";

		public CamaroteInferior(Double valor) {
			super(valor);
		}

		public void imprimeIngresso(CamaroteInferior camInferior) {
			System.out.println("Localização do ingresso: " + camInferior.localizacao);
			System.out.println("Valor do ingresso: R$" + camInferior.valor);
		}

	}

	public static class CamaroteSuperior extends Vip {
		public String localizacao = "Camarote superior";

		public CamaroteSuperior(Double valor) {
			super(valor * 2);
		}

		public void imprimeIngresso(CamaroteSuperior camSuperior) {
			System.out.println("Localização do ingresso: " + camSuperior.localizacao);
			System.out.println("Valor do ingresso: R$" + camSuperior.valor);
		}

	}

	public static void main(String[] args) {
		Ingresso ingresso = new Ingresso(200d);
		Scanner s = new Scanner(System.in);

		System.out.println("Digite 1 para ingresso normal e 2 para ingresso VIP: ");
		Integer tipo = s.nextInt();
		if (tipo == 1 || tipo == 2) {
			System.out.println("Confirme a seleção digitando S ou digite outra coisa para finalizar");
			String confirmacao = s.next();
			if (confirmacao.equals("s") || confirmacao.equals("S")) {
				if (tipo == 1) {
					ingresso.imprimeValor(ingresso);
					s.close();
				} else if (tipo == 2) {
					System.out.println("Digite 1 para CAMAROTE SUPERIOR e 2 para CAMAROTE INFERIOR");
					Integer tipoCamarote = s.nextInt();
					if (tipoCamarote == 1 || tipoCamarote == 2) {
						System.out.println("Confirme a seleção digitando S ou digite outra coisa para finalizar");
						String confirmacaoCamarote = s.next();
						if (confirmacaoCamarote.equals("s") || confirmacaoCamarote.equals("S")) {
							if (tipoCamarote == 1) {
								CamaroteSuperior camSup = new CamaroteSuperior(ingresso.valor);
								camSup.imprimeIngresso(camSup);
								s.close();
							} else if (tipoCamarote == 2) {
								CamaroteInferior camInf = new CamaroteInferior(ingresso.valor);
								camInf.imprimeIngresso(camInf);
								s.close();
							} else {
								System.out.println("Escolha inválida! Finalizando a aplicação...");
								s.close();
							}
						} else {
							System.out.println("Finalizando a aplicação...");
							s.close();
						}
					} else {
						System.out.println("Escolha inválida! Finalizando a aplicação...");
						s.close();
					}
				} else {
					System.out.println("Escolha inválida! Finalizando a aplicação...");
					s.close();
				}
			} else {
				System.out.println("Finalizando a aplicação...");
				s.close();
			}
		} else {
			System.out.println("Escolha inválida! Finalizando a aplicação...");
			s.close();
		}
	}
}
