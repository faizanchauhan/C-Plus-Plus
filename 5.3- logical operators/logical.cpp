#include<iostream>
#include<string>
using namespace std;

int main(){
    bool checkStudent;
    int cupCount;

    cout<<"are you a student? ( 1 for yes and 0 for no ) ";
    cin>> checkStudent;
    cout<<"what is your cup count? ";
    cin>> cupCount;

    if(checkStudent || cupCount>=15){
        cout<<"you are eligible for a discount.";
    } else {
        cout<<"you are not eligible for a discount.";
    }
    
    return 0;
}