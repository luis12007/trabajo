#include "iostream"

using namespace std;

int main(void)
{
    float radio, diametro, periodo, area;
    cout<< endl;
    cout<< "MAQUINA PARA SACAR AREA Y PERIMETRO... bep bup"; // no se como ponerle tilde a la A ;(
    cout<< endl;
    cout << "ingrese el radio del circulo:";
    cin >> radio;
    
    diametro = radio*2;
    periodo = diametro*3.14;
    area = 3.14*diametro*diametro/4;  

    cout<< endl;
    cout<<"su periodo es:";
    cout << periodo;
    cout<< endl;
    cout<< "su area es:";
    cout<< area;
    
}