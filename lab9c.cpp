#include<iostream>
using namespace std;
int main(){
    int month;
    cout<<"Choose month (1-12): "<<endl;
    cin>>month;

    switch(month){
        case 1:
        case 2:
        case 12:
        cout<<"Winter Season!";
        break;
        case 3:
        case 4:
        case 5:
        cout<<"Spring Season!";
        break;
        case 6:
        case 7:
        case 8:
        cout<<"Summer Season!";
        break;
        case 9:
        case 10:
        case 11:
        cout<<"Autumn Season!";
        break;
        default:
        cout<<"Invalid Input!!";
    }
    return 0;
}