#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    srand(time(0)); 

    double winRate;
    double vitoriasGeral = 0;
    double totalPartidas = 0;
    char adicionarParticipante = 's';
    const int MAXPARTICIPANTES = 10;
    const int MAXJOGOS = 6;
    char resultados[MAXPARTICIPANTES][MAXJOGOS];
    int numParticipantes = 0;
    float totGrupos[4] = {0, 0, 0, 0};

    while (adicionarParticipante == 's' || adicionarParticipante == 'S') {
        cout << "Resultados para o participante " << numParticipantes + 1 << ":" << endl;
        for (int j = 0; j < MAXJOGOS; ++j) {
            
            char resultadoAleatorio = (rand() % 2 == 0) ? 'V' : 'P';
            resultados[numParticipantes][j] = resultadoAleatorio;
            cout << "Jogo " << j + 1 << ": " << resultadoAleatorio << endl;
        }

        int vitorias = 0;
        for (int j = 0; j < MAXJOGOS; ++j) {
            if (resultados[numParticipantes][j] == 'V') {
                vitorias++;
                vitoriasGeral++;
            }
        }

        int grupo;
        if (vitorias == 5 || vitorias == 6) {
            grupo = 1;
        } else if (vitorias == 3 || vitorias == 4) {
            grupo = 2;
        } else if (vitorias == 1 || vitorias == 2) {
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

    cout << "\n\t\t\tJOGO DE TENIS DO SANDRO" << endl;
    cout << "\nTabela de Resultados:" << endl;
    cout << "------------------------------------------------------" << endl;
    cout << "Participante\t|\tGrupo\t" << endl;
    cout << "------------------------------------------------------" << endl;
    for (int i = 0; i < numParticipantes; ++i) {
        cout << "    " << i + 1 << "\t\t|\t  ";
        int vitorias = 0;
        for (int j = 0; j < MAXJOGOS; ++j) {
            if (resultados[i][j] == 'V') {
                vitorias++;
            }
        }

        int grupo;
        if (vitorias == 5 || vitorias == 6) {
            grupo = 1;
            totGrupos[0] += 1;
        } else if (vitorias == 3 || vitorias == 4) {
            grupo = 2;
            totGrupos[1] += 1;
        } else if (vitorias == 1 || vitorias == 2) {
            grupo = 3;
            totGrupos[2] += 1;
        } else {
            grupo = -1;
            totGrupos[3] += 1;
        }
        cout << grupo << endl;
    }

    cout << "O total de vitorias que o torneio teve foi de " << vitoriasGeral << " vitorias" << endl;
    totalPartidas = numParticipantes * MAXJOGOS;
    winRate = (vitoriasGeral / totalPartidas) * 100;
    cout << "O total de vitorias no torneio foi de " << winRate << "%" << endl;
    cout << "O total de participantes no grupo 1: " << ((totGrupos[0] / numParticipantes) * 100) << "%" << endl;
    cout << "O total de participantes no grupo 2: " << ((totGrupos[1] / numParticipantes) * 100) << "%" << endl;
    cout << "O total de participantes no grupo 3: " << ((totGrupos[2] / numParticipantes) * 100) << "%" << endl;
    cout << "O total de participantes sem grupo : " << ((totGrupos[3] / numParticipantes) * 100) << "%" << endl;

    return 0;
}

