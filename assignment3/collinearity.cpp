#include<iostream>
using namespace std;
 int main(){
    int x1 , x2 , x3 , y1 , y2 , y3 ;
    cout<<"enter coordinates of first point"<<endl;
    cin>>x1>>y1;
    cout<<"enter coordinates of second point"<<endl;
    cin>>x2>>y2;
    cout<<"enter coordinates of third point"<<endl;
    cin>>x3>>y3;
    if((y2-y1)*(x3-x2) == (y3-y2)*(x2-x1)){
        cout<<"the given points are collinear"<<endl;
    }
    else{
        cout<<"the given points are not collinear"<<endl;
    }

 }