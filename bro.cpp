#include <iostream>
#include <ctime>
using namespace std;

char getuserChoice();
char getcomputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);

int main(){
    char player;
    char computer;
    player = getUserChoice();
    cout<<"your choice: ";
    showChoice(player);

    computer = getComputerChoice();
    cout << "computer 's choice";
    showChoice(computer);
    return 0;
}
char getUserChoice(){
    char player;
    cout<<"Rock-paper-Scissors Game!\n";
    do{
        cout<<"choice one of the following\n"
    cout<<"*****************************\n";
    cout<<" 'r' for rock\n";
    cout<<" 'p' for paper\n"
    cout<<" 's' for scissors\n";
    cin>>player;
    }while(player != 'r' && player != 'p' && player != 's');
}
char getcomputerChoice(){
    srand(time(0));
    int num = rand() % 3 + 1;/*1 up to 3 this means int num = rand() % 3 is 0 up to 2 and shift it by one b/c there is 
    +1*/
    switch(num){
        case 1: return 'r';
        case 2: return 'p';
        case 3: return 's';
    }
}
void showChoice(char choice){
  switch(choice){
    case 'r':
    cout<<"Rock\n";
    break;
    case 'p':
    cout<<"paper\n";
    break;
    case 's':
    cout<<"scissors\n";
    break;
  }
}
void chooseWinner(char player, char computer){
switch(player){
    case 'r':
    if(computer == 'r'){
        cout<<"It's a tie!\n";
    }
    else if(computer == 'p'){
        cout<<"you lose!\n";
    }
    else{
        cout<<"you win!\n";
    }
    break;

    case 'p':
    if(computer == 'r'){
        cout<<"It's a win!\n";
    }
    else if(computer == 'p'){
        cout<<"it is a tie!\n";
    }
    else{
        cout<<"you lose!\n";
    }
  break;
  case 's':
    if(computer == 'r'){
        cout<<"you lose!\n";
    }
    else if(computer == 'p'){
        cout<<"you win!\n";
    }
    else{
        cout<<"it is a tie!\n";
    }
    break;
}
}

