package listaN1;

public class quest1 {

	public static class Person {
		private String name;
		private double height;
		private int age;

		public Person(String name, double height, int age) {
			this.name = name;
			this.height = height;
			this.age = age;
		}

		public String getName() {
			return name;
		}

		public void setName(String name) {
			this.name = name;
		}

		public double getHeight() {
			return height;
		}

		public void setHeight(double height) {
			this.height = height;
		}

		public int getAge() {
			return age;
		}

		public void setAge(int age) {
			this.age = age;
		}

	}

	public static void main(String[] args) {
		Person p1 = new Person("João Lazarim", 1.75, 21);
		Person p2 = new Person("Bilu Teteia", 1.72, 18);
		
		System.out.println("\nPerson 1: \nName: " + p1.getName() + "\nHeight: " + p1.getHeight() + "\nAge: " + p1.getAge());
		System.out.println("\nPerson 2: \nName: " + p2.getName() + "\nHeight: " + p2.getHeight() + "\nAge: " + p2.getAge());
		
		
	}
}
