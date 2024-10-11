#include <iostream>
#include <string>
#include <vector>
using namespace std;


class Livro{
private:
    string titulo;
    string autor;
    int ano;

public: 
    Livro(string t, string a, int y): titulo(t), autor(a), ano(y){}
    string getTitulo(){ return titulo;}
    string getAutor() { return autor;}
    int getAno(){return ano;}

    void exibirInfo(){
        cout << "Livor: "<< titulo 
        << " Autor: " << autor 
        << "Ano: " << ano << endl; 
    }
};

class Biblioteca{
private:
    vector<Livro> livros;
public:

    void adicionarLivro(Livro livro){
        livros.push_back(livro);
    }


    void exibirLivros(){
        cout << "Livros na Biblioteca: " << endl;
        for (Livro& livro: livros)
            livro.exibirInfo();
    }

    // Método para remover um livro pelo título
    void removerLivro(string titulo) {
    // Converter o título a ser removido para minúsculas
    transform(titulo.begin(), titulo.end(), titulo.begin(), ::tolower);

    auto it = remove_if(livros.begin(), livros.end(), [titulo](Livro& livro) {
        string tituloLivro = livro.titulo;
        // Converter o título do livro para minúsculas
        transform(tituloLivro.begin(), tituloLivro.end(), tituloLivro.begin(), ::tolower);
        return tituloLivro == titulo;
    });

    if (it != livros.end()) {
        livros.erase(it, livros.end());  // Remove o livro encontrado
        cout << "Livro \"" << titulo << "\" removido da biblioteca." << endl;
    } else {
        cout << "Livro \"" << titulo << "\" não encontrado na biblioteca." << endl;
    }
}
};

int main(){
    Livro livro1("1984", "George Orwell", 1949);
    Livro livro2("O Semhor dos Anéis", "J. R. R. Tolkien", 1954);
    Biblioteca biblioteca;
    biblioteca.adicionarLivro(livro1);
    biblioteca.exibirLivros();
    biblioteca.adicionarLivro(livro2);
    biblioteca.exibirLivros();

    cout << endl;
    biblioteca.removerLivro("1984");

    // Exibir livros novamente após remoção
    cout << endl;
    biblioteca.exibirLivros();

}