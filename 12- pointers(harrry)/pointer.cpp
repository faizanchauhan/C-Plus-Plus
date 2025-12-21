#include<iostream>
using namespace std;

int main(){
    //what is a pointer ---> data type which holds the address of other data types.

    int a=5;
    int* b=&a;

    // & ---> (address of) operator
    cout<<"The address of a is "<<&a<<endl;
    cout<<"The address of a is "<<b<<endl;
    
    // * ---> (value at) dereference operator
    cout<<"The value at address b is "<<*b<<endl;

    return 0;
}