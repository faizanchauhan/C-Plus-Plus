#include<iostream>
#include<string>
using namespace std;

int main(){

    int totalTeacups;
    double PricePerCup, totalPrice, discountedPrice;

    cout<< "How many cups of tea do you want? ";
    cin >> totalTeacups;

    cout << "What is the price of one cup of Tea? ";
    cin >> PricePerCup;

    totalPrice = totalTeacups*PricePerCup;

    //give 5% discount if total price is above 100

    if(totalPrice > 100){
        discountedPrice = totalPrice - (totalPrice*0.05);
        cout<<"the total discounted price is "<<discountedPrice;

    } else {
        cout<<"the total price is "<<totalPrice;

    }

    return 0;
}
