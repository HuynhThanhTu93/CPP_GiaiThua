// CPP_GiaiThua.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    cout <<"Giai Giai Thua\n";
    int so, gt = 1;
    cout << "Nhap so:";
    cin >> so;
    for (int i = 1; i <= so; i++)
    {
        gt *= i;
    }
    cout << "Giai Thua " << so << " ! = " << gt;
    cout <<"\nSU DUNG WHILE\n";
    gt = 1;
    int j = 1;
    while (j <= so)
    {
        gt *= j;
        j++;
    }
    cout <<"While Giai Thua " << so << " ! = " << gt;
    cout << "\nSU DUNG DO WHILE\n";
    gt = 1;
    int k = 1;
    do
    {
        gt *= k;
        k++;
    } while (k <= so);
    cout << "Giai Thua " << so << " ! = " << gt;
 
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
