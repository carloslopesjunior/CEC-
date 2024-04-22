// Calculadora.cpp: define o ponto de entrada para o aplicativo.
//

#include "Calculadora.h"
#include <string>

using namespace std;

void resultado(int result) {
	cout << "\nResultado: " << result;
}

void soma(int n1, int n2) {
	int total = (n1 + n2);
	resultado(total);
}

void subtracao(int n1, int n2) {

	int total = (n1 - n2);
	resultado(total);
}

void multiplicacao(int n1, int n2) {

	int total = (n1 * n2);
	resultado(total);
}

void divisao(int n1, int n2) {

	int total = (n1 / n2);
	resultado(total);
}

void retornaNome(string nome) {

	cout << "\nOla, seja bem vindo " + nome;

}

int main()
{
	string Nome;

	cout << "Digite seu nome: ";

	cin >> Nome;

	retornaNome(Nome);

	int opcao;

	do
	{
		cout << "\n ";
		cout << "\nSelecione uma opcao abaixo:";
		cout << "\n1 - Somar";
		cout << "\n2 - Subtracao";
		cout << "\n3 - multiplicacao";
		cout << "\n4 - Divisao";
		cout << "\n5 - Sair";

		cout << "\n ";
		cout << "\n Digite: ";

		cin >> opcao;

		int n1;
		int n2;

		if (opcao < 5)
		{
			cout << "\nInforme o primeiro numero: ";
			cin >> n1;

			cout << "\nInforme o segundo numero: ";
			cin >> n2;


			switch (opcao)
			{
			case 1:
				soma(n1, n2);
				break;
			case 2:
				subtracao(n1, n2);
				break;
			case 3:
				multiplicacao(n1, n2);
				break;
			case 4:
				divisao(n1, n2);
				break;
			}
		}


	} while (opcao < 5);




	return 0;
}

