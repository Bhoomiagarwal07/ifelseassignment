#include<iostream>
using namespace std;
int main(){
    cout<<"enter the first side of a triangle:";
    int s1;
    cin>>s1;
    cout<<"enter the second side of a triangle:";
    int s2;
    cin>>s2;
    cout<<"enter the third side of a triangle:";
    int s3;
    cin>>s3;
    if((s1==s2) && (s2==s3)){
        cout<<"it is a equilateral triangle";
    }
    else
        if((s1==s2) || (s2==s3) || (s1==s3)){
            cout<<"it is a isosceles triangle";
        }
    
    else{
        cout<<"it is a scalene triangle";
    }


}