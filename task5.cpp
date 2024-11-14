#include<iostream>
using namespace std;
int main(){
    int num;
    int count=0;
    cout<<"Enter a number(more than 1 digit no.): "<<endl;
    cin>>num;
    if(num==0){
        count=1;
    }
    else{
        while(num>0){
        num=num/10;
        count++;
       }
    }
    cout<<"Number of digits are: "<<count<<endl;
    return 0;
    
}