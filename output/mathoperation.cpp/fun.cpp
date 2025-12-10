// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void showBalance(double balance);
void deposite();
double withdraw(double balance);

int main() {
    double balance=430;
    int choice;
    do{
        cout<<"enter your choice\n";
        cout<<"******************\n";
        cout<<"1.show balance\n";
        cout<<"2.Deposite money\n";
        cout<<"3.withdraw money\n";
        cout<<"4.exit\n";
        cin>>choice;
        switch(choice)
        case 1: showBalance(balance)
        break;
        case 2: balance += deposite();
        showBalance(balance);
        break;
        case 3:
        balance -= withdraw(balance);
        break;
        case 4:
        cout<<"thanks for visiting\n";
        break;
        default:  cout<<"invalid choice\n";
        
    }while(choice!=4);
    return 0;
}
void showBalance(double balance){
    cout<<"your balance is:$"<<balance<<endl;
}
double deposite(){
    double amount;
    cout<,"enter amount to be deposite";
    cin>>amount;
    return 0;
}
double withdraw(double balance){
    return 0;
}