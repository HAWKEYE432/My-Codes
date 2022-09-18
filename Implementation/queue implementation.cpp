#include<iostream>
using namespace std;
void enqueue(int ele);
void dequeue();
void display();
int arr[100],front =-1,rear=-1;
int n=100;
int main()
{
 int ch,val;
 while(1)
   {
     
     cout<<"1.Push"<<endl<<"2.Pop"<<endl<<"3.Display"<<endl<<"4>exit"<<endl;
       cout<<"Enter choice: "<<endl;
       cin>>ch;
       switch (ch)
       {
       case 1:
          {
         cout<<"enter the element"<<endl;
          cin>>val;
          enqueue(val);
           break;
          }
         
       case 2:
       {
    cout<<"element deleted"<<front<<endl;
       dequeue();
       break;
       }
       
       case 3:
       {
           display();
           break;
       }
       case 4:
       {
           exit(1);
           
       }
       default:
       cout<<"incorrect choice"<<endl;
 
           
       }
    }
 
}
 
 
void enqueue(int ele)
{
  if(rear==n-1)
  {
      cout<<"queue is full"<<endl;
  }
  else{
      if(front==-1)
 
      front=0;
      rear=rear+1;
      arr[rear]=ele;
  }
}
void dequeue()
{
    if(front==rear)
    {
        cout<<"no element left"<<endl;
    }
    else{
        cout<<"deleted element"<<arr[front]<<endl;
        front++;
    }
}
void display()
{
    if(front==-1)
    {
        cout<<"no element present"<<endl;
    }
    else{
        for(int i=front;i<=rear;i++)
        {
            cout<<arr[i]<<endl;
        }
    }
}

