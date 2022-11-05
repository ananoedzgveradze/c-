#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    char op;
    float a, b;
    cout << "airchiet operacia (+,-,*,/): ";
    cin >> op;
    cout << "sheiyvanet ori ricxvi" << endl;
    cin >> a >> b;

    switch (op) {
    case '+':
        cout << a << "+" << b << "=" << a + b;
        break;
    case '-':
        cout << a << "-" << b << "=" << a - b;
        break;
    case '*':
        cout << a << "*" << b << "=" << a + b;
        break;
    case '/':
        cout << a << "+" << b << "=" << a / b;
        break;
    
    default: 
        cout << "miutitet swori operacia";
        break;
 }   
    return 0;
}
