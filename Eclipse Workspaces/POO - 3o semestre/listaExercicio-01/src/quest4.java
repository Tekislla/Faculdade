import java.time.LocalDate;
import java.time.Period;
import java.time.format.DateTimeFormatter;


public class quest4 {

	public static class Person {
		private String name;
		private LocalDate birthDate;
		private Double height;
		
		public Person() {
			
		}

		public String getName() {
			return name;
		}

		public void setName(String name) {
			this.name = name;
		}

		public String getBirthDateFormatted() {
			DateTimeFormatter dtf = DateTimeFormatter.ofPattern("dd/MM/yyyy");
			return birthDate.format(dtf);
		}
		
		public LocalDate getBirthDate() {
			return birthDate;
		}

		public void setBirthDate(LocalDate birthDate) {
			this.birthDate = birthDate;
		}

		public Double getHeight() {
			return height;
		}

		public void setHeight(Double height) {
			this.height = height;
		}
		
		public int calculateAge(LocalDate birthDate) {
		
			LocalDate today = LocalDate.now();
			
			
		
			Period period = Period.between(birthDate, today);
			
		
			
		
			return period.getYears();
		}
		
		public void getInfo(Person person) {
			System.out.println("\nName: " + person.getName());
			System.out.println("\nBirth Date: " + person.getBirthDateFormatted());
			System.out.println("\nHeight: " + person.getHeight());
			System.out.println("\nAge: " + person.calculateAge(person.getBirthDate()));
		}

	}

	public static void main(String[] args) {
		Person person = new Person();
		person.setName("João");
		person.setBirthDate(LocalDate.of(2000, 8, 10));
		person.setHeight(1.75);
		
		person.calculateAge(person.getBirthDate());
		person.getInfo(person);
		
	}

}
