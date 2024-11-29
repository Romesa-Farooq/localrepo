#include<iostream>
using namespace std;
int main(){
    int num1;
    char ch;
    int num2;

    cout<<"Enter 2 numbers for operation:"<<endl;
    cin>>num1;
    cin>>num2;
    cout<<"Enter Operator: "<<endl;
    cin>>ch;
    int result;
    
    switch(ch){
        case '+':
        result = num1 + num2;
        cout<<"Result is: "<<num1<<" + "<< num2<<" = "<<result;
        break;

        case '-':
        result = num1 - num2;
        cout<<"Result is: "<<num1<<" - " <<num2 <<" = "<<result;
        break;

        case '*':
        result = num1 * num2;
        cout<<"Result is: "<<num1<<" * "<< num2 <<" = "<<result;
        break;

        case '/':
        result = num1 / num2;
        cout<<"Result is: "<<num1<<" / "<< num2<<" = "<<result;
        break;

        default:
        cout<<"Invalid operator. Choose between +,-,*,/";
        break;
    }

        
    return 0;
}