#include<iostream>
using namespace std;

int main(){
    int chaiTemperature[5]={45, 50, 55, 60, 70};
    cout<<"Chai Temperature: " << endl;

    for(int i=0; i<5 ; i++){
        cout << chaiTemperature[i] << " Degree Celcius."<<endl;
    }

    return 0;
}