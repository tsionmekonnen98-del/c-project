
#include <iostream>
using namespace std;
string evenOrOdd(int a);
float AreaOfRectangle(float l,float w);
string IsMax(float x,float y);
void menu();
void menuSelection(int choice);
int main(){
int choice;
do{
menu();
cin>>choice;
menuSelection(choice);

}while(choice!=4);

}
void menu(){
cout<<"welcome to the PROGII LAB"<<endl;
cout<<"1.To check evenOrOdd"<<endl;
cout<<"2.To check AreaOfRectangle"<<endl;
cout<<"3.To check IsMaximum"<<endl;
cout<<"4.To Exit"<<endl;
cout<<"Enter Your choice:"<<endl;
}
void menuSelection(int choice){
switch(choice){
case 1:int num;
cout<<"Enter Any Number:";
cin>>num;
cout<<endl<<evenOrOdd(num);
cout<<endl<<endl;
break;
case 2: int length,width;
cout<<"enter length of rectangle:";
cin>>length;
cout<<"enter width of rectngle:";
cin>>width;
cout<<endl<<AreaOfRectangle(length,width);
cout<<endl<<endl;
break;
case 3: int num1,num2;
cout<<"Enter first number:";
cin>>num1;
cout<<"enter second number:";
cin>>num2;
cout<<endl<<IsMax(num1,num2);
cout<<endl<<endl;
break;
default:cout<<"enter right choice! Try again";
}
}
string evenOrOdd(int num){
string result="";
if(num%2==0){
result="this number is Even!";
}
else{
result="this numberis odd!";
}
return result;
}
float AreaOfRectangle(float l,float w){
return l*w;
}
string IsMax(float x,float y){
string result;
if(x>y){result=to_string(x)+"is max value";}
else if(y>x){result=to_string(y)+"is max value";}
else{result="there is no max value both are equal";}
return result;
}
