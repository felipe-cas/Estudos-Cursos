package livro_class;

public class Livro {

	// ATRIBUTOS

	String nome;
	String desc;
	String autor;
	String isbn;
	double preco;
	String dataPub;


	// METODOS

	void infoLivro() {
		System.out.printf("Nome: 	%s\n", nome);
		System.out.printf("Desc:	%s\n", desc);
		System.out.printf("Autor:	%s\n", autor);
		System.out.printf("Pub.:	%s\n", dataPub);
		System.out.printf("ISBN:	%s\n", isbn);
		System.out.printf("Preço:	R$ %.2f\n", preco);
	}

}
