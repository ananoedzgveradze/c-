#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cout<<"შეიყვანეთ ციფრები"<<endl;
    cin>>a>>b>>c;
    if (a>b && a>c) {
        cout<<a<<" არის მაქსიმალური რიცხვი" <<endl;
        }
        else if (b>a && b>c) {
        cout<<b<<" არის მაქსიმალური რიცხვი" <<endl;   
        }
        else if (c>a && c>b) {
        cout<<c<<" არის მაქსიმალური რიცხვი" <<endl;  
        }
        else if (a==b && a==c) {
        cout<<" სამივე რიცხვი ტოლია"  <<endl;    
        }

    return 0;
}
