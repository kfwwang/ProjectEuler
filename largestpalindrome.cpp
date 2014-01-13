#include <iostream>
#include <string>
#include <iomanip>
#include <locale>
#include <sstream>

using namespace std;

string reversestring(string);
string converttostr(unsigned long int);
int main()
{
    unsigned long int num;

    for(unsigned long int i = 999; i >=850; i--)
    {
        for(unsigned long int j = 999; j >=850; j--)
        {
            if(reversestring(converttostr(i*j)) == converttostr(i*j))
            {cout << i*j << endl;
            cout << i << " " << j << endl;
            break;
            }
        }
    }


    return 0;
}

string reversestring(string input)
{
    input = string (input.rbegin(),input.rend());
    return input;
}

string converttostr(unsigned long int Number)
{

    string Result;          // string which will contain the result
    ostringstream convert;   // stream used for the conversion
    convert << Number;      // insert the textual representation of 'Number' in the characters in the stream
    Result = convert.str(); // set 'Result' to the contents of the stream
    return Result;
}

