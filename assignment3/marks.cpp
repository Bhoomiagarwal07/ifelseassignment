#include<iostream>
using namespace std;
int main(){
    cout<<"enter the marks of A:";
    int A;
    cin>>A;
    cout<<"enter the marks of B:";
    int B;
    cin>>B;
    cout<<"enter the marks of C :";
    int C;
    cin>>C;
    if((A>C)  && (B>C)){cout<<"C has scored least marks";
         }
         else if((B>A) && (C>A)){
            cout<<"A has scored least marks";
         }
    else{
        cout<<"B has scored least marks ";
    }     
}
