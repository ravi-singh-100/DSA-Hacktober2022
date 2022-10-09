#include<iostream>
using namespace std;
int main(){
    int a[] = {-1 -2 -3 -4};
    int size = sizeof(a)/sizeof(a[0]);
    int currSum = 0;
    int maxSum = 0;
    for(int i=0;i<size;i++){
        currSum=currSum+a[i];
        if(currSum>maxSum){
            maxSum=currSum;
        }
        if(currSum<0){
            currSum=0;
        }
    }
    cout<<maxSum;
    return 0;
}
