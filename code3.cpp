 #include <iostream>
 using namespace std;
 class node{
    public:
    int data;
    node *next;
    node *prev;
    node(int x){
        data=x;
        prev=NULL;
        next=NULL;
    }
 };
 class dll{
    public:
    node *head;
    node *tail;
    
    dll(){
        tail=head=NULL;
    }
    void insert(int n){
        node *temp= new node(n);
    if(head==NULL){
        head=tail=temp;
    }
    else{
        tail->next=temp;
        temp->prev=tail;
        tail=temp;
        temp->next=NULL;
    }
 }
 void display(){
    node *p=head;
    while(p){
        cout<<p->data;
        p=p->next;
    }

 }
 };
 int main(){
     
     dll obj;
     obj.insert(1);
     obj.insert(2);
     obj.insert(3);
     obj.display();
     return 0;
 }


