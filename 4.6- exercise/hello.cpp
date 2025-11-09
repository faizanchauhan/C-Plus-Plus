#include<iostream>
#include<string>
using namespace std;

int main(){

    string favoriteTea;
    int teaQuantity;

    cout<<"what is the user's favorite tea? \n";
    getline(cin, favoriteTea);

    cout<<"How many cups of "<<favoriteTea<<" do you want? "<<endl;
    cin>>teaQuantity;

    cout<< "The user wants "<< teaQuantity <<endl; 
    cout<< favoriteTea <<endl;

    return 0;
}