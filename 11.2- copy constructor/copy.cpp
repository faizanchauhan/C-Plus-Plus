#include<iostream>
#include<vector>
using namespace std;

class Chai{
    public:
        // (data members) attributes -> class k andar variables
        string* teaName; // name of the tea
        int servings; // number of servings
        vector<string> ingredients; // list of ingredients for the tea

        // parameterized constructor
        Chai(string name, int serves, vector<string> ingrid){
            teaName = new string (name);
            servings = serves;
            ingredients = ingrid;
            cout <<"parameterized constructor called "<<endl;
            }

            Chai(const Chai& other){
                teaName = new string(*other.teaName);
                servings = other.servings;
                ingredients = other.ingredients;
                cout<<"copy constructor called \n";
            }

            ~Chai(){
                delete teaName;
                cout<< "destructor called"<<endl;
            }

        // member function -> class k andar define aik method ya function

        void displayChaiDetails(){

            cout<<"tea name: "<<*teaName<<"\n";
            cout<<"servings: "<<servings<<"\n";
            cout<<"ingredients: ";
            for(string ingrid : ingredients){
                cout<<ingrid<<" "; 
            }
            cout<<endl;
        }

};

int main(){
    Chai lemonTea("lemon tea", 2, {"water", "sugar", "tea leaves"});
    lemonTea.displayChaiDetails();

    // copy the object
    Chai copiedChai = lemonTea;
    copiedChai.displayChaiDetails();

    *lemonTea.teaName = "modified lemon tea";

    cout<<"Lemon Tea: \n";
    lemonTea.displayChaiDetails();
    cout<<"Copied tea: \n";
    copiedChai.displayChaiDetails();


    return 0;
}