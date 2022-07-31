#include<bits/stdc++.h>
using namespace std;

struct Queue
{
    stack<int> s1,s2;

    void enqueue(int val)
    {
        s1.push(val);
    }

    int dequeue()
    {  int x;
        if(s1.empty()&&s2.empty())
        {
            cout<<"queue is empty"<<endl;
            exit(0);
        }

            if(s2.empty())
            {
                while(!s1.empty())
                {
                    s2.push(s1.top());
                    s1.pop();

                }}
                x=s2.top();
                s2.pop();
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
