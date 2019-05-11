#include <iostream>
#include <stdexcept>
#include <tuple>

using namespace std;

//throw
//try
//catch

template<typename T, int SIZE>
class Array
{
    T *vetor = new T[SIZE];
public:
    int getSize() noexcept
    {
        return SIZE;
    }

    tuple<T, bool> operator[](int index) noexcept(false)
    {
        if(index >= SIZE)
            return tuple<T, bool>(-1, false);
            //throw range_error("Index invalido!\n");
        return tuple<T, bool>(vetor[index], true);
    }
};

void aconteceuUmaDesgracaNaoSeiOQueEh()
{
    cout << "Contate o administrador!\n\n";
}

int main()
{
    set_terminate(aconteceuUmaDesgracaNaoSeiOQueEh);
    Array<int, 3> a;
    try
    {
        auto temp = a[3];
        cout << get<0>(temp) << '\n';
        cout << get<1>(temp) << '\n';
    }
    catch(const range_error &e)
    {
        cout << e.what();
    }
    catch(const exception &e)
    {
        cout << e.what();
    }
    catch(...)
    {
        cout << "Ocorreu um erro!\n";
    }

    cout << "Fim!\n";

    return 0;
}
