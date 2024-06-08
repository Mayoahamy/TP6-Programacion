#include<iostream>
#include<math.h>
using namespace std;
class empleado{
	private:
		string nombre;
		int sueldo;
	public:
		void inicializar();
		void imprimir();
		void impuesto();
};
void empleado::inicializar(){
	cout<<"Ingresar nombre: ";
	getline(cin,nombre);
	cout<<"Ingresar sueldo mensual en pesos: ";
	cin>>sueldo;
}
void empleado::imprimir(){
	cout<<"Su nombre es "<<nombre;
	cout<<endl<<"Su sueldo mensual es de "<<sueldo<<" pesos"<<endl;
}
void empleado::impuesto(){
	int impuesto;
	impuesto=12+pow(log10(sueldo)-1,2);
	if(impuesto>50)
	{
		impuesto=50;
	}
	if(sueldo>3000){
		cout<<"El empleado debera pagar un impuesto del "<<impuesto<<"%";
	}
}

int main(){
	empleado empleado1;
	empleado1.inicializar();
	empleado1.imprimir();
	empleado1.impuesto();
	return 0;
}
