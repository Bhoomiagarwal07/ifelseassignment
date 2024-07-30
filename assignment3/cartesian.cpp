#include<iostream>
using namespace std;
int main(){
    cout<<"enter the x axis value of a point :";
    int x;
    cin>>x;
    cout<<"enter the y axis value of a point :";
    int y;
    cin>>y;
    if(x==0 && y!=0){
        cout<<"point is lie on y axis";
    }
    else if(y==0 && x!=0){
        cout<<"point is lie on x axis";
    }
    else{
        cout<<"point is lie on origin";
}

}