#include <iostream>
#include <locale.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    char adicionarParticipante = 's';
    const int MAXPARTICIPANTES = 10;
    const int MAXJOGOS = 6;
    char resultados[MAXPARTICIPANTES][MAXJOGOS];
    int numParticipantes = 0;

    while (adicionarParticipante == 's' || adicionarParticipante == 'S') {
        cout << "Resultados para o participante " << numParticipantes + 1 << ":" << endl;
        for (int j = 0; j < MAXJOGOS; ++j) {
            cout << "Digite 'V' se ganhou ou 'P' se perdeu no jogo " << j + 1 << ": ";
            cin >> resultados[numParticipantes][j];
        }

        int vitorias = 0;
        for (int j = 0; j < MAXJOGOS; ++j) {
            if (resultados[numParticipantes][j] == 'V') {
                vitorias++;
            }
        }

        int grupo;
        if ((vitorias == 5)|| (vitorias == 6)) {
            grupo = 1;
        } else if ((vitorias == 3)|| (vitorias == 4)) {
            grupo = 2;
        } else if ((vitorias == 1) || (vitorias == 2)) {
            grupo = 3;
        } else {
            grupo = -1;
        }

        cout << "O participante " << numParticipantes + 1 << " está no grupo " << grupo << endl;
        numParticipantes++;

        if (numParticipantes < MAXPARTICIPANTES) {
            cout << "Deseja adicionar outro participante? (s/n): ";
            cin >> adicionarParticipante;
        } else {
            cout << "Número máximo de participantes alcançado." << endl;
            break;
        }
    }

    cout << "\n\tJOGO DE TENIS DO SANDRO" << endl;
    cout << "\nTabela de Resultados:" << endl;
    cout << "---------------------------------------------" << endl;
    cout << "Participante\t|\tGrupo" << endl;
    cout << "---------------------------------------------" << endl;
    for (int i = 0; i < numParticipantes; ++i) {
        cout << "    " << i + 1 << "\t\t|\t  ";
        int vitorias = 0;
        for (int j = 0; j < MAXJOGOS; ++j) {
            if (resultados[i][j] == 'V') {
                vitorias++;
            }
        }

        int grupo;
        if ((vitorias == 5)|| (vitorias == 6)) {
            grupo = 1;
        } else if ((vitorias == 3 )|| (vitorias == 4)) {
            grupo = 2;
        } else if ((vitorias == 1) || (vitorias == 2)) {
            grupo = 3;
        } else {
            grupo = -1;
        }
        cout << grupo << endl;
    }
   

    return 0;
}

