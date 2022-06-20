package listaN2;

import java.util.ArrayList;
import java.util.List;

public class quest1 {
	public static class Cliente {
		private Long numeroCliente;
		private String nome;
		private Long telefone;
		private String endereco;

		public Cliente(Long numeroCliente, String nome, Long telefone, String endereco) {
			this.numeroCliente = numeroCliente;
			this.nome = nome;
			this.telefone = telefone;
			this.endereco = endereco;
		}

		public Long getNumeroCliente() {
			return numeroCliente;
		}

		public void setNumeroCliente(Long numeroCliente) {
			this.numeroCliente = numeroCliente;
		}

		public String getNome() {
			return nome;
		}

		public void setNome(String nome) {
			this.nome = nome;
		}

		public Long getTelefone() {
			return telefone;
		}

		public void setTelefone(Long telefone) {
			this.telefone = telefone;
		}

		public String getEndereco() {
			return endereco;
		}

		public void setEndereco(String endereco) {
			this.endereco = endereco;
		}

	}

	public static class Pedido {
		private Cliente cliente;
		private List<Prato> pratos;
		private Double valorTotal = 0d;

		public Pedido(Cliente cliente, List<Prato> pratos) {
			this.cliente = cliente;
			this.pratos = pratos;
		}
		
		public Pedido(Cliente cliente, List<Prato> pratos, Double valorTotal) {
			this.cliente = cliente;
			this.pratos = pratos;
			this.valorTotal = valorTotal;
		}

		public Cliente getCliente() {
			return cliente;
		}

		public void setCliente(Cliente cliente) {
			this.cliente = cliente;
		}

		public List<Prato> getPratos() {
			return pratos;
		}

		public void setPratos(List<Prato> pratos) {
			this.pratos = pratos;
		}

		public Double getValorTotal() {
			return valorTotal;
		}

		public void setValorTotal(Double valorTotal) {
			this.valorTotal = valorTotal;
		}

	}

	public static class Prato {
		private String nome;
		private Double preco;
		private String descricao;

		public Prato(String nome, Double preco, String descricao) {
			this.nome = nome;
			this.preco = preco;
			this.descricao = descricao;
		}

		public String getNome() {
			return nome;
		}

		public void setNome(String nome) {
			this.nome = nome;
		}

		public Double getPreco() {
			return preco;
		}

		public void setPreco(Double preco) {
			this.preco = preco;
		}

		public String getDescricao() {
			return descricao;
		}

		public void setDescricao(String descricao) {
			this.descricao = descricao;
		}

	}

	
	public static void main(String[] args) {
		Cliente cliente1 = new Cliente(1L, "João", 47991985098L, "Rua João Paul 280");
		Cliente cliente2 = new Cliente(2L, "Júlia", 47992408890L, "Rua do Limoeiro 410");
		
		Prato arrozCarreteiro = new Prato("Arroz carreteiro", 17.50d, "Belo prato de arroz carreteiro");
		Prato feijaoCarioca = new Prato("Feijão carioquinha", 18.50d, "Feijão carioquinha fresquinho com linguiça");
		Prato bifeAcebolado = new Prato("Bife acebolado", 21.00d, "Bife de patinho com cebola");
		Prato espaguete = new Prato("Espaguete", 15.00d, "Espaguete servido ao alho e óleo");
		Prato atum = new Prato("Atum", 12.00d, "Atum fresquinho pescado nas águas do ubatuba");
		
		List<Prato> listaPedidos1 = new ArrayList<>();
		listaPedidos1.add(arrozCarreteiro);
		listaPedidos1.add(feijaoCarioca);
		listaPedidos1.add(bifeAcebolado);
		
		List<Prato> listaPedidos2 = new ArrayList<>();
		listaPedidos2.add(espaguete);
		listaPedidos2.add(atum);
		
		Pedido pedidoJoao = new Pedido(cliente1, listaPedidos1);
		
		for (Prato prato : listaPedidos1) {
			Double valorAtual = pedidoJoao.getValorTotal();
			valorAtual += prato.getPreco();
			pedidoJoao.setValorTotal(valorAtual);
		}
		
		Pedido pedidoJulia = new Pedido(cliente2, listaPedidos2);
		
		for (Prato prato : listaPedidos2) {
			Double valorAtual = pedidoJulia.getValorTotal();
			valorAtual += prato.getPreco();
			pedidoJulia.setValorTotal(valorAtual);
		}
		
		List<Pedido> pedidos = new ArrayList<>();
		pedidos.add(pedidoJoao);
		pedidos.add(pedidoJulia);
		int i = 1;
		
		System.out.println("--------------------Lista de pedidos--------------------\n");
		
		for (Pedido pedido : pedidos) {
			System.out.println("Pedido " + i + ": \n");
			System.out.println("Cliente: " + pedido.getCliente().getNome());
			System.out.println("Telefone: " + pedido.getCliente().getTelefone());
			System.out.println("Endereço: " + pedido.getCliente().getEndereco() + "\n");
			System.out.println("Pratos: \n");
			for (Prato prato : pedido.getPratos()) {
				System.out.println("Nome: " + prato.getNome());
				System.out.println("Valor: " + prato.getPreco());
				System.out.println("Descrição: " + prato.getDescricao());
			}
			System.out.println("\nValor total: R$" + pedido.getValorTotal());
			
			System.out.println("\n------------------------------------------------------\n");
			i++;
		}
		
	}
	
}
