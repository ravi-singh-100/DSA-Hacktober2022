#include <iostream>
using namespace std;
int fib(int n)
{
    if (n <= 1)
    {
        return n;
    }
    else
    {
        return fib(n - 2) + fib(n - 1);
    }
}
int main()
{
    int n;
    cout << "Enter the number :" << endl;
    cin >> n;
    cout << "fibonnaci series of " << n << " is " << fib(n);

    return 0;
}