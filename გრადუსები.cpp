#include <iostream>
using namespace std;

int main()
{

    double choice, a, far, cel;

    cout << "airchiet 1: tu gindat farengeitidan celsiushi gadayvana" << endl;
    cout << "airchiet 2: tu gindat celsiusidan farengeitshi gadayvana" << endl;
    cin >> choice;

    if (choice == 1) {
        cout << "chaweret ricxvi" << endl;
        cin >> a;
        if (a > 0) {
            far = (a - 32) * 5 / 9;
            cout << a << " F = " << far << " C" << endl;
        }
        else {
            cout << "chaweret dadebiti ricxvi" << endl;
        }
    }

    else if (choice == 2) {
        cout << "chaweret ricxvi" << endl;
        cin >> a;
        if (a > 0) {
            far = (a * 9 / 5) + 32;
            cout << a << " C = " << far << " F" << endl;
        }
        else {
            cout << "chaweret dadebiti ricxvi" << endl;
        }
    }
    return 0;
}