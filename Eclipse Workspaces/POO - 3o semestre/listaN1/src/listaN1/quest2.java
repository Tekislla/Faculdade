package listaN1;

public class quest2 {

	public static class AllNotes {
		private double n1;
		private double n2;
		private double n3;

		public AllNotes(double n1, double n2, double n3) {
			this.n1 = n1;
			this.n2 = n2;
			this.n3 = n3;
		}

		public double getN1() {
			return n1;
		}

		public void setN1(double n1) {
			this.n1 = n1;
		}

		public double getN2() {
			return n2;
		}

		public void setN2(double n2) {
			this.n2 = n2;
		}

		public double getN3() {
			return n3;
		}

		public void setN3(double n3) {
			this.n3 = n3;
		}

		public String calculateAvg(AllNotes totalNotes) {
			double average = (totalNotes.getN1() + totalNotes.getN2() + totalNotes.getN3()) / 3;
			if(average >= 6) {
				return "Aprovado com nota " + average;
			} else if (average < 6 && average >= 4) {
				return "Verificação suplementar com nota " + average;
			} else {
				return "Reprovado com nota " + average;
			}
			
		}

	}

	public static void main(String[] args) {
		AllNotes totalNotes = new AllNotes(10d, 8d, 3d);
		System.out.println(totalNotes.calculateAvg(totalNotes));

	}

}
