package listaN1;

public class quest8 {
	public static class Animal {
		private String name;
		private float length;
		private int numbPaws;
		private String color;
		private String environment;
		private float avgVel;

		public Animal(String name, float length, int numbPaws, String color, String environment, float avgVel) {
			this.name = name;
			this.length = length;
			this.numbPaws = numbPaws;
			this.color = color;
			this.environment = environment;
			this.avgVel = avgVel;
		}

		public String getName() {
			return name;
		}

		public void setName(String name) {
			this.name = name;
		}

		public float getLength() {
			return length;
		}

		public void setLength(float length) {
			this.length = length;
		}

		public int getNumbPaws() {
			return numbPaws;
		}

		public void setNumbPaws(int numbPaws) {
			this.numbPaws = numbPaws;
		}

		public String getColor() {
			return color;
		}

		public void setColor(String color) {
			this.color = color;
		}

		public String getEnvironment() {
			return environment;
		}

		public void setEnvironment(String environment) {
			this.environment = environment;
		}

		public float getAvgVel() {
			return avgVel;
		}

		public void setAvgVel(float avgVel) {
			this.avgVel = avgVel;
		}

		public void returnData() {
			System.out.println("\nName: " + this.getName() + "\nLength: " + this.getLength() + "\nNumber of Paws: "
					+ this.getNumbPaws() + "\nColor: " + this.getColor() + "\nEnviroment: " + this.getEnvironment()
					+ "\nAverage Speed: " + this.getAvgVel());
		}

	}
	
	public static class Mammals extends Animal{

		public Mammals(String name, float length, int numbPaws, String color, String environment, float avgVel) {
			super(name, length, numbPaws, color, environment, avgVel);
		}
		
	}
	
	public static class Oviparous extends Animal{

		public Oviparous(String name, float length, int numbPaws, String color, String environment, float avgVel) {
			super(name, length, numbPaws, color, environment, avgVel);
		}
		
	}
	
	public static void main(String[] args) {
		Mammals mammal = new Mammals("Dog", 0.5f, 4, "White", "Street", 10f);
		Oviparous oviparou = new Oviparous("Chicken", 0.2f, 2, "White", "Farm", 5f);
		
		mammal.returnData();
		oviparou.returnData();
	}
	
	
	
	

}
