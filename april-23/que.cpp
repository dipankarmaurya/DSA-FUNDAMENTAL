#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(){
    this->next=nullptr;
    }
};
class linkedList{
    public:
    Node* head;

    void addFirst(int data){
         Node *nn = new Node();
         nn->val=data;
         nn->next=head;
         head=nn;
    }

    void addLast(int data){
         Node *nn = new Node();
         nn->val=data;
         if(head==nullptr){
             head=nn;
         }
         else{
             Node* temp=head;
             while(temp->next){
                 temp=temp->next;
             }
             temp->next=nn;
         }
    }
    void display(){

        if(!head){
            return;
        }else{
            Node*temp=head;
            while(temp){
                cout<<temp->val<<" ";
                temp=temp->next;
            }
        }
        cout<<endl;
    }
    int searchIndex(int data){
        Node* temp=head;
        int count=0;
        while(temp){
            if(temp->val==data)
            return count;
           count++; 
           temp=temp->next;
        }
        return -1;
    }

    int listSize(){
        Node*temp=head;
        if(!temp)
        return 0;
        int len=0;
        while(temp){
            len++;
            temp=temp->next;
        }

        return len;
    }

    void deleteFirst(){
        if(!head){
            return;
        }
        else head=head->next;
    }

    void deleteLast(){
        Node* temp=head;
        if(!temp){
            return;
        }
        if(!temp->next){
            temp=nullptr;
            return;
        }

        while(temp->next and temp->next->next){
            temp=temp->next;
        }
        temp->next=nullptr;
    }

    void deleteGreater40(){
        

        while(head&&head->val>40){
            head=head->next;
        }
        Node* nn=head;
        while(nn&&nn->next){
            if(nn->next->val>40){
                nn->next=nn->next->next;
            }
            else{
                nn=nn->next;
            }
        }

    }
    int printAt5(){
        Node* temp=head;
        for(int i=1;i<5;i++){
           temp=temp->next;
        }
        return temp->val;
    }
};

int main(){

   linkedList* l1 = new linkedList();
        
        for(int i=0;i<10;i++){
            int x;
            cin>>x;
            l1->addLast(x);
        }
        // l1->addLast(20);
        // l1->addLast(40);
        // l1->addLast(10);
        // l1->addLast(30);
        // l1->addLast(80);
        // l1->addLast(50);
        // l1->addLast(1);
        // l1->addLast(3); 
        // l1->addLast(5);
        // l1->addLast(6);
        // l1->display();
// q1 delete node greater that 40
       l1->deleteGreater40();
       l1->display();

//q2 print node at 5
    cout<<l1->printAt5();
  
}