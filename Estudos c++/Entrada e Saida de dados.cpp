#include <iostream>
#include <locale.h>
#include <string>

using namespace std;

int main (int argc, char**argv){
setlocale(LC_ALL, "Portuguese");
string meuNome = "Mateus";
int idade = 24;
	
//Imprimindo algo na tela:
//Pode usar o printf também.
//  printf ("Olá Mundo!);
	cout << " Olá Mundo!" << endl;
	cout << " Hello World" << endl;
	
//Entrada de valores:
int num;

cout << "Digite um número: " << endl;
cin >> num;
cout << "O número digitado foi :" << num << endl;

//Obter sequência de caracteres:
string minhaString;

cout << "Digite seu nome: " << endl;
cin >> minhaString;
/*getline (cin, minhaString);A função getline passa dois parametros ci como primeiro 
                              argumento e a variável string como segundo.*/
cout << "Olá " << minhaString << endl;

	
//Mostrando um valor de uma variavel.
	cout << "\n Olá meu nome é " << meuNome << " e tenho " << idade  << " anos" << endl;
	//endl serve para marcar o fim da linha e pular para proxima.	
	
	
	
	
	return 0;
}
