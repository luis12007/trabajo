#include "iostream"

using namespace std;

int main(void)
{
    int a, b, c, sum, prom;
    cout << endl; // para que se vea mas bonito
    cout << "ingrese el primer numero:";
    cin >> a;
    cout << "ingrese el segundo numero:";
    cin >> b;
    cout << "ingrese el tercer numero:";
    cin >> c;

    sum = a+b+c;
    prom = sum/3;
    cout << "el promedio de los numeros es:";
    cout << prom;

}