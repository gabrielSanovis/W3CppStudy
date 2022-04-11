#include<iostream>

using namespace std;

int main () {
    bool ships[4][4] = {
        {0, 1, 1, 0},
        {1, 0, 0, 0},
        {0, 1, 0, 1},
        {0, 0, 1, 0}
    };
    int hits = 0;
    int numTurnos = 0;
    
    while(hits < 6) {
        int linha, coluna;
        cout << "\n/////////////////////////////////////////////\n";
        cout << "////////////Escolha sua cordenada////////////\n";
        cout << "/////////////////////////////////////////////\n\n";
        cout << "\nEscolha a linha com um numero entre 0 a 3: ";
        cin >> linha;
        cout << "\nEscolha a coluna com um numero entre 0 a 3: ";
        cin >> coluna;

        if(ships[linha][coluna] == 1) {
            ships[linha][coluna] = 0;

            hits++;

            cout << "\nHit!" << (6 - hits) << "Faltam.\n";
        }else {
            cout << "\nVoce errou, tente novamente.";
        }

        numTurnos++;
    }

    cout << "/////////////////////////////////////////////\n";
    cout << "/////////////////Voce venceu/////////////////\n";
    cout << "/////////////////////////////////////////////\n\n";
    cout << "Total de " << numTurnos << " turnos para vencer.";
}
