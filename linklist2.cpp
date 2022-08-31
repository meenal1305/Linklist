// taking user input
class node{
    public:
    int data;
    node* next;
 node(int x)
    {
    data=x;
    next=NULL;
    }
};
int main() {
    node* head;
    node* tail;
    bool first=true;
    
    int n=2;
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
                tail=temp;
            
        }
    }
    while(head!=0)
    {
        cout<<head->data<<endl;
    }
}
