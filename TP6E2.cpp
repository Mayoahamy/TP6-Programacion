#include<iostream>
using namespace std;
class Triangulo{
	private:
		int lado1,lado2,lado3;
	public:
		void inicializar();
		void ladomayor();
		void equilatero();
};
void Triangulo::inicializar(){
	cout<<"Ingresar lado 1 en cm: ";
	cin>>lado1;
	cout<<"Ingresar lado 2 en cm: ";
	cin>>lado2;
	cout<<"Ingresar lado 3 en cm: ";
	cin>>lado3;
}
void Triangulo::ladomayor(){
	if(lado1>lado2){
		if(lado1>lado3){
			cout<<"El lado 1 es el lado mayor"<<endl;
		}
		else if(lado3>lado1){
			cout<<"El lado 3 es el lado mayor"<<endl;
		}
		else if(lado3==lado1){
			cout<<"Los lados 1 y 3 son los mayores"<<endl;
		}
	}
	else if(static_cast<int>(lado1==lado2)==lado3){
		cout<<"Todos los lados son iguales"<<endl;
	}
	else if(lado2>lado1){
		if(lado2>lado3){
			cout<<"El lado 2 es el lado mayor"<<endl;
		}
        else if(lado3>lado2){
			cout<<"El lado 3 es el lado mayor"<<endl;
		}
		else if(lado2==lado3){
			cout<<"Los lados 2 y 3 son los mayores"<<endl;
		}
	}
	else if(lado2==lado1){
		if(lado2>lado3){
			cout<<"Los lados 1 y 2 son los mayores"<<endl;
		}
		else if(lado3>lado2){
			cout<<"El lado 3 es el lado mayor"<<endl;
		}
	}
}
void Triangulo::equilatero(){
	if((lado1==lado2)&&(lado2==lado3)){
		cout<<"El triangulo es equilatero";
	}
	else{
		cout<<"El triangulo no es equilatero";
	}
}

int main(){
	Triangulo triangulo1;
	triangulo1.inicializar();
	triangulo1.ladomayor();
	triangulo1.equilatero();
	return 0;
}
