#include <iostream>
#include <data.h>

//C
//struct Data
//{
//    int dia;
//    int mes;
//    int ano;
//    int ok;
//};

//C
//void alterar(struct Data *dt, int dia, int mes, int ano)
//{
//    dt->dia = dia;
//    dt->mes = mes;
//    dt->ano = ano;

//    if (dia >= 1 && dia <= 31
//            && dt->mes >=1 && dt->mes <=12
//            && dt->ano >= 1900 && dt->ano <= 2100) {
//        dt->ok = 1;
//    } else {
//        dt->ok = 0;
//    }
//}

// C
//void imprimir(struct Data *dt){
//    if(dt->ok){
//        cout << dt->dia << '/' << dt->mes << '/' << dt->ano << '\n';
//    } else {
//        cout << "Data invalida!\n";
//    }
//}


// C
//void iniciar(struct Data *dt){
//    dt->ok = 0;
//}

void testaData(Data &vencimento, Data &pagamento) {

    std::cout << "Vencimento:";
    vencimento.imprimir();

    std::cout << "Pagamento:";
    pagamento.imprimir();

    if(vencimento == pagamento)
        std::cout << "Dentro do prazo!!\n";
    else if (vencimento > pagamento)
        std::cout << "Adiantado!!\n";
    else if (vencimento < pagamento)
        std::cout << "Atrasado!!\n";

    if(vencimento != pagamento){
        std::cout << "A Data de vencimento e pagamento sao diferentes.\n";
    }
}

int main()
{
    //    struct Data dt;

    //    //C
    //    //iniciar(&dt);

    //    //C
    //    //alterar(&dt, 6,4,2019);

    //    //C++
    //    dt.alterar(6,4,2019);

    //    //C
    //    //imprimir(&dt);

    //    //C++
    //    dt.imprimir();

    //    Data d1;
    //    d1.alterar(31,1,2001); d1.imprimir(); // resultado: 31/01/2001
    //    d1.alterar(29,2,2001); d1.imprimir(); // resultado: ERRO | Não bissexto
    //    d1.alterar(29,2,1997); d1.imprimir(); // resultado: ERRO | Não bissexto
    //    d1.alterar(29,2,1800); d1.imprimir(); // resultado: ERRO | Não bissexto
    //    d1.alterar(29,2,1996); d1.imprimir(); // resultado: 29/02/1996
    //    d1.alterar(29,2,2000); d1.imprimir(); // resultado: 29/02/2000
    //    d1.alterar(31,6,2001) ; d1.imprimir(); // resultado: ERRO | Junho tem apenas 30 dias
    //    d1.alterar(31,7,2001) ; d1.imprimir(); // resultado: 31/07/2001
    //    d1.alterar(31,8,2001) ; d1.imprimir(); // resultado: 31/08/2001
    //    d1.alterar(31,9,2001) ; d1.imprimir(); // resultado: ERRO | Setembro tem apenas 30 dias
    //    d1.alterar(31,12,2001); d1.imprimir(); // resultado: 31/12/2001


    Data vencimento(14,3,2019), pagamento(13,4,2019);

    testaData(vencimento, pagamento);

    Data vencimento1(13,4,2019), pagamento1(13,4,2019);

    testaData(vencimento1, pagamento1);

    Data vencimento2(13,5,2019), pagamento2(13,4,2019);

    testaData(vencimento2, pagamento2);

    return 0;
}

