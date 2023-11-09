#include <iostream>
#include <vector>

using namespace std;

int negyzetosszeg(int a, int b) 
{
    return a * a + b * b;
}

int elso_paros_helye(vector<int> list) 
{
    int i = 0;
    while (i < list.size() && list[i] % 2 != 0)
    {
        i++;
    }

    list[0] = -100; // ez nyilván nem a keresés része!
    return i < list.size() ? i : -1;
}

int main()
{
    std::cout << "Hello World!\n";

    int a = 5;
    int b = a;

    cout << a << ", " << b << endl;

    vector<int> list;

    cout << list.size();

    vector<int> otelemu(5);

    for (size_t i = 0; i < otelemu.size(); i++) 
    {
        cout << otelemu[i] << " ";
    }
    cout << endl;

    vector<int> l1(5, 2);
    vector<int> l2 = l1;

    for (int i = 0; i < 5; i++) 
    {
        cout << l1[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << l2[i] << " ";
    }
    cout << endl;

    //pointerek

    int a2 = 5;

    cout << "a2: " << a << " a2 pointere pedig: " << &a2 << endl;

    int *pointer = &a2;

    cout << pointer << endl;

    cout << *pointer << endl;

    //int b = *(&a2);
    //cout << b << endl;

    vector<int> szamok = vector<int>{ 1, 3, 7, 8, 9 };

    cerr << "Az elsõ páros szám helye: ";  // <-- CERR: Console Error WriteLine
    cout << elso_paros_helye(szamok) << endl;

}

