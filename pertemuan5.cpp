#include <iostream>
using namespace std;

int bilangan1, bilangan2;

void inputdata()
{
   cout << "masukkan bilangan pertama : ";
   cin >> bilangan1;
   cout << "masukkan bilangan kedua : ";
   cin >> bilangan2;
}

int perjumlahan(int a, int b)
{
    return a + b;
}
int pengurangan(int a, int b)
{
    return a - b;
}
int perkalian(int a, int b)
{
    return a * b;
}
float pembagian(int a, int b)
{
     a / b;
}

int main()
{
    int pilihan;

    do
    {
        cout << "kalkulator sederhana" << endl;
        cout << "====================" << endl;
        cout << "1. perjumlahan" << endl;
        cout << "2. pengurangan" << endl;
        cout << "3. perkalian" << endl;
        cout << "4. pembagian" << endl;
        cout << "5. keluar" << endl;
        cout << "====================" << endl;
        cout << "masukan menu pilihan : ";
        cin >> pilihan;

    
    }
    
}
