#include <iostream>

using namespace std;

int main()
{
    unsigned long int sumsquare = 0, squaresum = 0, diff = 0;

    for(int i = 1; i < 101; i++)
        sumsquare += i*i;
    for(int i = 1; i < 101; i++)
        squaresum += i;
    squaresum = squaresum*squaresum;
    diff = squaresum - sumsquare;

    cout << diff << endl;
    return 0;
}
