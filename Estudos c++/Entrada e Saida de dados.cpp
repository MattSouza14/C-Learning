#include <iostream>
#include <locale.h>
#include <string>

using namespace std;

int main (int argc, char**argv){
setlocale(LC_ALL, "Portuguese");
string meuNome = "Mateus";
int idade = 24;
	
//Imprimindo algo na tela:
//Pode usar o printf tamb�m.
//  printf ("Ol� Mundo!);
	cout << " Ol� Mundo!" << endl;
	cout << " Hello World" << endl;
	
//Entrada de valores:
int num;

cout << "Digite um n�mero: " << endl;
cin >> num;
cout << "O n�mero digitado foi :" << num << endl;

//Obter sequ�ncia de caracteres:
string minhaString;

cout << "Digite seu nome: " << endl;
cin >> minhaString;
/*getline (cin, minhaString);A fun��o getline passa dois parametros ci como primeiro 
                              argumento e a vari�vel string como segundo.*/
cout << "Ol� " << minhaString << endl;

	
//Mostrando um valor de uma variavel.
	cout << "\n Ol� meu nome � " << meuNome << " e tenho " << idade  << " anos" << endl;
	//endl serve para marcar o fim da linha e pular para proxima.	
	
	
	
	
	return 0;
}
