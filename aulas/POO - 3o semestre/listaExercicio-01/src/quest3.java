
public class quest3 {

	public static void main(String[] args) {
		beforeAndAfterNumber(5);

	}
	
	public static void beforeAndAfterNumber(Integer number) {
		Integer prevNumber = number - 1;
		Integer nextNumber = number + 1;
		
		System.out.println("\nN�mero antecessor: " + prevNumber);
		System.out.println("znN�mero sucessor: " + nextNumber);
	}

}
