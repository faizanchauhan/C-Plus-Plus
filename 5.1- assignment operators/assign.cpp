#include<iostream>
#include<string>
using namespace std;

int main(){
    int TeaBags;
    int extraTeaBags;

    cout<<"How many tea bags do you have? ";
    cin>>TeaBags;

    //give them 5 extra tea bags if less than 10

    if(TeaBags < 10){

        // TeaBags=TeaBags+5;
        TeaBags += 5;
    } 
    
    cout<<"the total tea bags you have are: " <<TeaBags <<endl;
    return 0;
}