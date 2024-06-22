#include<bits/stdc++.h>
using namespace std;

int LinearSearch(int a[], int n, int b){

    for(int i=0; i<n ; i++){
        if(b==a[i])
        {
           return i;
        }
    }
     return -1;
}



int main(){

    int n=5;
    int a[n]={5,67,3,5,22};

    int num;
    cout<<"enter a number for searching: ";
    cin>>num;

    int ind=LinearSearch(a,n,num);

    

    if(ind>-1)
    {
        cout<<"Number found in index "<<ind<<endl;
    }else
    {
        cout<<"Not found"<<endl;
    }

    return 0;
}