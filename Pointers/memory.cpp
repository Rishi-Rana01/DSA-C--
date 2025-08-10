#include<iostream>
#include<vector>
using namespace std;

int main(){
   /* int a=10;
    int* ptr = &a;
    cout<< ptr<< endl;
    cout<<&a<<endl;
    return 0;*/

    int a = 10;
    int* ptr = &a;

    // int** ptr2= &ptr;
    // cout<<ptr2<<endl;
    // cout<<&ptr<<endl;

    cout<< *(&a)<<endl; // value stored at address a
    return 0;
}