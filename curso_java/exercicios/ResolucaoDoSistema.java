import java.awt.Toolkit;
import java.awt.Dimension;


public class ResolucaoDoSistema {

	public static void main(String[] args) {
		Toolkit reso = Toolkit.getDefaultToolkit();
		Dimension dime = reso.getScreenSize();

		System.out.println("A resolução do sistema é " + dime.width + " por " + dime.height);

	}

}
