#include<bits/stdc++.h>
using namespace std;

int smallNum(int a[],int n){
    int s=INT_MAX;

    for(int i=0; i<n ; i++){
        if(a[i]<s)
        {
            s=a[i];
        }

    }
    return s;
}



int main(){

    int n=5;
   int a[5]={4 ,3 ,2 ,6,5};

    int small =smallNum(a,n);

    cout<<"smallest Number is: "<<small<<endl;

    return 0;
}