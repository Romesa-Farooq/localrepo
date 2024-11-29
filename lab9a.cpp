#include<iostream>
using namespace std;
int main(){
    int option;
    int balance=1000;
    int amount=0;
    int newbalance= amount + balance ;
    cout<<"Choose the following menu: "<<endl;
    cout<<"1: Deposit Money"<<endl;
    cout<<"2: Withdraw"<<endl;
    cout<<"3: Check Balance"<<endl;
    cout<<"4: Exit"<<endl;
    cin>>option;

    switch(option){
        case 1:
        cout<<"Enter deposit amount:"<<endl;
        cin>>amount;
        cout<<"Your new balance is "<<newbalance;
        break;

        case 2:
        cout<<"Enter Withdraw amount"<<endl;
        cin>>amount;
        if(amount > balance){
            cout<<"Insufficient balance!";
        }
        else{
            cout<<"Your new balance is "<<balance - amount;
            }
        
        break;

        case 3:
        cout<<"Your current balance is "<<newbalance;
        break;

        case 4:
        cout<<"Exit"; 
        break;
    }
    return 0;   
    

}