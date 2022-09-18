#include<iostream>
using namespace std;
void display();
void addbegin();
void addend();
int length();
void addafter();
void deletatbeg();
void deleteatend();
void deleteafter();
void search();
struct Node
{
int data;
struct Node *next;
};
struct Node *head=NULL;
int main()
{
while(1)
{
int ch;
cout<<"\nEnter 1 For Adding at begin"<<endl;
cout<<"Enter 2 For Adding at end"<<endl;
cout<<"Enter 3 For length"<<endl;
cout<<"Enter 4 For Adding at any position"<<endl;
cout<<"Enter 5 For delete from front"<<endl;
cout<<"Enter 6 to display"<<endl;
cout<<"Enter 7 to delete from end"<<endl;
cout<<"Enter 8 to delete from any position"<<endl;
cout<<"Enter 9 to search element"<<endl;

cin>>ch;
switch(ch)
{
case 1:
addbegin();
break;
case 2:
addend();
break;
case 3:
cout<<length()+1<<endl;
break;

case 4:
addafter();
break;
case 5:
deletatbeg();
break;
case 6:
display();
break;
case 7:
deleteatend();
break;
case 8:
deleteafter();
break;
case 9:
search();
break;
default : cout<<"wrong choise"<<endl;
}
}
return 0;
}
void display()
{
struct Node* ptr;
ptr=head;
if(head==NULL)
{
cout<<"list empty"<<endl;
}
ptr=head;
while(ptr!=NULL)
{
cout<<ptr->data<<" ";
ptr=ptr->next;
}
}
void addbegin()
{
struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
cout<<"enter data"<<endl;
cin>>new_node->data;
new_node->next=NULL;
if(head==NULL)
{
head=new_node;
}
else{
new_node->next=head;

head=new_node;
}
}
void addend()
{
struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
cout<<"enter data"<<endl;
cin>>new_node->data;
new_node->next=NULL;
if(head==NULL)
{
head=new_node;
}
else{
struct Node *ptr=head;
while(ptr->next!=NULL)
{
ptr=ptr->next;
}
ptr->next=new_node;
}
}
int length()
{
struct Node *temp=head;
int c=0;
while(temp->next!=NULL)
{
temp=temp->next;
c=c+1;
}
return c;
}
void addafter()
{
int n,i;
cout<<"enter position"<<endl;
cin>>n;
struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
cout<<"enter data"<<endl;
cin>>new_node->data;
new_node->next=NULL;
if(n == 1)
{
new_node->next = head;
head = new_node;
return;
}

struct Node *temp=head;
for( i=0;i<n-2;i++)
{
temp=temp->next;
}
new_node->next=temp->next;
temp->next=new_node;

}
void deletatbeg()
{
struct Node *temp;
if(head==NULL)
{
cout<<"list is empty"<<endl;
}
else{
temp=head;
head=head->next;
}
free(temp);
}
void deleteatend()
{
struct Node *temp=head,*prev;
while(temp->next!=NULL)
{
prev=temp;
temp=temp->next;
}
if(temp==head)
{
head=NULL;
}
else
{
prev->next=NULL;
}
free(temp);
}
void deleteafter()
{
int loc;
cout<<"enter location"<<endl;
cin>>loc;
if(loc>length())
{

cout<<"invalid location"<<endl;
}
else
{ cout<<"enter location"<<endl; struct
Node *temp=head,*deletenode; int i;
while(i<loc-2)
{
temp=temp->next;
i++;
}
deletenode=temp->next;
temp->next=deletenode->next;
deletenode->next=NULL;
free(deletenode);

}
}
void search()
{
struct Node *temp=head;
int n;
cout<<"enter data"<<endl;
cin>>n;
while(temp!=NULL)
{
if(temp->data==n)
{
cout<<"element found "<<endl;
return;
}
temp=temp->next;
}
cout<<"not found"<<endl;

}