#include <iostream>
#include <locale.h>


using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
/*Operadores:
+ -> SOMA
- -> SUBTRAÇÃO
/ -> DIVISÃO
* -> MULTIPLICAÇÃO
% -> MODULO/RESTO DA DIVISÃO
*/
//Exemplo:
float total, n1, n2;

cout << "Digite um numero: ";
cin >> n1;
cout << "Digite outro numero: ";
cin >> n2;

total = n1 * n2;

cout << "O resultado da operação: " << total << endl;

//Operadores Logicos
/*&& -> E / AND
  || -> OU / OR
  !  -> Não / NOT*/

	
	
	return 0;
}

