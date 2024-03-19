#include <iostream>//Permite realizar operações padrão de entrada e saída.
#include <locale.h>//Para liberar o uso do setlocale.
#define CONSTANTE 5 //Outra maneira de definir uma constante.(gera mais segurança)
#include <string> //Permite o uso de strings.

using namespace std;//Permite utilizar alguns comandos sem escrever muito codigo ex:cout e cin.

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	
//Variaveis << Parte da memoria que armazena um valor que pode ser trocado.
/*Tipo (int,float,char,bool) + nomeDaVariavel (Não pode ser palavras reservadas, devem começar com uma letra, 
  não podem conter espaço).*/
 
/*Obs: O nome das variaveis estão 
escritas em camelcase é uma boa
pratica de programação.*/
int variavelInt = 24 ; // Aceita números inteiros positivos e negativos.
float variavelFloat= 6.8; // Aceita números inteiros e com casas decimais positivos e negativos.
bool variavelBool = false; // Aceita valores boleanos, true ou flase.( retorna 0 para false e 1 para true)	
char variavelChar = 'M'; // Aceita caracteres.
string meuNome = "Mateus";//Classe que representa uma sequência de caracteres.	

//Contantes << Possui valor fixo, ou seja, não pode ser alterado
/*OBS: Escrever nome de constantes 
em CAPSLOCK é uma boa pratica de
programação.*/
const int NUMERO = 7;


cout << variavelInt << endl;
cout << variavelFloat << endl;
cout << variavelBool << endl;
cout << meuNome << endl;

cout << NUMERO << endl;
cout << CONSTANTE << endl;


		
	
	return 0;
}
