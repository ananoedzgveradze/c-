#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "chaweret weli" << endl;
    cin >> a;

    if (a%100 != 0 && a % 4 == 0) {
        cout << "nakiani weliwadia" << endl;

    }

    else if (a % 100 == 0 && a % 400 == 0) {
        cout << "nakiani weliwadia" << endl;

    }
    else {
        cout << "ar aris nakiani weliwadi" << endl;
    }
    return 0;
}