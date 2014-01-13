#include <iostream>
#include <cmath>
using namespace std;
bool isPrime(unsigned long int num)
{
    bool prime = true;
    if(num%2==0)
        prime = false;
    for(unsigned long int i = 3; i < sqrt(num)+1; i+=2)
    {
        if(num%i == 0)
            prime = false;
    }


    return prime;
}

int main()
{
    int count = 1;
    for(unsigned long int i = 2; count <= 10001; i++)
    {
        if(isPrime(i))
        {
            count++;
            cout << count << "\t" << i  << endl;

        }
    }

    return 0;
}

