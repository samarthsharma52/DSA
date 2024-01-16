#include<iostream>
#include<stack>
using namespace std;
class Stack{
  public:
    int *arr;
    int top1;
    int top2;
    int size;
    Stack(int s)
    {
        this -> size = s;
        top1 = -1;
        top2 = s;
        arr = new int[s];
    }   
    void push1(int element)
    {
        if(top2-top1 > 1)
        {
            top1++;
            arr[top1] = element;
        }
        else
        {
            cout << "full fill push1" << endl;
        }
    }
    void push2(element)
    {
        if (top2 - top1 >1)
        {
            top2 ++;
            arr[top2] = element;
        }
        else
        {
            cout << " full fill push2" << endl;
        }
    }
    void pop1()
    {
        if(top1>=1)
        {
            int ans = arr[top1];
            top1--;
            return ans;
        }
        else{
            return -1;
        }
    }
    void pop2()
    {
        if(top2>=1)
        {
            int ans = arr[top2];
            top2++;
            return ans;
        }
        else{
            return -1;
        }
    }
    
};
int main()
{
    Stack st(10);
    cout << 
    return 0;
}