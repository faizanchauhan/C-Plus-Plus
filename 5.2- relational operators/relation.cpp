#include<iostream>
#include<string>
using namespace std;

int main(){
    int cups;

    cout<<"how many cups of tea do you have? ";
    cin>>cups;

    if(cups>20){
        cout<<"you have received a GOLD badge"<<endl;
    } else if (cups >= 10 && cups <= 20) {
        cout<<"you have received a SILVER badge"<<endl;
    } else{
        cout<<"NO BADGE FOR YOU";
    }
    

    return 0;
}