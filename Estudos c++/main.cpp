#include <iostream>//Permite realizar opera��es padr�o de entrada e sa�da.
#include <new>//Para alocar vetores.
#include <locale.h>//Para liberar o uso do setlocale.
#include <string> //Permite o uso de strings.
#define CONSTANTE 5 // Outra maneira de definir uma constante.(gera mais seguran�a)


	using namespace std;//Permite utilizar alguns comandos sem escrever muito codigo ex:cout e cin.
	
	
int main(int argc, char**argv) {
	setlocale(LC_ALL, "Portuguese");// Permite o uso correto da acentua��o.
	
//Contantes << Possui valor fixo, ou seja,  n�o pode ser alterado
/*OBS: Escrever nome de constantes 
em CAPSLOCK � uma boa pratica de
programa��o.*/
const int A = 7;

cout << A << endl;
cout << CONSTANTE << endl;

//Variaveis << Parte da memoria que armazena um valor que pode ser trocado.
/*Tipo (int,float,char,bool) + nomeDaVariavel (N�o pode ser palavras reservadas, devem come�ar com uma letra, 
 n�o podem conter espa�o).*/
 
 /*Obs: O nome das variaveis est�o 
   escritas em camelcase � uma boa
   pratica de programa��o.*/
 int variavelInt = 24 ; // Aceita n�meros inteiros positivos e negativos.
 float variavelFloat= 6.8; // Aceita n�meros inteiros e com casas decimais positivos e negativos.
 bool variavelBool = false; // Aceita valores boleanos, true ou flase.	
 char variavelChar = 'M'; // Aceita caracteres.
 string meuNome = "Mateus";//Classe que representa uma sequ�ncia de caracteres.
 //Pesquisar sobre inicialiar variaveis (n�o � obrigatorio).


//Imprimindo algo na tela:
//Pode usar o printf tamb�m.
//  printf ("Ol� Mundo!);
	//N�o pula linha.
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

//stringstream


	
//Mostrando um valor de uma variavel.
	cout << "\n Ol� meu nome � " << meuNome << " e tenho " << variavelInt  << " anos" << endl;
	cout << variavelFloat << endl;
	cout << variavelBool << endl; //Aqui retorna 0 para false e 1 para verdadeiro .
	cout << variavelChar << endl;//endl serve para marcar o fim da linha e pular para proxima.
	
//Operadores 
//Atriubi��o = \ Adi��o + \ Subrtra��o - \ Multiplica��o * \ Modulo(resto da divis�o) % \ Divis�o / */
/*Atribui��o composta: +=, -=, *=, /=, %=, >>=, <<=, &=, ^=, |= 
  EX: x = x + y ou x += y*/
  
//Incremento e decremento (++, --)

/*Operadores relacionais e de compara��o: 
 ( ==(igual a), !=(diferente), >(maior que), 
<(menor que), >=(maior igual a), <=(menor igual a) )*/

/*Operadores logicos:
  \\ <- OU  && <- E  ! <- Not
  && = true \ true == true
	  true \ false == false
	  false\ true == false
	  false\ false == false 
	  
  \\= true\true == true
  	  true\false==true
  	  false\true==true
  	  false\false==false
  	  
  !=  true == false
  	  false == true	  
   
  */
  
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
  
  if (A > CONSTANTE){
  	cout << "A � maior" << endl;
  }else if(A == CONSTANTE){
  	cout << "Ambos s�o iguais" << endl;
  }else {
  	cout << "CONSTANTE � maior" << endl;
  }
  
  
  //Loops While, Do-While e For
  /*While:repete while se verdadeiro. Se, ap�s qualquer execu��o de , n�o for mais verdadeiro, 
    o loop termina e o programa continua logo ap�s o loop.*/
    int n = 0;
    while (n <= 10) {
    	cout << n << ",";
    	n++;// Icremento do n que inicia com 0 e enquanto(while) n for <= 10 vai somando +1 ao n
	}
	
	//Do-While: Executa o codigo pelo menos uma vez(bem parecido com o repita do pseudocodigo)
	float Num;
	do {
		cout << "\nDiga um n�mero: " << endl;
		cin >> Num;
		cout << "Voc� digitou: " << Num << endl;
	}while(Num != 0);
	
	//For: for(iniciali��o; condi��o; incremento){bloco de codigo que ser� executado  }
	
	for (int i=10; i>=0; i--){
		cout << i << ", ";
	}
	//Pesquiser sobre declara��o de interrup��o e continua.
	
	//switch: 
	int x;
	
	cout << "\nEscolha uma op��o de 1 a 3"<< endl;
	cin >> x;
	
	switch (x) {
  case 1:
  	cout << "\nVoc� escolheu o case 1";
  	break;
  case 2:
  	cout << "\nVoc� escolheu o case 2";
  	break;
  case 3:
    cout << "\nVoc� escolheu o case 3";
    break;
  default:
    cout << "\nNenhuma op��o valida";
  }
  
  
  
			
  			
			
	return 0;
}
