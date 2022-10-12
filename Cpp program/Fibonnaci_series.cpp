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

void printfib(int n){
    int first = 0, second = 1, third;

    cout << first << " " << second;
    for (int i = 2; i < n; i++){
        third = first + second;
        cout << " " << third;
        first = second;
        second = third;
    }
}

int main()
{
    int n;
    cout << "Enter the number :" << endl;
    cin >> n;
    cout << "fibonnaci series of " << n << " is " << fib(n);
    // printfib(n);
    
    return 0;
}
