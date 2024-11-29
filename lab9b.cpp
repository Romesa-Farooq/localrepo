#include<iostream>
using namespace std;
int main(){
    char choice;
     cout<<"Choose Red,Yellow or Green:"<<endl;
     cout<<"R=Red , Y=Yellow , G=Green"<<endl;
     cin>>choice;

     switch(choice){
        case 'R':
        case 'r':
        cout<<"Stop!";
        break;

        case 'Y':
        case 'y':
        cout<<"Slow Down..";
        break;

        case 'G':
        case 'g':
        cout<<"Go!";
        break;
        
        default:
        cout<<"Invalid input";
        break;
     }
     return 0;
}