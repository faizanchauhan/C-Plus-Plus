#include<iostream>

using namespace std;

int main(){
    int hour;

    cout<<"what is the current hour (0-23)? ";
    cin>>hour;

    if(hour>=8 && hour<18){
        cout<<"The shop is OPEN!";
    } else {
        cout<<"The shop is CLOSED!";
    }

    return 0;
}