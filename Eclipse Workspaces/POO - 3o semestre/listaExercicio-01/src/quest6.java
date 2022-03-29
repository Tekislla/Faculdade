
public class quest6 {

	public static class Controller {
		public void volumeDown(Television tv) {
			if (tv.getVolume() > 0) {
				tv.setVolume(tv.getVolume() + 1);
			} else {
				System.out.println("Volume está no mínimo");
			}
		}

		public void volumeUp(Television tv) {
			if (tv.getVolume() < 100) {
				tv.setVolume(tv.getVolume() - 1);
			} else {
				System.out.println("Volume está no máximo");
			}
		}

		public void changeChannel(Television tv, int channel) {
			tv.setChannel(channel);
		}

		public void checkChannelAndVolume(Television tv) {
			System.out.println("Volume: " + tv.getVolume());
			System.out.println("Canal: " + tv.getChannel());
		}
	}

	public static class Television {
		private int volume = 0;
		private int channel = 1;

		public int getVolume() {
			return volume;
		}

		public void setVolume(int volume) {
			this.volume = volume;
		}

		public int getChannel() {
			return channel;
		}

		public void setChannel(int channel) {
			this.channel = channel;
		}

	}

	public static void main(String[] args) {
		Television tv = new Television();
		Controller controller = new Controller();

		controller.volumeUp(tv);
		controller.changeChannel(tv, 5);
		controller.volumeDown(tv);

		controller.checkChannelAndVolume(tv);
	}

}
