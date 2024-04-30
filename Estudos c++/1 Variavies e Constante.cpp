#include <iostream>
#include <locale.h>
#define CONSTANTE -65.2 // Constantes não podem ser alteradas

using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	//Variaveis podem ser alteradas
	int num1 = 1;
	cout << "Valor do num1: " << num1 << endl;
	cout <<"Digite um novo valor para num1: " << endl;
	cin >> num1;
	cout << "O novo valor de num1: " << num1 << endl;
	
	//Tipos
 
	int varInt = -5;
	float varFloat = 5.5;
	double varDouble = 5.55555;
	char varChar = 'B';
	
	cout << "Varivavel Inteira, numeros positivos ou negativos sem casas decimais: " << varInt << endl;
	cout << "Varivavel Float, numeros positivos ou negativos com casas decimais: " << varFloat << endl;
	cout << "Varivavel Double, numeros positivos ou negativos com casas decimais e maior precisão que a Floar: " << varDouble << endl;
	cout << "Varivavel Char, caracteres: " << varChar << endl;
	//Constantes
	cout << "Valor da constante: " << CONSTANTE << endl;

	
	
	return 0;
}
