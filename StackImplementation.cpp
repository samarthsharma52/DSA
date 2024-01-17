#include<iostream>
#include<stack>
using namespace std;
class Stack{
    public:
        int *arr;
        int top;
        int size;
        Stack(int size)
        {
            this -> size = size;
            arr = new int [size];
            top = -1;
        }

    void push(int element)
    {
        if(size - top > 1)
        {
            top ++ ;
            arr[top] = element;
        }
        else 
        {
            cout << "Bhar gya me!" << endl;
        }
    }  

    void pop()
        {
            if(top >= 0)
            {
                top --;
            }
            else
            {
                cout << "Khali Hu!" << endl;
            }
            
        }

    int peek()
        {
            if(top>=0)
            {
                return arr[top];
            }
            else
            {
                cout << "Stack khali hai" << endl;
                return -1;
            }
        }
    
 bool isEmpty()
 {
    if(top == -1)
    {
        return true;
    }
    else 
    {
        return false;
    }
 }

 };
int main()
{
    Stack st(5);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    cout<< st.peek() << endl;
    return 0;
}