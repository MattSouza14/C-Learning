#include <iostream>
#include <locale.h>
#include <string>

using namespace std;

//Declara��es das fun��es antes da fun��o principal main
int soma(int a, int b) {
    return a + b;
}
 void menssagem (){
  cout << "Fun��o vazia" << endl;
}
//as refer�ncias s�o indicadas com um  & seguindo o tipo de par�metro
void duplicar (int& a, int& b, int& c){
  a*=2;
  b*=2;
  c*=2;
}

int main (int argc, char**argv){
setlocale(LC_ALL, "Portuguese");


//Fun��es:Grupo de instru��es que recebe um nome e que pode ser chamada de algum ponto do programa
  //Fun��es s�o declaradas antes da fun��o main do programa
/* int addition (int a, int b)
{
  int r;
  r=a+b;
  return r;
}*/
  int Resul;
  
  Resul= soma(8,2);
  cout << "A soma �: " << Resul << endl;
  
  //Fun��o do tipo vazia: N�o retonar um valor
 menssagem ();
//Argumentos passado por valor e referencia
/*Quando uma vari�vel � passada por refer�ncia, o que � passado n�o � mais uma c�pia, mas a pr�pria vari�vel, 
a vari�vel identificada pelo par�metro da fun��o, torna-se de alguma forma associada ao argumento passado 
para a fun��o, e qualquer modifica��o em suas vari�veis 
locais correspondentes dentro da fun��o s�o refletidas nas vari�veis passadas como argumentos na chamada.*/

  duplicar (M, S, N);
  cout << "m=" << M << ", s=" << S << ", n=" << N << endl;
			




return 0;
}
