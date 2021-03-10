#ifndef EncomendaNormal_H
#define EncomendaNormal_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaNormal: public Encomenda{

	public:
	EncomendaNomral(double _Peso, double _CustoKg, double _CustoTotal, Cliente _Remet, Cliente _Dest):Encomenda(_Peso,_CustoKg,_CustoTotal,_Remet,_Dest){}
	double calcula(){

		double x = Peso * CustoKg;

		return x;
	}

	void print(){

		Encomenda::print();
		std::cout << "[Encomenda Normal]" << endl;
		std::cout << "  Peso: " << Peso << endl
			<< "  Custo por kg: " << CustoKg << endl
			<< "  Custo total: " << CustoTotal << endl;

	}

};

#endif