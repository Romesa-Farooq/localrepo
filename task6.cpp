#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<=9;i+=2){
        for(int s=9-i;s>0;s--){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}