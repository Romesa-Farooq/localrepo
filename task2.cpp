#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a positive N number: "<<endl;
    cin>>n;
    int sum=0;
    int i=1;
    while(i<n){
        sum += i;
        i++;
    }
    cout<<"Sum of N natural number is: "<<endl;
    cout<<sum;

    return 0;


}