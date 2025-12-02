#include<iostream>
#include<string>
using namespace std;

int main(){
    string teaTypes[4]={"orange tea","green tea", "black tea", "lemon tea"};

    for(int i=0; i<4;i++){
        
         if(teaTypes[i]=="green tea"){
            cout<<"skipping the "<< teaTypes[i]<<endl;
            continue;
            }
    cout<< "brewing " << teaTypes[i] << endl;
 }
    return 0;
}