#include<iostream>
#include<vector>
using namespace std;

class Chai{
    private:
        string teaName;
        int servings;
        vector<string> ingredients;

    public:
        Chai(){
            teaName="unknown tea";
            servings=2;
            ingredients={"water", "tea leaves"};
        }

        Chai(string name, int serve, vector<string> ingred){
            teaName = name;
            servings = serve;
            ingredients = ingred;
        }

        // getter for tea name
        string getTeaName(){
            return teaName;
        }

        //setter for tea name
        void setTeaName(string Name){
            teaName=Name;
        }

        //getter for servings
        int getServings(){
            return servings;
        }

        //setter for servings
        void setServings(int serve){
            servings = serve;
        }

        //getter for ingredients
        vector<string> getIngredients(){
            return ingredients;
        }

        //setter for ingredients
        void setIngredients(vector<string> ingre){
            ingredients = ingre;

        }

         void displayChaiDetails(){

            cout<<"tea name: "<<teaName<<"\n";
            cout<<"servings: "<<servings<<"\n";
            cout<<"ingredients: ";
            for(string ingrid : ingredients){
                cout<<ingrid<<" "; 
;            }
            cout<<endl;
        }


};

int main(){
        Chai chai;
        chai.setTeaName("lemon tea");
        chai.setServings(9);
        chai.displayChaiDetails();

    return 0;
}