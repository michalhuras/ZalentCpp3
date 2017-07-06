// PROGRAM MA ZA ZADANIE POKAZAC WIEKSZA SZYBKOSC ZAPISU I ODCZYTU DANYCH Z TABLICY
// PRZY UZYCIU WSKAZNIKOW

#include <iostream>
#include <time.h>
#include <cstdlib>

using namespace std;

int ile;
clock_t start, stop;
double czas;

int main()
{
    cout << "Ile liczb w tablicy: ";
    cin>>ile;

    //DYNAMICZNA ALOKACJA TABLICY
    int *tablica;
    tablica=new int [ile];

    //ROZPOCZECIE ODLICZANIA CZASU
    start = clock();
    //WCZYTANIE LICZB DO TABLICY
    for (int i=0; i<ile; i++)
    {
        tablica[i]=i;
        tablica[i]+=50;
    }
    stop = clock();
    czas = (double)(stop - start) / CLOCKS_PER_SEC;
    //wynik zostal by otrzymany jako liczba cyklow procesora
    //treba jeszcze zamienic na sekundy
    //CLOCKS_PER_SEC jest pobierane z systemu i bazuje na taktowaniu procesora

    cout<<"Czas zapisu (bez wskaznika): "<<czas<<" s"<<endl;

    delete [] tablica;

    //PONOWNA ALOKACJA TABLICY
     tablica=new int [ile];
	 int *wskaznik=tablica;

    //ROZPOCZECIE ODLICZANIA CZASU
    start = clock();
    //WCZYTANIE LICZB DO TABLICY PRZY UZYCIU WSKAZNIKOW
    for (int i=0; i<ile; i++)
    {
        *wskaznik = i;
        *wskaznik+=50;
        wskaznik++;
    }
    stop = clock();
    czas = (double)(stop - start) / CLOCKS_PER_SEC;
    cout<<"Czas zapisu (ze wskaznikiem): "<<czas<<" s";

    delete [] tablica;

    return 0;
}
