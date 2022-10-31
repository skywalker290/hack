#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;
    node(int x){
        data = x;
        next= NULL;
    }
};
class LL{
    public:
    node *head;
    node *tail;
    LL(){
        tail=head=NULL;
    }
    void insertatlast(int x){
        node *p= new node(x);
        if(head==NULL){
            head=tail=p;
        }
        else if(tail->next=p){
            tail=p;
        }
        }
    void digitll(int num){
        while(num){
            int x;
            x=num%10;
            node *temp=new node(x);
                if(head==NULL){
                    head=tail=temp;
                }
                else{
                    temp->next=head;
                    head=temp;
                }
                num=num/10;
    }
    }
      
   

    void display(){
        
        node *p;
        p=head;
        while(p){
            cout<<endl;
            cout<<p->data<<" ";
            p=p->next;
        }

        cout<<endl;  
    }
    
};





int main(){
    cout<<"============"<<endl;
        LL obj;
        int num;
        cout<<"enter number::";
        cin>>num;
        obj.digitll(num);
        obj.display();
        cout<<endl;
        
    cout<<"============";
    return 0;
    
}























