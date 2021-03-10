#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;
class Cliente{

	public:
		Cliente(string _Nome, string _Endereco, string _Cidade, string _Estado, string _CEP): Nome(_Nome),Endereco(_Endereco),Cidade(_Cidade),Estado(_Estado),CEP(_CEP){}
		string getNome(){return Nome;}
		void setNome(string _nome);
		string getEndereco(){return Endereco;}
		void setEndereco(string _endereco);
		string getCidade(){return Cidade;}
		void setCidade(string _Cidade);
		string getEstado(){return Estado;}
		void setEstado(string _Estado);
		string getCEP(){return CEP;}
		void setCEP(string _CEP);

				
		void print(); // imprime na tela os dados de um cliente cadastrado
	private:
		string Nome;
		string Endereco;
		string Cidade;
		string Estado;
		string CEP;
};

#endif