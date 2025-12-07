#include<iostream>
#include<vector>
using namespace std;

class Chai{
    public:
        // (data members) attributes -> class k andar variables
        string teaName; // name of the tea
        int servings; // number of servings
        vector<string> ingredients; // list of ingredients for the tea

        // default constructor
        Chai(){
            teaName = "unknown tea";
            servings = 2;
            ingredients = {"tea", "water"};
            cout <<"constructor called"<<endl;
            }

        // member function -> class k andar define aik method ya function

        void displayChaiDetails(){

            cout<<"tea name: "<<teaName<<"\n";
            cout<<"servings: "<<servings<<"\n";
            cout<<"ingredients: ";
            for(string ingrid : ingredients){
                cout<<ingrid<<" "; 
            }
            cout<<endl;
        }

};

int main(){
    Chai defaultchai;

    defaultchai.displayChaiDetails();

    return 0;
}