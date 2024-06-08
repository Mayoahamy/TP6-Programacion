#include<iostream>
using namespace std;
class Persona{
	private:
		string nombre;
		int edad;
	public:
		void inicializar();
		void imprimir();
		void esMayor();
};
void Persona::inicializar(){
	cout<<"Ingresar nombre: ";
	getline(cin,nombre);
	cout<<"Ingresar edad: ";
	cin>>edad;
}
void Persona::imprimir(){
	cout<<"Su nombre es "<<nombre<<endl<<"Su edad es "<<edad<<endl;
}
void Persona::esMayor(){
	if(edad>=18){
		cout<<"Es mayor de edad"<<endl;
	}
	else{
		cout<<"No es mayor de edad"<<endl;
	}
}
int main()
{
	Persona persona1,persona2;
	persona1.inicializar();
	cout<<endl;
	persona1.imprimir();
	persona1.esMayor();
	fflush(stdin);
	cout<<endl<<endl;
	persona2.inicializar();
	cout<<endl;
	persona2.imprimir();
	persona2.esMayor();
	return 0;
}
