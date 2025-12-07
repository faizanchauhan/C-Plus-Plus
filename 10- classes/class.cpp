#include<iostream>
#include<vector>
using namespace std;

class Chai{
    public:
        // (data members) attributes -> class k andar variables
        string teaName; // name of the tea
        int servings; // number of servings
        vector<string> ingredients; // list of ingredients for the tea

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
    Chai chaiOne;
    chaiOne.teaName="orange tea";
    chaiOne.servings=2;
    chaiOne.ingredients={"water", "orange", "sugar", "tea"};

    chaiOne.displayChaiDetails();

    Chai chai;
    chai.teaName="tea";
    chai.servings=2;
    chai.ingredients={"milk", "water", "tea", "sugar"};
    
    chai.displayChaiDetails();

    return 0;
}