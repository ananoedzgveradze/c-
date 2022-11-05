#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float x1, y1, x2, y2, AB;
    
    cout << "chaweret x1,y1 da x2,y2" << endl;
    cin >> x1 >> y1 >> x2 >> y2;

    cout<<"tqven mier chawerili wertilebia " << "A=(" << x1 << "," << y1 << "); " << "B=(" << x2 << "," << y2 << ")" << endl;
    AB = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    cout << "or wertil shoris mandzili udris " << AB << endl;

  
    
    return 0;
}

