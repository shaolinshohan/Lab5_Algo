#include<bits/stdc++.h>

using namespace std;

void swap(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
}

int main(){

    int a=11;
    int b=13;

    cout<<"a= "<<a<<endl;
    cout<<"b= "<<b<<endl;

    cout<<"---------------"<<endl;

    swap(a, b);

     cout<<"a= "<<a<<endl;
     cout<<"b= "<<b<<endl;


    return 0;
}