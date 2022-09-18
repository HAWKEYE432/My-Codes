#include<iostream>
using namespace std;
void push(int val);
void pop();
void display();

int stack[100],n=100,top=-1;
int main()
{
int ch, val;

while(1)
{
cout<<"1.Push"<<endl<<"2.Pop"<<endl<<"3.Display"<<endl<<"4>exit"<<endl;
cout<<"Enter choice: "<<endl;
cin>>ch;
switch(ch)
{
case 1:
{
cout<<"Enter value to be pushed:"<<endl;
cin>>val;
push(val);
break;
}
case 2:
{
pop();
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
cout<<"Invalid Choice"<<endl;
}
}
}
void push(int val)
{
if(top==n-1)
{
cout<<"stack overflow"<<endl;
}
else{
top++;
stack[top]=val;
}
}
void pop()
{
if(top==-1)
{
cout<<"stack empty"<<endl;
}
else{
top--;
}
}
void display()
{
if(top==-1)
{
cout<<"no element present"<<endl;
}
else{
cout<<"The elements are"<<endl;
for(int i=top;i>=0;i--)
{
cout<<stack[i]<<endl;

}
}
}