#include<iostream>
#include<string>
using namespace std;

int main(){

    int teaCups;

    cout<<"enter number of tea cups to serve: ";
    cin>>teaCups;

    while (teaCups>0) // condition (0 se zyada hai jab tak, tab tak serve krou)
    {
        teaCups--; // increment/decrement
        cout<<"serving a cup of tea \n"<<teaCups<<" remaining"<<endl; //body
    }
    cout<<"All tea cups are served. ";

    return 0;
}