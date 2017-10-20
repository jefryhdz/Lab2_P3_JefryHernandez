#include <iostream>

using namespace std;
int menu();
int primos();
int multiplos();
void conjetura();
bool primo(int);

int main(){
	int men;//men es abreviando menu
	do{
	men =menu();
		switch(men){
		int a;
		int b;
			case 1:{a=primos();cout<<"La suma de todos los numeros primos e:"<<a<<endl;break;}	
			case 2:{b= multiplos();cout<<"La suma de todos los numeros multiplos es:"<<b<<endl;break;}
			case 3:{conjetura();break;}
			case 4: {break;}
			break;
		}
	}while(men!=4);				
	return 0;
}
int menu(){
	int menu; cout<<"     Menú"<<endl; cout<<"1. Suma de primos"<<endl;
	cout<<"2. Suma de los multiplos"<<endl;
	cout<<"3. Conjetura Goldbach"<<endl;
	cout<<"4. Salir"<<endl;
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
void conjetura(){
	int numeroconjetura=0;
	cout<<"Ingrese el numero para determinar la conjetura"<<endl;
	cin>>numeroconjetura;
	for(int i = 1;i<numeroconjetura;i++){
		if(primo(i)){
			for(int j =1;j<numeroconjetura;j++){
				if(primo(j)){
					if(i+j==numeroconjetura)
						cout<<i<<"+"<<j<<"="<<numeroconjetura<<endl;
				}				
			}
		}

	}

}
bool primo(int prim){
	int veces = 0;
	for(int i =1;i<prim;i++){
		if(prim%i==0)
			veces++;
	}if(veces==0||veces==1){
		return true;
	}else{
		return false;
	}

}
