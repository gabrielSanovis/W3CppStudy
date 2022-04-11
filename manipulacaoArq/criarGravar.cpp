#include<iostream>
#include<fstream>

using namespace std;

int main () {
    string texto;
    
    //Criar e Gravar um arquivo
    //criando objeto
    ofstream myFile("criandoArqnoCpp.txt");
    
    //gravando uma informação dentro do arquivo
    myFile << "O arquivo foi criado usando POO do c++, utilizando a biblioteca fstream";
    
    //limpando a memória
    myFile.close();
    
    //ler Arquivo
    ifstream lerArquivo("criandoArqnoCpp.txt");

    //pegar o que foi lido no arquivo e inserir em "texto"
    while(getline (lerArquivo, texto)) {
        cout << texto;
    }

    //fechar arquivo
    lerArquivo.close();

}