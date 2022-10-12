#include<iostream>
using namespace std;

void binaryToDecimal(int n){
    int ans = 0;
    int mul = 1;
    while(n > 0){
        int rem = n % 10;
        ans += mul*rem;
        mul *= 2;
        n /= 10;
    }
    cout<<ans<<endl;


}

int main(){
    int n;
    cin>>n;
    binaryToDecimal(n);
    return 0;
}