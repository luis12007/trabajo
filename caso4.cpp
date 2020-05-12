#include "iostream"

using namespace std;

int main(void)
{
    string produc;
    int x;

    cout<< endl;
    cout<< "la tiendita :)" << endl;
    cout<< "que va a querer?";
    cin>> produc;

    cout << "ese producto vale 4.99"<< endl;
    cout << "cuantos " << produc << " quiere?" <<endl;
    cout << "cantidad:";
    cin >> x;

    cout << "serian " << x*4.99;

}