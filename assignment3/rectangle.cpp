#include<iostream>
using namespace std;
int main(){
    cout<<"enter the length:";
    float l;
    cin>>l;
    cout<<"enter the breadth:";
    float b;
    cin>>b;
    float area = (l*b);
    float perimeter = (2*(l+b));
    if(area>perimeter){
        cout<<"area of rectangle is greater than perimeter";
    }
    else{
        cout<<"area of rectangle is not greater than perimeter";
    }

}