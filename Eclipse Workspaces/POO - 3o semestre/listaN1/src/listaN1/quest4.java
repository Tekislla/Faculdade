package listaN1;

public class quest4 {

	public static class Elevator {
		private int actualFloor;
		private int totalFloors;
		private int elevatorCapacity;
		private int personsInElevator;

		public Elevator(int elevatorCapacity, int totalFloors) {
			this.actualFloor = 0;
			this.totalFloors = totalFloors;
			this.elevatorCapacity = elevatorCapacity;
			this.personsInElevator = 0;
		}

		public int getActualFloor() {
			return actualFloor;
		}

		public void setActualFloor(int actualFloor) {
			this.actualFloor = actualFloor;
		}

		public int getTotalFloors() {
			return totalFloors;
		}

		public void setTotalFloors(int totalFloors) {
			this.totalFloors = totalFloors;
		}

		public int getElevatorCapacity() {
			return elevatorCapacity;
		}

		public void setElevatorCapacity(int elevatorCapacity) {
			this.elevatorCapacity = elevatorCapacity;
		}

		public int getPersonsInElevator() {
			return personsInElevator;
		}

		public void setPersonsInElevator(int personsInElevator) {
			this.personsInElevator = personsInElevator;
		}

		public void enterInElevator(Elevator elevator) {
			if (elevator.getPersonsInElevator() < elevator.getElevatorCapacity()) {
				elevator.setPersonsInElevator(elevator.getPersonsInElevator() + 1);
			} else {
				System.out.println("\nElevador cheio!");
			}
		}

		public void exitElevator(Elevator elevator) {
			if (elevator.getPersonsInElevator() > 0) {
				elevator.setPersonsInElevator(elevator.getPersonsInElevator() - 1);
			} else {
				System.out.println("\nElevador vazio!");
			}
		}

		public void goUp(Elevator elevator) {
			if (elevator.getTotalFloors() < elevator.getActualFloor()) {
				elevator.setActualFloor(elevator.getActualFloor() + 1);
			} else {
				System.out.println("\nElevador está no último andar!");
			}
		}

		public void goDown(Elevator elevator) {
			if (elevator.getActualFloor() > 0) {
				elevator.setActualFloor(elevator.getActualFloor() - 1);
			} else {
				System.out.println("\nElevador está no térreo!");
			}
		}

	}

	public static void main(String[] args) {
		Elevator elevator = new Elevator(10, 5);

		elevator.enterInElevator(elevator);
		elevator.goUp(elevator);
		elevator.goDown(elevator);
		elevator.exitElevator(elevator);
	}

}
