#include <iostream>//Permite realizar operações padrão de entrada e saída.
#include <new>//Para alocar vetores.
#include <locale.h>//Para liberar o uso do setlocale.
#include <string> //Permite o uso de strings.
#define CONSTANTE 5 // Outra maneira de definir uma constante.(gera mais segurança)


	using namespace std;//Permite utilizar alguns comandos sem escrever muito codigo ex:cout e cin.
	
	
int main(int argc, char**argv) {
	setlocale(LC_ALL, "Portuguese");// Permite o uso correto da acentuação.
	
//Contantes << Possui valor fixo, ou seja,  não pode ser alterado
/*OBS: Escrever nome de constantes 
em CAPSLOCK é uma boa pratica de
programação.*/
const int A = 7;

cout << A << endl;
cout << CONSTANTE << endl;

//Variaveis << Parte da memoria que armazena um valor que pode ser trocado.
/*Tipo (int,float,char,bool) + nomeDaVariavel (Não pode ser palavras reservadas, devem começar com uma letra, 
 não podem conter espaço).*/
 
 /*Obs: O nome das variaveis estão 
   escritas em camelcase é uma boa
   pratica de programação.*/
 int variavelInt = 24 ; // Aceita números inteiros positivos e negativos.
 float variavelFloat= 6.8; // Aceita números inteiros e com casas decimais positivos e negativos.
 bool variavelBool = false; // Aceita valores boleanos, true ou flase.	
 char variavelChar = 'M'; // Aceita caracteres.
 string meuNome = "Mateus";//Classe que representa uma sequência de caracteres.
 //Pesquisar sobre inicialiar variaveis (não é obrigatorio).


//Imprimindo algo na tela:
//Pode usar o printf também.
//  printf ("Olá Mundo!);
	//Não pula linha.
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

//stringstream


	
//Mostrando um valor de uma variavel.
	cout << "\n Olá meu nome é " << meuNome << " e tenho " << variavelInt  << " anos" << endl;
	cout << variavelFloat << endl;
	cout << variavelBool << endl; //Aqui retorna 0 para false e 1 para verdadeiro .
	cout << variavelChar << endl;//endl serve para marcar o fim da linha e pular para proxima.
	
//Operadores 
//Atriubição = \ Adição + \ Subrtração - \ Multiplicação * \ Modulo(resto da divisão) % \ Divisão / */
/*Atribuição composta: +=, -=, *=, /=, %=, >>=, <<=, &=, ^=, |= 
  EX: x = x + y ou x += y*/
  
//Incremento e decremento (++, --)

/*Operadores relacionais e de comparação: 
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
  /*if(/*Condição){
  	bloco de codigo
	  que será executado
  }else if(Condição){
  	bloco de codigo
	  que será executado
  }else {
  	bloco de codigo
	  que será executado
  }*/
  
  if (A > CONSTANTE){
  	cout << "A é maior" << endl;
  }else if(A == CONSTANTE){
  	cout << "Ambos são iguais" << endl;
  }else {
  	cout << "CONSTANTE é maior" << endl;
  }
  
  
  //Loops While, Do-While e For
  /*While:repete while se verdadeiro. Se, após qualquer execução de , não for mais verdadeiro, 
    o loop termina e o programa continua logo após o loop.*/
    int n = 0;
    while (n <= 10) {
    	cout << n << ",";
    	n++;// Icremento do n que inicia com 0 e enquanto(while) n for <= 10 vai somando +1 ao n
	}
	
	//Do-While: Executa o codigo pelo menos uma vez(bem parecido com o repita do pseudocodigo)
	float Num;
	do {
		cout << "\nDiga um número: " << endl;
		cin >> Num;
		cout << "Você digitou: " << Num << endl;
	}while(Num != 0);
	
	//For: for(inicialição; condição; incremento){bloco de codigo que será executado  }
	
	for (int i=10; i>=0; i--){
		cout << i << ", ";
	}
	//Pesquiser sobre declaração de interrupção e continua.
	
	//switch: 
	int x;
	
	cout << "\nEscolha uma opção de 1 a 3"<< endl;
	cin >> x;
	
	switch (x) {
  case 1:
  	cout << "\nVocê escolheu o case 1";
  	break;
  case 2:
  	cout << "\nVocê escolheu o case 2";
  	break;
  case 3:
    cout << "\nVocê escolheu o case 3";
    break;
  default:
    cout << "\nNenhuma opção valida";
  }
  
  
  
			
  			
			
	return 0;
}
