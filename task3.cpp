#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number for multiplication: "<<endl;
    cin>>num;
    
    int i=1;
    int product=1;
    while(i<=10){
        product = num * i;
        cout<< num<<" x "<<i<<" = "<<product<<endl;
        i++;
    }
    return 0;
}