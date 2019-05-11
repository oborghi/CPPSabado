#include <iostream>

using namespace std;

class Janela
{
    void desenharBordas()
    {
        cout << "Desenhando bordas...\n";
    }
    void imprimirTitulo()
    {
        cout << "Imprimindo titulo..\n";
    }
public:
    void exibir()
    {
        desenharBordas();
        imprimirTitulo();
        cout << "Exibindo a janela...\n";
    }
    void exibir(int i)
    {
        desenharBordas();
        imprimirTitulo();
        cout << "Exibindo a janela...\n";
        cout << i << '\n';
    }
};

class JanelaComMensagem : public Janela
{
public:
    void exibir()
    {
        Janela::exibir();
        cout << "Mensagem!\n";
    }
    void exibir(int i)
    {
        Janela::exibir(i);
    }
};

int main()
{
    JanelaComMensagem jan;
    jan.exibir(1);
    return 0;
}
