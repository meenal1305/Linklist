// taking user input
class node{
    public:
    int data;
    node* pre;
    node* next;
 node(int x)
    {
    data=x;
    next=NULL;
     pre=NULL;
    }
};
int main() {
    node* head;
    node* tail;
    bool first=true;
    
    int n; cin>>n;
    while(n--)
    {
        int val; cin>>val;
        
        node* temp=new node(val);
            
        if(first==true)
        {
            head=temp;
            tail=temp;
            first=false;
        }
        else
        {
            tail->next=temp;
            temp->pre=tail;
                tail=temp;
        }
        
    }
    tail->next=head;
    head->pre=tail;
    while(tail!=NULL)
    {
        cout<<tail->data<<endl;
        tail=tail->pre;
    }
}
