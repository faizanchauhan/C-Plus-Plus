#include<iostream>
#include<string>
using namespace std;

int main(){
    string userResponse;

    while(true){
        cout<<"do you want more tea? (press 'stop' to exit)";
        cin>>userResponse;

        if(userResponse=="stop"){
            //exit the loop
            break;
        }

        cout<<"here is your another cup of tea."<<endl;
    }
    cout<<"no more tea will be served.";

    return 0;
}