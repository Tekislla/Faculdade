package listaN1;

public class quest9 {
	public abstract class Vehicle {
		protected float maxVel;
		protected float actualVel;

		public abstract float accelerate(float speed);

		public abstract void stop();

	}

	public class Automobile extends Vehicle {
		protected float oilLiters;
		protected float oilMaxCapacity;

		@Override
		public float accelerate(float speed) {
			if (this.actualVel < this.maxVel) {
				this.actualVel += speed;
			}

			if (this.actualVel > this.maxVel) {
				this.actualVel = this.maxVel;
			}

			return this.actualVel;
		}

		@Override
		public void stop() {
			this.actualVel = 0;

		}

		public void changeOil(float liters) {
			if (this.oilLiters < this.oilMaxCapacity) {
				this.oilLiters += liters;
			}

			if (this.oilLiters > this.oilMaxCapacity) {
				this.oilLiters = this.oilMaxCapacity;
			}
		}

	}

	public class Bike extends Vehicle {

		@Override
		public float accelerate(float speed) {
			if (this.actualVel < this.maxVel) {
				this.actualVel += speed;
			}

			if (this.actualVel > this.maxVel) {
				this.actualVel = this.maxVel;
			}

			return this.actualVel;
		}

		@Override
		public void stop() {
			this.actualVel = 0;

		}

	}

}
