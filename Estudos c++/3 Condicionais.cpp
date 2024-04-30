#include <iostream>
#include <locale.h>


using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");

//Condicionais IF/ELSE IF/ ELSE
/*SE(if) (condição for verdadeira){
  executa o bloco de codigo
}
SENÃO SE(else if) (checa essa outra condição){
	executa o bloco de codigo
}
//Caso nenhuma codição seja verdadeira
SENÃO(else){
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

