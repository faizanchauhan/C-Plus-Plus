#include<iostream>
#include<string>
using namespace std;

int main(){
    string teaTypes[5]={"oolong tea","orange tea","green tea", "black tea", "lemon tea"};

    for(int i=0; i < 5; i++){
        cout<<"brewing "<<teaTypes[i]<<endl;

        for(int j=1; j<=3; j++){
            cout<<"brewing "<<j<<" cup of "<<teaTypes[i]<<endl;
        }
    }

 
    return 0;
}