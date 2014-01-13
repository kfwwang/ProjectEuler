#include <iostream>

using namespace std;

bool divisible(unsigned long int);
int main()
{
    for(unsigned long int i = 2520;i<1000000000;i+=2)
    {
        //cout << i << endl;
        if(divisible(i))
            {cout << i << endl;break;}
    }

    return 0;
}

bool divisible(unsigned long int num)
{
    if(num%20 != 0)
        return false;
    if(num%19 != 0)
        return false;
    if(num%18 != 0)
        return false;
    if(num%17 != 0)
        return false;
    if(num%16 != 0)
        return false;
    if(num%15 != 0)
        return false;
    if(num%14 != 0)
        return false;
    if(num%13 != 0)
        return false;
    if(num%12 != 0)
        return false;
    if(num%11 != 0)
        return false;
    if(num%7 != 0)
        return false;
return true;
}
