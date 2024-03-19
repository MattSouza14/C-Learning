#include <iostream>//Permite realizar opera��es padr�o de entrada e sa�da.
#include <locale.h>//Para liberar o uso do setlocale.
#define CONSTANTE 5 //Outra maneira de definir uma constante.(gera mais seguran�a)
#include <string> //Permite o uso de strings.

using namespace std;//Permite utilizar alguns comandos sem escrever muito codigo ex:cout e cin.

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	
//Variaveis << Parte da memoria que armazena um valor que pode ser trocado.
/*Tipo (int,float,char,bool) + nomeDaVariavel (N�o pode ser palavras reservadas, devem come�ar com uma letra, 
  n�o podem conter espa�o).*/
 
/*Obs: O nome das variaveis est�o 
escritas em camelcase � uma boa
pratica de programa��o.*/
int variavelInt = 24 ; // Aceita n�meros inteiros positivos e negativos.
float variavelFloat= 6.8; // Aceita n�meros inteiros e com casas decimais positivos e negativos.
bool variavelBool = false; // Aceita valores boleanos, true ou flase.( retorna 0 para false e 1 para true)	
char variavelChar = 'M'; // Aceita caracteres.
string meuNome = "Mateus";//Classe que representa uma sequ�ncia de caracteres.	

//Contantes << Possui valor fixo, ou seja, n�o pode ser alterado
/*OBS: Escrever nome de constantes 
em CAPSLOCK � uma boa pratica de
programa��o.*/
const int NUMERO = 7;


cout << variavelInt << endl;
cout << variavelFloat << endl;
cout << variavelBool << endl;
cout << meuNome << endl;

cout << NUMERO << endl;
cout << CONSTANTE << endl;


		
	
	return 0;
}
