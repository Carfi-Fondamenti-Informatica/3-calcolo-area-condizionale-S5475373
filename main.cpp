#include <iostream>
using namespace std;
int main() {
    float a=0, b=0; cin >> a, cin >> b;
    int opzione=0; cin >> opzione;

    switch (opzione) {
        case (0):
            cout << ((a*b)/2);
            break;
        case (1):
            cout << (a*a);
            break;
        case (2):
            cout << (a*b);
        default:
            cout << "operazione non valida" << endl;
    }
    return 0;
}
