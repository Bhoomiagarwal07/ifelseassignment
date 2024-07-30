#include<iostream>
using namespace std;
int main(){
    cout<<"enter the radius of a circle:";
    int radius;
    cin>>radius;
    int area = (3.14*radius*radius);
    int circum = (2*3.14*radius);
    if(area>circum){
        cout<<"area of the circle is greater than than circumference";
    }
    else{cout<<"area of the circle is not greater ";}
}