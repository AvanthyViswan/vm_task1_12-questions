#include <iostream>
using namespace std;
//q7 find if number is positive negative or zero
int main() 
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (num > 0)
        cout << "Positive" << endl;
    else if (num < 0)
        cout << "Negative" << endl;
    else
        cout << "Zero" << endl;
    return 0;
}

