#include<iostream>
using  namespace  std;

struct  Node  {
    int  data;
    Node  *next;
};

class List{

protected:
    Node* node;
public:
    List()
    {
        node=new Node;
        node->data=0;
        node->next=NULL;
    }
    virtual void Insert(int num)
    {
        Node *temp=new Node;
        temp->data=num;
        temp->next=node->next;
        node->next=temp;
    }
    void Delete(int num)
    {
        for(Node *n=node;n!=0;)
        {
            if(n->next==NULL)return;
            if((n->next)->data==num)
            {
                Node *temp=n->next;
                n->next=(n->next)->next;
                delete temp;
                continue;
            }
            n=n->next;
        }
    }
    void Print()
    {
        if (node->next==0)
            return;
        for(Node *n=node->next;n!=0;n=n->next)
            cout<<n->data<<"  ";
        cout<<endl;
    }
};

class Set :public  List  {
public:
    Set(){}
    virtual void Insert(int num)
    {
        for(Node *n=node->next;n!=0;n=n->next)
        {
            if(n->data==num)return;
        }
        Node *temp=new Node;
        temp->data=num;
        temp->next=node->next;
        node->next=temp;
    }
};

int  main()
{
    List  *p,list1;
    Set  set1;
    p=&list1;
    char  opt;  
    while  (cin  >>  opt){
        if  (opt  ==  '?')  break;
        int  num;
        cin  >>  num;
        if  (opt  ==  'i'){
            p->Insert(num);
        }
        else  if  (opt  ==  'd'){
            p->Delete(num);
        }
    }
    p->Print();
    p=&set1;
    while  (cin  >>  opt){
        if  (opt  ==  '?')  break;
        int  num;
        cin  >>  num;
        if  (opt  ==  'i'){
            p->Insert(num);
        }
        else  if  (opt  ==  'd'){
            p->Delete(num);
        }
    }
    p->Print();
    return  0;
}