#include <iostream>
#include <locale.h>
#include <string>

using namespace std;

//Declarações das funções antes da função principal main
int soma(int a, int b) {
    return a + b;
}
 void menssagem (){
  cout << "Função vazia" << endl;
}
//as referências são indicadas com um  & seguindo o tipo de parâmetro
void duplicar (int& a, int& b, int& c){
  a*=2;
  b*=2;
  c*=2;
}

int main (int argc, char**argv){
setlocale(LC_ALL, "Portuguese");


//Funções:Grupo de instruções que recebe um nome e que pode ser chamada de algum ponto do programa
  //Funções são declaradas antes da função main do programa
/* int addition (int a, int b)
{
  int r;
  r=a+b;
  return r;
}*/
  int Resul;
  
  Resul= soma(8,2);
  cout << "A soma é: " << Resul << endl;
  
  //Função do tipo vazia: Não retonar um valor
 menssagem ();
//Argumentos passado por valor e referencia
/*Quando uma variável é passada por referência, o que é passado não é mais uma cópia, mas a própria variável, 
a variável identificada pelo parâmetro da função, torna-se de alguma forma associada ao argumento passado 
para a função, e qualquer modificação em suas variáveis 
locais correspondentes dentro da função são refletidas nas variáveis passadas como argumentos na chamada.*/

  duplicar (M, S, N);
  cout << "m=" << M << ", s=" << S << ", n=" << N << endl;
			




return 0;
}
