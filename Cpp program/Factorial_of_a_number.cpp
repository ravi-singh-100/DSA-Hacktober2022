#include <iostream>
using namespace std;
int factorial(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}
int main()
{
    int n;
    cout << "Enter a number for factorial :" << endl;
    cin >> n;
    cout << "The Factorial of " << n << " is " << factorial(n) << endl;

    return 0;
}