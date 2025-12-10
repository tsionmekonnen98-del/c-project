
#include <iostream>

using namespace std;

float add(float x,float y);
float subtract(float x,float y);
float multiple(float x,float y);
float divid(float x,float y);
int main()
{
  float num1,num2;
  cout<<"enter the first num1"<<endl;
  cin>>num1;
  cout<<"enter the second num2"<<endl;
  cin>>num2;
  cout<<"result"<<endl;
  cout<<"addition"<<" "<<add(num1,num2)<<endl;
  cout<<"substraction"<<" "<<subtract(num1,num2)<<endl;
  cout<<"multiplication"<<" "<<multiple(num1,num2)<<endl;
  if (num2!=0){
  cout<<"division"<<" "<<divid(num1,num2)<<endl;
 } else{
    cout<<"division :can't divdided by 0"<<endl;
  }  
  return 0; 
}
  float add(float x,float y){
    return x+y;
}
float subtract(float x,float y){
    return x-y; 
}
float multiple(float x,float y){
       return x*y;
} 
float divid(float x,float y){
    return x/y;
}
