#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a year"<<endl;
    cin>>n;
    if(n%4==0){
        if(n%100==0){
            if(n%400==0){
                cout<<"a leap year"<<endl;
            }
            else{cout<<"not a leap year"<<endl;}

        }
        else{cout<<" a leap year"<<endl;}
    }
    else{cout<<"not a leap year"<<endl;}
}