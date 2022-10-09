#include <iostream>
#include <stack>
using namespace std;
void deletemid(stack<int> &str,int count,int size){
    if(count==size/2){
        str.pop();
        return;
    }
    int num=str.top();
    str.pop();
    deletemid(str,count+1,size);
    str.push(num);

}
int main(){
    stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);
    deletemid(st,0,5);
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    st.pop();


    return 0;


}
