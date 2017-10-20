#include <iostream>

using namespace std;
int menu();
int primos();
int multiplos();

int main(){
	switch(menu()){
	int a;
	int b;
		case 1:{a=primos();cout<<"La suma de todos los numeros primos e:"<<a<<endl;}
		case 2:{b= multiplos();cout<<"La suma de todos los numeros multiplos es:"<<b<<endl;}
			
			


	return 0;
}}
int menu(){
	int menu; cout<<"     Menú"<<endl; cout<<"1. Suma de primos"<<endl;
	cout<<"2. Suma de los multiplos"<<endl;
	cout<<"3. Conjetura Goldbach"<<endl;
	cin>>menu;
	return menu;
	

}
int primos(){
	int suma=0;
	int limite;
	int es=0;
	cout<<"Ingrese el numero limite de los numeros primos"<<endl;
	cin>>limite;
	for(int i =1;i<limite;i++){
		es=0;
		for(int j =1;j<i;j++){
			if(i%j==0)
				es++;	
		}if(es==1||es==0)
			suma+=i;
	}
	return suma;
}
int multiplos(){
	int a=0;
	int b=0;
	int n=0;
	int suma =0;
	cout<<"Ingrese el numero valor de a"<<endl;
	cin>>a;
	cout<<"Ingrese el numero valor b"<<endl;
	cin>>b;
	cout<<"Ingrese el numero valor para n"<<endl;
	cin>>n;
	for(int i=1;i<=n;i++){
		if(i%a==0||i%b==0){
			suma+=i;
		}			
	}
	return suma;
}

