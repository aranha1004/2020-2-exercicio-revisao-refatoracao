#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"
#include "Cliente.hpp"

class EncomendaRelampago: public Encomenda{

	public:
		EncomendaRelampago(double _Peso, double _CustoKg, double _CustoTotal, Cliente _Remet, Cliente _Dest):Encomenda(_Peso,_CustoKg,_CustoTotal,_Remet,_Dest){}
		double calcula(){

			double x = Peso * CustoKg;
			x += x * TxRelampago;
			
			return x;
		}
		


		void print(){

			Encomenda::print();
			std::cout << "[Encomenda Relâmpago]" << endl;
			std::cout << "  Peso: " << Peso << endl
				<< "  Custo por kg: " << CustoKg << endl
				<< "  Taxa adicional: " << TxRelampago << endl
				<< "  Custo total: " << CustoTotal << endl;

		}

};

#endif