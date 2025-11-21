#include<iostream>
#include<string>
using namespace std;

int main(){
    int choice;
    double price;
    
    cout<<"select your tea: \n";
    cout<<"1.Green Tea \n";
    cout<<"2.Black Tea \n";
    cout<<"3.Oolong Tea \n";
    cout<<"Enter your choice in number: \n";

    cin>>choice;

    switch(choice){
        case 1:
            price=2.0;
            cout<<"you selected Green Tea. price:"<<price<<endl;
            break;
        case 2:
            price=3.0;
            cout<<"you selected Black Tea. price:"<<price<<endl;
            break;
        case 3:
            price=4.0;
            cout<<"you selected Oolong Tea. price:"<<price<<endl;
            break;
        default:
            cout<<"Invalid Input";
            break;
    }

    return 0;
}