// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    string name;
    cout<<"enter your name "<<endl;
    getline(cin, name);
    if(name.length()>12){
        cout<<"your name can't be over 12 character"<<endl;
    } else{
        cout<<"your name is "<<name;
    }
    
    return 0;
}  