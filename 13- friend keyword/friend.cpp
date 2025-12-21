#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Chai{
    private:
        string teaName;
        int servings;

    public:
        Chai(string name, int serve): teaName(name), servings(serve){};

        friend bool compareServings(const Chai &chai1, const Chai &chai2);

        void display() const{
            cout<<"TEA NAME: "<<teaName<<"\n";
        }
};

bool compareServings(const Chai &chai1, const Chai &chai2){
    return chai1.servings>chai2.servings;
}

int main(){
    Chai masalaChai ("Masala chai", 14);
    Chai gingerChai ("ginger chai", 8);

    masalaChai.display();
    gingerChai.display();

    if(compareServings(masalaChai, gingerChai)){
        cout<<"Masala chai is having MORE sevings"<<endl;
    } else {
        cout<<"Masala chai is having LESS sevings"<<endl;
    }
    
    return 0;
}