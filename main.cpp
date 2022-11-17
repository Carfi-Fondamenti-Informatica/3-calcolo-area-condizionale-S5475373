#include <iostream>
using namespace std;
int main() {
float a=0, b=0;
int opzione;
cin >> a >> b >> opzione;
    switch (opzione) {
     case 0:
        cout << (a*b/2) << endl;
    break;
    case 1:
        cout << (a*a) << endl;
    break;
    case 2:
        cout << (a*b) << endl;
    break;
default:
cout << "opzione non valida" << endl;
}
return 0;
}
