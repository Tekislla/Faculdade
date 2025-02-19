package listaN1;

public class quest7 {
	public class Animal {
		private String name;
		private String breed;

		public Animal() {

		}

		public Animal(String name) {
			this.name = name;
		}

		public String getName() {
			return name;
		}

		public void setName(String name) {
			this.name = name;
		}

		public String getBreed() {
			return breed;
		}

		public void setBreed(String breed) {
			this.breed = breed;
		}

		public String walk() {
			return "You walked!";
		}

	}
	
	public class Dog extends Animal{
		public String bark() {
			return "Woof";
		}
		
	}
	
	public class Cat extends Animal{
		public String meow() {
			return "Meow";
		}
		
	}

}
