
public class quest2 {

	public static void main(String[] args) {
		calculateReajust(10d);
	}

	public static void calculateReajust(Double numb) {
		Double reajustedNumb = numb + (numb / 100);
		System.out.println("Saldo reajustado: " + reajustedNumb);
	}

}
