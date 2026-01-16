#include <iostream>
#include <string>
using namespace std;

class Estudiante 
{
    private:
    string nombre;
    float notaFinal;
    
    public:
        Estudiante(string n, float cal)
        {
            nombre = n;
            notaFinal = cal;
        }

        void imprimir()
        {
        cout << nombre << " - Nota: " << notaFinal << endl;
        }
};



class ListaEnlazada {
    private:

    public:
};

int main(){

    return 0;
}