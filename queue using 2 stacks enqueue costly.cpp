#include<bits/stdc++.h>
using namespace std;

struct Queue
{
    stack<int> s1,s2;

    void enqueue(int val)
    {
        while(!s1.empty())
        {
            s2.push(s1.top());
            s1.pop();
        }
        s1.push(val);
        while(!s2.empty())
        {
            s1.push(s2.top());
            s2.pop();

        }
    }
int dequeue()
{
    if(s1.empty())
    {
        cout<<"queue is empty"<<endl;
    }
    int x=s1.top();
    s1.pop();
    return x;
}
};
int main()
{
Queue q;
q.enqueue(3);
q.enqueue(4);
q.enqueue(5);
cout<<q.dequeue()<<endl;
cout<<q.dequeue()<<endl;
cout<<q.dequeue()<<endl;

return 0;
}
