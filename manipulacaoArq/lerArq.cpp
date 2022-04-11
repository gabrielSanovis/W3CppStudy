#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main() {
    string texto;
    ifstream lerArquivo("criandoArqnoCpp.txt");
    while(getline (lerArquivo, texto)) {
        cout << texto;
    }
}