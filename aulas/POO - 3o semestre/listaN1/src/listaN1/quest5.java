package listaN1;

public class quest5 {
	public static class Property {
		private String street;
		private String district;
		private String city;
		private String state;
		private double price;

		public String getStreet() {
			return street;
		}

		public void setStreet(String street) {
			this.street = street;
		}

		public String getDistrict() {
			return district;
		}

		public void setDistrict(String district) {
			this.district = district;
		}

		public String getCity() {
			return city;
		}

		public void setCity(String city) {
			this.city = city;
		}

		public String getState() {
			return state;
		}

		public void setState(String state) {
			this.state = state;
		}

		public double getPrice() {
			return price;
		}

		public void setPrice(double price) {
			this.price = price;
		}

	}

	public static class newProperty extends Property {
		private double price = super.getPrice() + (super.getPrice() * 0.1);
		
		@Override
		public double getPrice() {
			return this.price;
		}

	}

	public static class oldProperty extends Property {
		private double price = super.getPrice() - (super.getPrice() * 0.1);

		@Override
		public double getPrice() {
			return this.price;
		}
	}

}
