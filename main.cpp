#include <iostream>
using namespace std;
int main() {
    float a=0, b=0;
    int opzione=0;

    cout << "inserire il valore di a" << endl;
    cin >> a;

    cout << "inserire il valore di b" << endl;
    cin >> b;

    cout << "Scegliere quale area calcolare" << endl << "Digita 0 per l'area del triangolo" << endl << "Digita 1 per l'area del quadrato" << endl << "Digita 2 per l'area del rettangolo" << endl;
    cin >> opzione;

    switch (opzione) {
        case (0):
            cout << ((a*b)/2);
            break;
        case (1):
            cout << (a*a);
            break;
        case (2):
            cout << (a*b);
            break;
        default:
            cout << "operazione non valida" << endl;
    }
    return 0;
}
