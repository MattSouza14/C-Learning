#include <iostream>
#include <locale.h>


using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");

//Condicionais IF/ELSE IF/ ELSE
/*SE(if) (condi��o for verdadeira){
  executa o bloco de codigo
}
SEN�O SE(else if) (checa essa outra condi��o){
	executa o bloco de codigo
}
//Caso nenhuma codi��o seja verdadeira
SEN�O(else){
	executa o bloco de codigo
}
*/	
//Exemplo:

 float limiteMin = 5.0 , limiteMax = 12.0, temperatura ;
   cout << "Informe o valor da temperatura: ";
   cin >> temperatura;
   if ((temperatura >= limiteMin) && (temperatura <= limiteMax)){
   	cout << "Temperatura normal" << endl;
   } 
   else {
   	cout << "Temperatura alterada" << endl;
   }
      
	
	return 0;
}

