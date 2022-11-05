#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a, b, c, D, x1, x2;
    cout << "ax^2 + bx + c = 0; am gantolebis amosaxsnelad miutitet a,b da c ricxvi"<<endl;
    cin >> a >> b >> c;
    
    D = b * b - 4 * a * c;
    cout << "diskriminanti D=" << D << endl;
    if (D > 0) {
        x1 = (-b + sqrt(D)) / 2 * a;
        x2=  (-b - sqrt(D)) / 2 * a;
        cout << "fesvebi udris " << "(" << x1 << "," << x2 << ")"<<endl;
    }

    else if (D == 0) {
        x1 = -b / 2*a;
        cout << "fesvebi ertmanetis tolia da udris " << x1 << endl;
    }
    else if (D < 0) {
        cout << "amonaxsni ar aqvs" << endl;
    }
  
    
    return 0;
}

