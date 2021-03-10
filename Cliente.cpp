#include <iostream>
#include <string>
#include "Cliente.hpp"

void Cliente::print(){

	std::cout << "  Nome: " << Nome << endl
		 << "  Endereço: " << Endereco << endl
		 << "  Cidade: " << Cidade << endl
		 << "  Estado: " << Estado << endl
		 << "  CEP: " << CEP << endl;

}
void Cliente::setCEP(string _CEP){
	this->CEP=_CEP;
}
void Cliente::setCidade(string _Cidade){
	this->Cidade=_Cidade;
}
void Cliente::setEndereco(string _Endereco){
	this->Endereco=_Endereco;
}
void Cliente::setEstado(string _Estado){
	this->Estado=_Estado;
}
void Cliente::setNome(string _Nome){
	this->Nome=_Nome;
}