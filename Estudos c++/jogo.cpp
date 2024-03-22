#include <iostream>

// Variáveis globais
char p[2] = {'o', 'x'}; // Jogadores
char board[3][3] = { // O tabuleiro
    {' ', ' ', ' '},
    {' ', ' ', ' '},
    {' ', ' ', ' '}
};

// Protótipos das funções
void show(char board[3][3]);
void played(char board[3][3], int l, int c, bool i);

int main(int argc, char** argv) {
	show(board); // Exibe o tabuleiro inicial
	bool i = 0;
    int l, c;
    bool win = false;
    int turn = 0;
    
    while (win == false){
    	char play = ' ';
    	
    	
    	if (i==0) play = 'o';
		else play = 'x';

    	printf("\n\tJogador\t>>> %c\n", play);
    	printf("\nEscolha uma linha: ");
    	scanf("%d", &l);
    	printf("\nEscolha uma coluna: ");
    	scanf("%d", &c);
    	
    	if ((l>0) and (l<4) and (c>0) and (c<4)){
    		int verify = 0;
    		if (board[l-1][c-1] == ' '){
    			played(board, l-1, c-1, i); // Realiza uma jogada
    			turn++;
    			
    			//Testar se ganhou nas linhas
    			for (int line=0; line<4; line++){
    				for (int col=0; col<4; col++){
    					if (board[line][col] != play){
    						verify = 0;
    						break;
						}
						else{
							verify++;
						}
						if (verify == 3){
							printf("\nJogador [%c] ganhou!", play);
							win = true;
							break;
						}
					}	
				}
				
				//Testar se ganhou nas colunas
				for (int col=0; col<4; col++){
    				for (int line=0; line<4; line++){
    					if (board[line][col] != play){
    						verify = 0;
    						break;
						}
						else{
							verify++;
						}
						if (verify == 3){
							printf("\nJogador [%c] ganhou!", play);
							win = true;
							break;
						}
					}	
				}
				
				if (win == false){
					//Testar os casos especiais
					if (board[1][1] == play){
    					if (((board[0][0] == play) and (board[2][2] == play)) 
						or ((board[0][2] == play) and (board[2][0] == play))){
							printf("\nJogador [%c] ganhou!", play);
							win = true;	
						}
					}	
				}
    			i = !i;
    			if ((turn == 7) and (win == false)){
    				bool r;
    				printf("\n\t>>>> Deseja continuar a partida? [0 - Sim | 1 - Nao] ");
    				scanf("%d", &r);
    				if (r == 1){
    					printf("\nPartida Abortada.");
    					break;
					}
				}
    			else if ((turn == 9) and (win == false)){
    				printf("\nDeu velha.");
    				break;
				}
			}
			else printf("\nJogada ja existente!\n");
		}
		else printf("\nJogada fora dos limites!\n");	
	}
    return 0;
}

void show(char board[3][3]) { // Definição da função show
    printf("\n  *******JOGO DA VELHA EM C++*******\n");
    printf(" \t     1     2     3   \n");
    printf(" \t  .-----------------.\n");
    printf("\t1 |  %c  |  %c  |  %c  |\n", board[0][0], board[0][1], board[0][2]);
    printf("\t  .-----------------.\n");
    printf("\t2 |  %c  |  %c  |  %c  |\n", board[1][0], board[1][1], board[1][2]);
    printf("\t  .-----------------.\n");
    printf("\t3 |  %c  |  %c  |  %c  |\n", board[2][0], board[2][1], board[2][2]);
    printf(" \t  .-----------------.\n");
    printf("\n  **********************************\n");
}

void played(char board[3][3], int l, int c, bool i) { // Definição da função played
    board[l][c] = p[i]; // Realiza a jogada
    show(board); // Exibe o tabuleiro após a jogada
}

