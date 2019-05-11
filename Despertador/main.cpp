#include <iostream>
#include <chrono>
#include <thread>
#include <memory.h>
#include <mutex>

using namespace std;
using namespace chrono;

mutex mu;

class Despertador
{
    void pausar(int milli)
    {
        this_thread::sleep_for(milliseconds(milli));
    }
protected:
    virtual bool despertar() const = 0;
public:
    void iniciar(int milli)
    {
        while(despertar())
            pausar(milli);
    }
};

class ChecarSMS : public Despertador
{
    bool despertar() const override
    {
        mu.lock();
        cout << "Verificando SMS...\n";
        mu.unlock();
        return true;
    }
};

class ChecarEmail final : public Despertador
{
    bool despertar() const override
    {
        mu.lock();
        cout << "Verificando e-mail...\n";
        mu.unlock();
        return true;
    }
};

int main()
{
    int milli = 1000;
    thread th1([milli]{ChecarSMS().iniciar(milli);});
    //thread th1([milli]{ChecarSMS().iniciar(milli);}); copia
    //thread th1([&milli]{ChecarSMS().iniciar(milli);}); referencia
    //thread th1([&]{ChecarSMS().iniciar(milli);}); Todas por refencia
    //thread th1([=]{ChecarSMS().iniciar(milli);}); Todas por copia
    thread th2([]{ChecarEmail().iniciar(1300);});

    th1.join();
    th2.join();


    return 0;
}
