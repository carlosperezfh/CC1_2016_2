#include <iostream>

using namespace std;
class Roedor{
public:
    int anyosvida;
    void raza()
    void genero()
private:
    int fechaDeNacimiento;
};

void Roedor::raza(){
    cout << "es hamster\n";
}
void Roedor::genero(){
    cout << "es hembra\n";
}

int main()
{
    Roedor Micky;
    Roedor Speedy;
    Micky.genero();
    Speedy.raza();
    system("pause>nul")
    return 0;
}
