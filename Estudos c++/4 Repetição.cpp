#include <iostream>
#include <locale.h>

	using namespace std;
	
int main (int argc, char **argv){
	setlocale(LC_ALL, "Portuguese");
	//Laços de repetição
	//While/Do While/For
	
	int c = 0;
	//Enquanto a condição for verdadeira
	//o bloco de codigo será executado
	while (c <= 10){
		cout << c << endl;
		c++;
	}
	
	//Do While
	int num;
	do{
		cout << "Digite um número: " << endl;
		cin >> num;
	}while(num != 0);
	
	
	//For
	for (int i = 10; i >= 0; i--){
		cout << i << endl;
	}
	
	
	
	
	return 0;
}
