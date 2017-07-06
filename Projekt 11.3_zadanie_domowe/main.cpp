#include <iostream>
#include <cmath>
#include <cstdio>
#include <string>

using namespace std;

float a,b,c,d,e,m,srednia;
char buff[50];
string liczba,buff2;
int main()
{

    cout << "Program liczy srednia i zwraca wartosc liczby, ktore byla najblizej sredniej";
    cout << "Podaj 5 liczb rozdzielonych spacja lub enterem: "<<endl;
    cin>>a>>b>>c>>d>>e;
    srednia=(a+b+c+d+e)/5;

    sprintf(buff, "%0.2f", a);
    liczba=buff;
    m=srednia-a;
        if (abs(srednia-b)==m) {sprintf(buff, "%0.2f", b);buff2=buff; liczba+="  i  "+buff2;}
    if (abs(srednia-b)<m) {m=srednia-b;sprintf(buff, "%0.2f", b);liczba=buff;}
        if (abs(srednia-c)==m) {sprintf(buff, "%0.2f", c);buff2=buff; liczba+="  i  "+buff2;}
    if (abs(srednia-c)<m) {m=srednia-c;sprintf(buff, "%0.2f", c);liczba=buff;}
        if (abs(srednia-d)==m) {sprintf(buff, "%0.2f", d);buff2=buff; liczba+="  i  "+buff2;}
    if (abs(srednia-d)<m) {m=srednia-d;sprintf(buff, "%0.2f", d);liczba=buff;}
        if (abs(srednia-e)==m) {sprintf(buff, "%0.2f", e);buff2=buff; liczba+="  i  "+buff2;}
    if (abs(srednia-e)<m) {m=srednia-e;sprintf(buff, "%0.2f", e);liczba=buff;}
    cout<<"Wybrane liczby"<<endl<<a<<endl<<b<<endl<<c<<endl<<d<<endl<<e<<endl;
    cout<<"Srednia tych liczb to: "<<srednia<<endl;
    cout<<"Liczba najblizej sredniej to: "<<liczba;

    return 0;
}
