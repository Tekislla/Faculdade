package listaN1;

import java.util.ArrayList;
import java.util.List;

public class quest6 {
	public static class Market {
		public static void main(String[] args) {
			Client client = new Client("João", "032.432.435-34");
			List<Product> productsList = new ArrayList<>();
			productsList.add(new Product("Spaghetti", 3.8f, 10));
			productsList.add(new Product("Rice", 4.3f, 5));

			ProductOrder order = new ProductOrder(client, productsList, PaymentMethod.CARD);

		}

	}

	public static class Product {
		private String description;
		private float price;
		private int quantityInStock;

		public Product(String description, float price, int quantityInStock) {
			this.description = description;
			this.price = price;
			this.quantityInStock = quantityInStock;
		}

		public String getDescription() {
			return description;
		}

		public void setDescription(String description) {
			this.description = description;
		}

		public float getPrice() {
			return price;
		}

		public void setPrice(float price) {
			this.price = price;
		}

		public float getQuantityInStock() {
			return quantityInStock;
		}

		public void setQuantityInStock(int quantityInStock) {
			this.quantityInStock = quantityInStock;
		}

	}

	public static class ProductOrder {
		private Client client;
		private List<Product> products;
		private PaymentMethod paymentMethod;

		public ProductOrder(Client client, List<Product> products, PaymentMethod paymentMethod) {
			this.client = client;
			this.products = products;
			this.paymentMethod = paymentMethod;
		}

		public Client getClient() {
			return client;
		}

		public void setClient(Client client) {
			this.client = client;
		}

		public List<Product> getProducts() {
			return products;
		}

		public void setProducts(List<Product> products) {
			this.products = products;
		}

		public PaymentMethod getPaymentMethod() {
			return paymentMethod;
		}

		public void setPaymentMethod(PaymentMethod paymentMethod) {
			this.paymentMethod = paymentMethod;
		}

	}

	public static class Client {
		private String name;
		private String cpf;

		public Client(String name, String cpf) {
			this.name = name;
			this.cpf = cpf;
		}

		public String getName() {
			return name;
		}

		public void setName(String name) {
			this.name = name;
		}

		public String getCpf() {
			return cpf;
		}

		public void setCpf(String cpf) {
			this.cpf = cpf;
		}

	}

	public enum PaymentMethod {
		MONEY, CARD, CHECK;
	}

}
