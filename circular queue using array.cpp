#include<iostream>
using namespace std;
int rear=-1,front=-1,x,q[100],n,i,c;

int isempty()
{
    if(front==-1&&rear==-1)
    {
        return true;
    }
    else
       {
           return false;
       }

}

int isfull()
{
    if((rear+1)%n==front)
    {
        return true ;
    }
    else
    {
        return false;
    }
}

void e()
{

    if(isfull())
    {
        cout<<"queue overflow"<<endl;

        return;}
    else
    {  cout<<"enter the value"<<endl;
       cin>>x;
        if(isempty())
    {
        front=0;rear=0;

    }
    else
    {
        rear=(rear+1)%n;
    }
    q[rear]=x;
    cout<<"inserted value is"<<q[rear]<<endl;}
}

void d()
{
    if(isempty())
    {
        cout<<"queue underflow"<<endl;

        return;}

        else if(front==rear)
        {
            x=q[rear];
            front=-1;
            rear=-1;
        }
        else
        {
            x=q[front];
            front=(front+1)%n;
        }
        cout<<"the dequeued element is"<<x<<endl;

}
void display()
{
    if(front==-1)
    {
        cout<<"queue is empty"<<endl;
    }
    else
    {
        for(i=front;i<=rear;i++)
        {
            cout<<q[i]<<endl;
        }
    }
}
int main()
{

    cout<<"enter the size of the array"<<endl;
    cin>>n;
        cout<<"1.enqueue"<<endl;
        cout<<"2.dequeue"<<endl;
        cout<<"3.display"<<endl;
        cout<<"4.exit"<<endl;

    do
    {
        printf("enter your choice");
        cin>>c;

        switch(c)
        {

            case 1: {e(); break;}
            case 2: {d(); break;}
            case 3: {display(); break;}
            case 4: { cout<<"EXIT"<<endl;
            break;}
            default : { cout<<"wrong choice"<<endl;}
        }

    } while(c!=4);
    return 0;
}
