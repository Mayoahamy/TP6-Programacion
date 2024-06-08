#include<iostream>
using namespace std;
class operations{
	private:
		int n1,n2;
	public:
		void inicializar();
		void suma();
		void resta();
		void multiplicacion();
		void division();
};
void operations::inicializar(){
	cout<<"Ingresar primer valor entero: ";
	cin>>n1;
	cout<<"Ingresar segundo valor entero: ";
	cin>>n2;
}
void operations::suma(){
	cout<<n1<<" + "<<n2<<" = "<<n1+n2<<endl;
}
void operations::resta(){
	cout<<n1<<" - "<<n2<<" = "<<n1-n2<<endl;
}
void operations::multiplicacion(){
	cout<<n1<<" x "<<n2<<" = "<<n1*n2<<endl;
}
void operations::division(){
	if(n2!=0){
		cout<<n1<<" / "<<n2<<" = "<<(float)n1/n2<<endl;
	}
	else{
		cout<<"No se puede dividir por 0";
	}
}
int main(){
	operations operation1;
	operation1.inicializar();
	operation1.suma();
	operation1.resta();
	operation1.multiplicacion();
	operation1.division();
	return 0;
}
