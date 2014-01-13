#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(unsigned long long int);

int main()
{
    unsigned long long int num = 600851475143;

    for(unsigned long long int i = 3; i < sqrt(num); i+=2)
        if(isPrime(i) && num%i==0)
            cout << i << endl;
    return 0;
}
bool isPrime(unsigned long long int num)
{
    bool prime = true;
    if(num%2==0)
        prime = false;
    for(unsigned long long int i = 3; i < sqrt(num)+1; i+=2)
    {
        if(num%i == 0)
            prime = false;
    }


    return prime;
}
