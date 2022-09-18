#include<iostream>
using namespace std;
struct node{
int data;
struct node *next;
};
struct node *top=NULL;
void push(int val)
{
struct node *newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=val;
newnode->next=top;
top=newnode;
}
void pop()
{
if(top==NULL)
{
cout<<"pop not possible"<<endl;
}
else{
top=top->next;
}
}
void display()
{
struct node *ptr;
if(top==NULL)
{
cout<<"empty"<<endl;
}
else{
ptr=top;
cout<<"elements are\n"<<endl;
while(ptr!=NULL)
{
cout<<ptr->data<<" ";
ptr=ptr->next;

}
}
}
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