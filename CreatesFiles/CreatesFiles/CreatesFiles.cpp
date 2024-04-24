﻿// CreatesFiles.cpp: define o ponto de entrada para o aplicativo.
//

#include "CreatesFiles.h"
#include <cstdlib>



using namespace std;


Arquivo::Arquivo(string nome) {
	
	nomeArquivo = R"(\)" + nome;
	userProfile = getenv("USERPROFILE");
	
}


void Arquivo::csv() {

	string narquivo = userProfile + nomeArquivo + ".csv";;
	string cabecalhos = "";
	string linha = "";
	string registro = "";
	string coluna;
	int nrColunas;
	int nrRegistros;

	cout << "\n############################";
	cout << "\n Iniciando a criacao de arquivos...";
		
	cout << "\n Quantas colunas tera seu arquivo? (Digite somente numeros): ";

	cin >> nrColunas;

	cout << "\n Quantas registros tera seu arquivo? (Digite somente numeros): ";

	cin >> nrRegistros;

	/* string* nomeColunas = new string[nrColunas];*/

	vector<string> nomeColunas(nrColunas);

	
	narquivo = LimpaCaminho(narquivo);

	ofstream file;

	file.open(narquivo);

	for (int i = 0; i < nrColunas; i++)
	{
		cout << "\nDigite o nome da coluna " << i << ":";
		cin >> coluna;
		nomeColunas[i] = coluna;

		cabecalhos = cabecalhos + nomeColunas[i] + ";";

		
	}
		
	/* CADASTRA OS CABECALHOS */
		file << cabecalhos << "\n";
	
	/* REGISTROS */
	for (int i = 0; i < nrRegistros; i++)
	{
		linha = "";

		/* COLUNAS */
		for (int y = 0; y < nrColunas; y++)
		{
			cout << "\nInsira os dados da Coluna " << nomeColunas[y] << " do registro " << i << ": ";

			cin >> registro;

			linha = linha + registro + ";";
		}

		file << linha << "\n";
		
	}

	

	file.close();



	cout << "\nArquivo Criado: " << nomeArquivo;

}

void Arquivo::texto() {

}

void Arquivo::GerarArquivo() {
	
	int opcao;
	
	do
	{

		cout << "\n## Menu ##\n";
		cout << "1 - CSV\n";
		cout << "2 - Texto\n";
		cout << "3 - Sair\n";
		cout << "\nSelecione uma opcao: ";

		cin >> opcao;

		switch (opcao)
		{
		case 1:
			csv();
			break;
		case 2:
			texto();
			break;

		}
	} while (opcao < 3);
}

string Arquivo::LimpaCaminho(string caminho) {

	int pos = 0;
	while ((pos = caminho.find("\\\\", pos)) != std::string::npos) {
		caminho.replace(pos, 2, "\\");
		pos += 1; // Avança para a próxima posição após a substituição
	}

	return caminho;
}