#include <iostream>
#include <locale.h>


using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
/*Operadores:
+ -> SOMA
- -> SUBTRA��O
/ -> DIVIS�O
* -> MULTIPLICA��O
% -> MODULO/RESTO DA DIVIS�O
*/
//Exemplo:
float total, n1, n2;

cout << "Digite um numero: ";
cin >> n1;
cout << "Digite outro numero: ";
cin >> n2;

total = n1 * n2;

cout << "O resultado da opera��o: " << total << endl;

//Operadores Logicos
/*&& -> E / AND
  || -> OU / OR
  !  -> N�o / NOT*/

	
	
	return 0;
}

