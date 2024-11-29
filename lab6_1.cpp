#include<iostream>
using namespace std;

int main(){
    int i;
    int x[2]={0,0};
    cout << "Enter an integer: ";
    cin>>i;
    while(i!=0){
        if(i%2==0){
            x[0]++;
        }else{
            x[1]++;
        }
        cout << "Enter an integer: ";
        cin>>i;
    }
    cout << "#Even numbers = "<< x[0]<<"\n";
    cout << "#Odd numbers = "<< x[1]<<"\n";
}