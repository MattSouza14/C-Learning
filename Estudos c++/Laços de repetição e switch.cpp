#include <iostream>
#include <locale.h>
#include <string>

using namespace std;

int main (int argc, char**argv){
setlocale(LC_ALL, "Portuguese");

//Loops While, Do-While e For
  /*While:repete while se verdadeiro. Se, após qualquer execução de , não for mais verdadeiro, 
    o loop termina e o programa continua logo após o loop.*/
    int n = 0;
    while (n <= 10) {
    	cout << n << ",";
    	n++;// Icremento do n que inicia com 0 e enquanto(while) n for <= 10 vai somando +1 ao n
	}
	
	//Do-While: Executa o codigo pelo menos uma vez(bem parecido com o repita do pseudocodigo)
	float num;
	do {
		cout << "\nDiga um número: " << endl;
		cin >> num;
		cout << "Você digitou: " << Num << endl;
	}while(Num != 0);
	
	//For: for(inicialição; condição; incremento){bloco de codigo que será executado  }
	
	for (int i=10; i>=0; i--){
		cout << i << ", ";
	}
	
	//switch: 
	int x;
	
	cout << "\nEscolha uma opção de 1 a 3"<< endl;
	cin >> x;
	
	switch (x) {
  case 1:
  	cout << "\nVocê escolheu o case 1"<< endl;
  	break;
  case 2:
  	cout << "\nVocê escolheu o case 2"<< endl;
  	break;
  case 3:
    cout << "\nVocê escolheu o case 3"<< endl;
    break;
  default:
    cout << "\nNenhuma opção valida" << endl;
  }


return 0;
}
