#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter the character"<<endl;
    cin>>ch;
    if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z')){
        cout<<"character is an alphabet"<<endl;
    }
    else if(ch>='0' && ch<='9'){
        cout<<"character is a digit"<<endl;
    }
    else{cout<<"character is a special symbol"<<endl;}
}