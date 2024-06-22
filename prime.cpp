#include<bits/stdc++.h>

using namespace std;

bool isPrime(int n) {
    
    bool Flag = true;
    
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0) 
        {
            Flag = false;
            break;
        }

    }

    return Flag;

}


int main() {

    int a;
    cout << "Enter number: ";
    cin >> a;

  if (isPrime(a)) {
        cout << a << " prime number." << endl;
    } else {
        cout << a<< " not a prime number." << endl;
    }

    return 0;
}
