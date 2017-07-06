#include <iostream>

using namespace std;

int ile;

int main()
{
    cout << "Ile liczb w tablicy: ";
    cin>>ile;


    //DYNAMICZNA ALOKACJA TABLICY
    int *tablica;
    tablica=new int [ile]; //od tego miejsca rezerwujemy zadana liczbe
    //miejsca w pamieci z pomoca new

    //POKAZ KOLEJNE ADRESY KOMUREK W TABLICY
    for (int i=0; i<ile; i++)
    {
        cout<<(int)tablica<<endl; //int w nawiasach-rzutowanie na zmienna typu int
        tablica++;
    }

    //USUWANIE TAK UTWORZONEJ TABLICY
    //tak utworzon¹ tablicê musimy usunac
    delete [] tablica;
    tablica=NULL;


    return 0;
}
