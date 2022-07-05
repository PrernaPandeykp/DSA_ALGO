#include <iostream>
#include <stdlib.h>

using namespace std;
#define n 100

class stack{
    int *arr;
    int top;

    public:
    stack(){
        arr= new int[n];
        top=-1;
    }
    void push(int x){
        if (top==n-1){
        cout<<"overflow";
        return;
        }
        top++;
        arr[top]=x;

    }
    bool empty(){
        return top==-1;
    }


    void pop(){
        if(top==-1){
            cout<<"empty";
            return;
        }
        top--;
    }
    int Top(){
        return arr[top];
    }

    
};
int main(){
    stack st;
    st.push(1);
    st.push(6);
    st.push(5);
    while(!st.empty())
        {
            int w = st.Top();
            cout << w;
            st.pop();
        }
    
    
}