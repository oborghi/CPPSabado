#include <iostream>

using namespace std;

//class Funcionario
//{
//protected:
//    int codigo;
//    string nome;
//    string endereco;
//    double salario;
//public:
//    Funcionario(int codigo) : codigo(codigo)
//    {
//        cout << "Funcionario(int codigo)\n";
//    }
//    Funcionario(int codigo, string nome) : Funcionario(codigo)
//    {
//        this->nome = move(nome);
//        cout << "Funcionario(int codigo, string nome)\n";
//    }
//    Funcionario(int codigo,
//                string nome,
//                string endereco) : Funcionario(codigo, nome)

//    {
//        this->endereco = move(endereco);
//        cout << "Funcionario(int codigo, string nome, string endereco)\n";
//    }
//    Funcionario(int codigo,
//                string nome,
//                string endereco,
//                double salario) : Funcionario(codigo, nome, endereco)

//    {
//        this->salario = salario;
//        cout << "Funcionario(int codigo, string nome, string endereco, double salario)\n";
//    }


//    ~Funcionario()
//    {
//        cout << "~Funcionario()\n";
//    }
//    string getNome() const{return nome;}
//    void setNome(const string &value){nome = value;}
//    string getEndereco() const { return endereco;}
//    void setEndereco(const string &value){endereco = value;}
//    double getSalario() const {return salario;}
//    void setSalario(double value){salario = value;}
//    int getCodigo() const {return codigo;}
//    void setCodigo(int value){codigo = value;}
//};


//class Desenvolvedor : public Funcionario
//{
//public:
//    using Funcionario::Funcionario;
//    ~Desenvolvedor()
//    {
//        cout << "~Desenvolvedor()\n";
//    }
//    void trabalhar() { cout <<  "Codificando...\n"; }
//};

//void imprimir(const Funcionario &f)
//{
//    cout << "Codigo: "   << f.getCodigo()   << '\n';
//    cout << "Nome: "     << f.getNome()     << '\n';
//    cout << "Endereco: " << f.getEndereco() << '\n';
//    cout << "Salario: "  << f.getSalario()  << '\n';
//}

class Funcionario
{
protected:
    int codigo;
    string nome;
    string endereco;
    double salario;
public:
    Funcionario(int codigo) : codigo(codigo){cout << "Passando por Funcionario()...\n";}
    ~Funcionario(){cout << "Passando por ~Funcionario()...\n";}
    string getNome() const{return nome;}
    void setNome(const string &value){nome = value;}
    string getEndereco() const { return endereco;}
    void setEndereco(const string &value){endereco = value;}
    double getSalario() const {return salario;}
    void setSalario(double value){salario = value;}
    int getCodigo() const {return codigo;}
    void setCodigo(int value){codigo = value;}
};

class Desenvolvedor : public Funcionario
{
public:
    Desenvolvedor(int codigo) : Funcionario(codigo)
    {
          cout << "Passando por Desenvolvedor(int codigo)...\n";
    }
    ~Desenvolvedor(){cout << "Passando por ~Desenvolvedor()...\n";}
    void trabalhar() { cout << "Codificando...\n"; }
};


class DesenvolvedorSenior : public Desenvolvedor
{
public:
    DesenvolvedorSenior(int codigo) : Desenvolvedor(codigo)
    {
         cout << "Passando por DesenvolvedorSenior(int codigo)...\n";
    }
    ~DesenvolvedorSenior(){cout << "Passando por ~Desenvolvedor()...\n";}
    void ajudarOutroDesenvolvedor() {cout << "Ajudando...\n";}
    void imprimirDados()
    {
        cout << "codigo: " << codigo << " | nome: " << nome << " | endereco: "
                << endereco << " | salario: " << salario << "\n\n";
    }
};


int main()
{
    DesenvolvedorSenior herik(1);
    herik.setSalario(1);
    herik.setNome("Herik");
    herik.setEndereco("Rua ABC");
    herik.trabalhar();
    herik.ajudarOutroDesenvolvedor();
    herik.imprimirDados();


    return 0;
}
