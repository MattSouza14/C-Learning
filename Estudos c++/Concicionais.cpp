#include <iostream>
#include <locale.h>
#include <string>

using namespace std;

int main (int argc, char**argv){
setlocale(LC_ALL, "Portuguese");

int num1 = 5, num2 = 9;

if (num1 > num2){
	cout << "O maior n�mero � " << num1 << endl;
}else if (num2 > num1){
	cout << "O maior n�mero � " << num2 << endl;
}else {
		cout << "Os n�meros s�o iguais "  << endl;

}


//Condicionais: if, else if, else
  /*if(/*Condi��o){
  	bloco de codigo
	  que ser� executado
  }else if(Condi��o){
  	bloco de codigo
	  que ser� executado
  }else {
  	bloco de codigo
	  que ser� executado
  }*/

return 0;
}
