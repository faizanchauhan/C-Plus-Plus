#include<iostream>
#include<string>
using namespace std;

void pourChai(int &cups){
    cups= cups + 5;
    cout<<"pouring "<< cups <<" cups of tea."<<endl;

} 

int main(){

    int chaiCups=3;
    pourChai(chaiCups); 
    cout<<"total cups are "<<chaiCups<<endl;

    return 0;
}