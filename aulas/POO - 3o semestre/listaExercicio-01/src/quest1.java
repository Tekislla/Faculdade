
public class quest1 {

	public static void main(String[] args) {
		calculate();

	}

	public static void calculate() {
		Double med1 = (10d + 17d + 18d) / 3;
		Double med2 = (6d + 8d + 9d) / 3;

		Double medSum = med1 + med2;
		Double totalMed = medSum / 2;

		System.out.println("\nPrimeira média: " + med1);
		System.out.println("\nSegunda média: " + med2);
		System.out.println("\nSoma das médias: " + medSum);
		System.out.println("\nMédia das médias: " + totalMed);
	}

}
