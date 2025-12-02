#include<iostream>
#include<string>
using namespace std;


// returnType FunctionName(parameters){
//     //function body
// }

int checkTemperature(int temperature){
    return temperature;
}

//declaration of function
void serveChai(int cups);

//declaration and definition both
void makeChai(){
    cout<<"boiling water, adding tea leaves, waiting..."<<endl;
}

//default parameter
void serveChai(string teaType = "lemon tea"){
    int cup = 2; // formal parameter> inside the function.(just for notes)
    cout<<"serving "<< teaType<<endl;

}

int main(){

    int temp = checkTemperature(60);
    cout<<temp<<endl;

    serveChai(3);
    makeChai();  //calling a function
    serveChai("orange tea");  // actual parameter

    return 0;
}

//definition of function
void serveChai(int cups){
    cout<<"serving "<< cups << " cups of tea.\n";
}