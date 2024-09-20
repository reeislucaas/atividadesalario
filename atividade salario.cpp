#include <iostream>
#include <cmath>

using namespace std;

int main () {


double salarioB;
double H;
double HT;

cout << "digite o valor da hora:\n";
cin >>H;
cout << "digite as horas trabalhas\n" ;
cin >> HT;





salarioB = H*HT;

	double inss = salarioB * 0.10;
	double FGTS = salarioB * 0.11;
	double salarioL;
	double IR;
	

system("cls");	
if (salarioB<900) {
	
	
	 salarioL = salarioB  - inss;
	
	
	cout << "Salario Bruto : R$"<< salarioB   << "\n"  ;
	cout << "(-) IR (0%) : R$ 0,00" << "\n"    ; 
	cout << "(-) INSS (10%) : R$" << inss << "\n";
	cout << "FGTS (11%) : R$" << FGTS << "\n" ;
	cout << "Salario Liquido : R$" << salarioL  << "\n"  ;
}
if (salarioB>=900 && salarioB<1500) {
	
	IR = salarioB * 0.05;
	 salarioL = salarioB  - inss - IR;
	 
	
	
	cout << "Salario Bruto : R$"<< salarioB   << "\n"  ;
	cout << "(-) IR (5%) : R$" << IR  <<   "  \n"    ; 
	cout << "(-) INSS (10%) : R$" << inss << "\n";
	cout << "FGTS (11%) : R$" << FGTS << "\n" ;
	cout << "Salario Liquido : R$" << salarioL  << "\n"  ;


	     
	
}

  if (salarioB>=1500 && salarioB<2500) {
	
	IR = salarioB * 0.10;
	 salarioL = salarioB  - inss - IR;
	 
	
	
	cout << "Salario Bruto : R$"<< salarioB   << "\n"  ;
	cout << "(-) IR (10%) : R$" << IR  <<   "  \n"    ; 
	cout << "(-) INSS (10%) : R$" << inss << "\n";
	cout << "FGTS (11%) : R$" << FGTS << "\n" ;
	cout << "Salario Liquido : R$" << salarioL  << "\n"  ;


	     
	
}

if (salarioB>=2500) {
	
	IR = salarioB * 0.20;
	 salarioL = salarioB  - inss - IR;
	 
	
	
	cout << "Salario Bruto : R$"<< salarioB   << "\n"  ;
	cout << "(-) IR (20%) : R$" << IR  <<   "  \n"    ; 
	cout << "(-) INSS (10%) : R$" << inss << "\n";
	cout << "FGTS (11%) : R$" << FGTS << "\n" ;
	cout << "Salario Liquido : R$" << salarioL  << "\n"  ;


	     
	
}




return 0;
}





