#include<iostream>
#include<string>
using namespace std;

int main(){
    int cups;
    double discount, perCupCost=2.5, totalPrice;

    cout<<"How many cups have you ordered? ";
    cin>>cups;
    
    totalPrice= perCupCost*cups;

    if(cups>20){
        discount=0.20;
    } else if (cups <=20 && cups >=10){
        discount=0.10;
    } else {
        discount=0;
    }  

   totalPrice -= (totalPrice*discount);

   cout<<"total price after discount is: "<<totalPrice<<endl;

   return 0;
}