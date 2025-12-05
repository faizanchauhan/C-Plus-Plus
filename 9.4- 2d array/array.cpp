#include<iostream>
using namespace std;

int main(){
    int chaiSales[3][7]={
        {40, 43, 45, 46, 48, 42, 44}, 
        {55, 59, 51, 53, 50, 57, 58},
        {67, 69, 62, 66, 68, 87, 28}
     };

    for(int i=0; i < 3; i++){
        cout<<"I am at shop: "<<i+1<<"\n";
        for(int j=0; j < 7; j++){
            cout<< chaiSales[i][j] <<" cups"<<endl;
        }
    }

    return 0;
}