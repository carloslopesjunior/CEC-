#include <iostream>
#include "CreatesFiles.h"

using namespace std;

int main()
{
	string nome;
	string NovoArquivo;
	int opcao;

	

	cout << "##### Create Files #####\n";
	cout << "Digite seu nome: ";

	cin >> nome;

	cout << "Ola, " << nome << ". Seja bem vindo.\n";

	cout << "\nDigite um nome para o arquivo:";

	cin >> NovoArquivo;

	Arquivo arquivo{ NovoArquivo };


	try
	{
		arquivo.GerarArquivo();
	}
	catch (const std::exception&)
	{
		cout << "Falha na geração do arquivo.";
	}

	


	return 0;
}