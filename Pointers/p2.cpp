#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int a = 5;
    int *p = &a;
    int **q = &p;

    cout << *p << endl;// address value of pointer uss address mai kon c vallue hai
    cout << **q << endl;// address value of pointer to pointer uss address mai kon c vallue hai
    cout << p << endl;
    cout << *q << endl;

    return 0;
}