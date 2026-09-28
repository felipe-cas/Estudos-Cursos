package livro_class;

public class Principal {

	public static void main(String[] args) {

		Livro livro = new Livro();

		livro.nome 	= "Livro Teste";
		livro.desc = "Um livro de testes";
		livro.autor	= "Felipe de Castro Pereira";
		livro.isbn	= "123456789";
		livro.dataPub	= "26/09/2002";
		livro.preco	= 14.99;

		livro.infoLivro();
	}

}
