
public class quest3 {

	public static void main(String[] args) {
		beforeAndAfterNumber(5);

	}
	
	public static void beforeAndAfterNumber(Integer number) {
		Integer prevNumber = number - 1;
		Integer nextNumber = number + 1;
		
		System.out.println("\nNúmero antecessor: " + prevNumber);
		System.out.println("znNúmero sucessor: " + nextNumber);
	}

}
