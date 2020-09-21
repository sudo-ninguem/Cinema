#include <iostream>
#include <locale.h>


void Menu(); 
void Escolha (int escolha);

int main()
{

    Menu(); // Para chamarmos uma função BASTA TRAZER O NOME DELA
	return 0;
}




// ESTAMOS CRIANDO A FUNÇÃO MENU //////////

void Menu () {

    setlocale(LC_ALL, "portuguese");

	int escolha = 0; // Perceba estamos criando uma variável INTERNA dentro da função e por isso ela só existe aqui

	do // as instruções abaixo serão executadas pelo menos uma vez!
	{
		std::cout << "****Tickets Cinema****" << std::endl;
		std::cout << "\n1 - Para Meia Entrada\n";
		std::cout << "\n2 - Para Inteira\n";
		std::cout << "\n3 - Sair";
		std::cout << "\nEscolha sua opção: ";
		std::cin >> escolha;

        Escolha (escolha); // Perceba que dentro da função MENU vamos chamar a função ESCOLHA já passando um parametro

		

	} while (escolha != 3);//enquanto escolha for diferente de 3 o menu vai aparecer! pois você está solicitando que fique em loop até que escolha seja igual a 3 e resultado seja falso saindo do loop do-while
	
}


//// ESTAMOS MOSTRANDO O RESULTADO DA ESCOLHA MENU ///

void Escolha (int escolha) {

    switch (escolha)
		{
		case 1: std::cout << "\nTicket Meia Entrada Comprada\n";
				break;
		case 2: std::cout << "\nTicket Inteira Comprado\n";
				break;	
		case 3: std::cout << "\nSaindo Menu Tickets...\n";
				break;
		default: std::cout << "\nOpção Inválida!!!\n";
		}
}

/* Perceba que além de deixar o código MUITO mais limpo as funções permitem 
   outra vantagem que é um menor consumo de memória, e isso porque as variaveis 
   criadas SOMENTE dentro de uma função (ex. escolha) NÃO serão armazenadas na memória interna do programa
   mas sim irão existir enquanto a função for executada, após a função parar sua execução aquela variavel
   ira SUMIR. 
   Isso então causa uma grande vantagem no ponto de OTIMIZAÇÃO DE MEMÓRIA*/
