#include<iostream>
using namespace std;
int main(){
    int arr[4];
    int brr[4];
    cout<<"Enter a 4 digit number: "<<endl;
    int i=0;
    while(i<4){
    cin>>arr[i];
    i++;
    }
    cout<<"Number in reverse order: ";
    i=0;
    while(i<4){
        brr[i]=arr[3-i];
        i++;
    }
    i=0;
    while(i<4){
        cout<<brr[i];
        i++;
    }

    return 0;
}