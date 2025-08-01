#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<char> vec = {'a', 'b', 'c', 'd', 'e'};
    cout << "Elements in the vector: ";

    for (char val : vec)
    { // for each value
        cout << val << endl;
    }
    cout << " size =" << vec.size() << endl;

    vec.push_back('k'); // push back the value
    cout << "After push_back: ";
    for (char v : vec)
    {
        cout << v << " ";
    }
    cout << " size =" << vec.size() << endl;

    vec.pop_back(); // pop back the last value
    cout << "\nAfter pop_back: ";
    for (char v : vec)
    {
        cout << v << " ";
    }
    cout << " size =" << vec.size() << endl;

    return 0;
}