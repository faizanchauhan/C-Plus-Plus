#include<iostream>
#include<vector>
using namespace std;

class Chai{
    public:
        string teaName;
        int servings;
        vector<string> ingredients;


        //delegation constructor
        Chai(string name): Chai(name, 1, {"water", "tea leaves"}){}


        // main constructor

        Chai(string name, int serve, vector<string> ingred){
            teaName = name;
            servings = serve;
            ingredients = ingred;

            cout<<"Main constructor called!"<<endl;
        }

        void displayChaiDetails(){
            cout<<"tea name: "<<teaName<<"\n";
            cout<<"servings: "<<servings<<"\n";
            cout<<"ingredients: ";
            for(string ingred : ingredients){
                cout<<ingred<<" "; 
            }
            cout<<endl;
        }
};

int main(){
    Chai quickChai("quick chai");
    quickChai.displayChaiDetails();
}
