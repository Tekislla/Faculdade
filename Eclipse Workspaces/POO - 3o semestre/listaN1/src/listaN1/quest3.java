package listaN1;

public class quest3 {
	
	public class Car {
		private int numCar;
		private String pilotName;
		private float maxVel;
		private float minVel;
		private boolean carOn;
		private float actualVel;

		public Car(int numCar, String pilotName, float maxVel, float minVel, boolean carOn) {
			this.numCar = numCar;
			this.pilotName = pilotName;
			this.maxVel = maxVel;
			this.minVel = minVel;
			this.carOn = carOn;
		}

		public int getNumCar() {
			return numCar;
		}

		public void setNumCar(int numCar) {
			this.numCar = numCar;
		}

		public String getPilotName() {
			return pilotName;
		}

		public void setPilotName(String pilotName) {
			this.pilotName = pilotName;
		}

		public float getMaxVel() {
			return maxVel;
		}

		public void setMaxVel(float maxVel) {
			this.maxVel = maxVel;
		}

		public float getMinVel() {
			return minVel;
		}

		public void setMinVel(float minVel) {
			this.minVel = minVel;
		}

		public boolean isCarOn() {
			return carOn;
		}

		public void setCarOn(boolean carOn) {
			this.carOn = carOn;
		}

		public float getActualVel() {
			return actualVel;
		}

		public void setActualVel(float actualVel) {
			this.actualVel = actualVel;
		}

		public void acelerate(float speed, Car car) {
			if (car.isCarOn() && car.getActualVel() < car.getMaxVel()) {
				car.setActualVel(car.getActualVel() + speed);
			}
			
			if (car.getActualVel() > car.getMaxVel()) {
				car.setActualVel(car.getMaxVel());
			}

		}

		public void stop(Car car) {
			if (car.isCarOn() && car.getActualVel() > 0) {
				car.setActualVel(0);
			}
		}

		public void breakCar(float speed, Car car) {
			if (car.isCarOn() && car.getActualVel() > 0) {
				car.setActualVel(car.getActualVel() - ((car.getActualVel() * speed) / 100));
			}

		}

		public void turnOff(Car car) {
			car.setCarOn(false);
		}

		public void turnOn(Car car) {
			car.setCarOn(true);
		}

	}

}
