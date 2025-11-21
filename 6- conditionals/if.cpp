#include<iostream>
#include<string>
using namespace std;

int main(){
    string teaOrder;

    cout<<"What is your order? "<<endl;
    getline(cin, teaOrder);

    if(teaOrder=="Green Tea"){
        cout<<"Your order Green Tea is confirmed";

    }
    
    return 0;
}