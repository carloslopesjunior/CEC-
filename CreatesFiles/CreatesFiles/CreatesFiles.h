// CreatesFiles.h: arquivo de inclusão para arquivos de inclusão padrão do sistema,
// ou arquivos de inclusão específicos a um projeto.

#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <vector>

using namespace std;


class Arquivo {
	
	private:
		string nomeArquivo;
		void texto();
		void csv();
		string userProfile;
		string LimpaCaminho(string);

	public:
		Arquivo(std::string = "Arquivo");
		
		void ImprimirArquivo();
		void GerarArquivo();
		
	
		

};





// TODO: Referencie os cabeçalhos adicionais de que seu programa precisa aqui.
