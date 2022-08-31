//implementation
class node{
    public:
    int data;
    node* next;
};

int main() {
    node*head;
    node*tail;
    
    node* data1 = new node();
    data1->data = 1;
    data1->next = NULL;
    head=data1;
        
    node* data2 = new node();
    data2->data = 5;
    data1->next = NULL;
    data1->next = data2;
    
    node* data3 = new node();
    data3->data = 7;
    data3->next = NULL;
    data2->next = data3;
        
    node* data4=new node();
    data4->data=10;
    data4->next=NULL;
    data3->next = data4;
    
     node* data5=new node();
    data5->data=12;
    data5->next=NULL;
    data4->next = data5;
    tail=data5;
while(head!=NULL)
{
    cout<<head->data<<endl; //(*head)data can be used
    head= head->next;
}
}
