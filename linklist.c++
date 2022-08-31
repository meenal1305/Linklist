// Linklist second program..

#include<bits/stdc++.h>
using namespace std;



class node{
    
    public:
    int data;
    node* next;
    
    node(int x)
    {
        data = x;
        next = NULL;
    }
    
    
};

int main() {
  
  
  int arr[5];
  
  for(int i = 0;i<5;i++)
  {
    arr[i] = i+10;
  }
   
    node* head;
    node* tail;
    bool first = true;
    
    
    for(int i = 0;i<5;i++)
    {
        node* temp = new node(i+10);
        
        if(first == true)
        {
            head = temp;
            tail = temp;
            first = false;
        }
        else
        {
            tail->next = temp;
            tail = temp;
        }
    }
    
    
}
