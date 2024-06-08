#include<iostream>
using namespace std;
class cuadrado{
	private:
		int lado;
	public:
		void inicializar();
		void perimetro();
		void area();
};
void cuadrado::inicializar(){
	cout<<"Ingresar lado del cuadrado en cm: ";
	cin>>lado;
}
void cuadrado::perimetro(){
	cout<<"El perimetro del cuadrado es "<<lado*4<<" centimetros"<<endl;
}
void cuadrado::area(){
	cout<<"El area del cuadrado es "<<lado*lado<<" centimetros cuadrados"<<endl;
}

int main(){
	cuadrado cuadrado1;
	cuadrado1.inicializar();
	cuadrado1.perimetro();
	cuadrado1.area();
	return 0;
}
