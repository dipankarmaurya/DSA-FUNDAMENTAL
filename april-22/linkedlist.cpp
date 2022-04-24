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
};

int main(){

   linkedList* l2 = new linkedList();

   l2->addLast(2);
   l2->addLast(4);
   l2->addLast(1);
   l2->addLast(3);
   l2->addLast(8);
   l2->addLast(5);
   //question 1 search for element 3
   cout<<"found at "<<l2->searchIndex(3)<<" position\n";

   //question 2 adding 20 to last
    l2->addLast(20);
    l2->display();
   cout<<l2->listSize(); 
}