package get_set;

public class met_get_set {

	private String banda;


	public void setBanda(String nome) {
		banda = nome;

	}

	public String getBanda() {
		return banda;

	}


	public void mostraBanda() {
		System.out.println("Sua banda favorita é " + getBanda());

	}

}
