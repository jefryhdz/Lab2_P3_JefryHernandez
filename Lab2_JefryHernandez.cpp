#include <iostream>

using namespace std;
int menu();
int primos();

int main(){
	switch(menu()){
	int a;
		case 1:{a=primos();cout<<"La suma de todos los numeros primos es:"<<a<<endl;}
	}


	return 0;
}
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
