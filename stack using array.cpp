#include<iostream>
using namespace std;
int c,top=-1,s[100],n,i,x;
void push()
{   if(top==n-1)
{
    cout<<"stack overflow"<<endl;
    exit(0);
}
    else
    //int x;
    cout<<"enter the value"<<endl;
    cin>>x;
    top++;
    s[top]=x;
    cout<<"pushed value is"<<s[top]<<endl;
}

void pop()
{   if(top==-1)
    {
        cout<<"stack underflow"<<endl;
        exit(0);
    }
    else
    cout<<"the popped element is"<<s[top]<<endl;
    top--;
}
void display()
{  if(top>-1)
   {

   for(i=top;i>=0;i--)
    {
        cout<<s[i]<<endl;
    }}
    else
        cout<<"stack is empty"<<endl;
}

void exit()
{
    cout<<"exit"<<endl;
}

int main()
{

    cout<<"enter the size of the array"<<endl;
    cin>>n;

    do
    {   cout<<"1.push"<<endl;
        cout<<"2.pop"<<endl;
        cout<<"3.display"<<endl;
        cout<<"4.exit"<<endl;
        printf("enter your choice");
        cin>>c;

        switch(c)
        {

            case 1: {push(); break;}
            case 2: {pop(); break;}
            case 3: {display(); break;}
            case 4: { cout<<"EXIT"<<endl;
            break;}
            default : { cout<<"wrong choice"<<endl;}
        }

    } while(c!=4);
    return 0;
}


