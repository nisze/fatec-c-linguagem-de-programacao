#include <iostream>
#include <string.h>
using namespace std;
//Desconto com base no valor inserido: até30 =0; 30<x<=100 = 5%; 100>x>=250 = 10%; acima 250> = 15%. 
int main(){
	double n,d,t,p;
	char c;
	while(true){
		while(true){
			cout << "\n"<<"Digite o valor da sua compra: "<<"\n";
			cin >> n;
			if(!(n)||n<0){
				cin.clear();
				cin.ignore();
				while(true){
					cout << "Valor invalido, deseja reescrever? (S/N) "<<"\n";
					cin >> c;
					if(c=='s'||c=='S'){
						break;
					}
					else if(c=='N'|| c=='n'){
						return 0;
					}
					else{
						cout << "Resposta invalida, favor usar 'S' ou 'N'. "<<"\n";
					}
				}
			}
			else{
				break;
			}
		}
		if(n<=30){
			d=0;
		}	
		else if(n<=100){
			d=5;
		}
		else if(n<=250){
			d=10;
		}
		else{
			d=15;
		}
		p=d*n/100;
		t=n-p;
		cout << "O valor da sua compra incial e R$: "<<n<<"\n";
		cout << "O desconto recebido foi de "<<d<< "%"<<", que resulta em R$:"<<p <<"\n";
		cout << "O valor total a pagar e: R$" <<t<<"\n";
		while(true){
			cout << "Deseja reiniciar? (S/N)"<<"\n";
			cin >> c;
			if(c=='s'||c=='S'){
				break;
			}
			else if(c=='n'||c=='N'){
				return 0;
			}
			else{
				cout << "resposta invalida, favor ultilizar 's'(sim) ou 'n'(nao). "<<"\n";
			}
		}
	}	
}