#include <iostream>
#include <locale.h>
#include <string>

using namespace std;

int main (int argc, char**argv){
setlocale(LC_ALL, "Portuguese");

int num1 = 5, num2 = 9;

if (num1 > num2){
	cout << "O maior número é " << num1 << endl;
}else if (num2 > num1){
	cout << "O maior número é " << num2 << endl;
}else {
		cout << "Os números são iguais "  << endl;

}


//Condicionais: if, else if, else
  /*if(/*Condição){
  	bloco de codigo
	  que será executado
  }else if(Condição){
  	bloco de codigo
	  que será executado
  }else {
  	bloco de codigo
	  que será executado
  }*/

return 0;
}
