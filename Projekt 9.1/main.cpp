#include <iostream>

using namespace std;

float metry;//deklaracja zmiennej

//nawiasy okragle sa zarezerwowane dla funkcji
float ile_cali(float m) //naglowe funkcji
{ //w nawiasie argumenty, nie musimy tak samo nazywac
    //cialo w funkcji w klamrach
   return m*39.37;
}

float ile_jardow(float x);

void ile_mil(float m) //procedura
{
   cout<<"na mile: "<<m*0.0006213;
}

int main()
{
    cout << "Podaj ile metrow: ";
    cin>>metry;

    cout<<"na cale: "<<ile_cali(metry)<<endl;
    cout<<"na jardy: "<<ile_jardow(metry)<<endl;
    ile_mil(metry);

    return 0;
}

float ile_jardow(float x)
{
   return x*1.0936;
}
