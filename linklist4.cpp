// deleting from the last
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
                tail=temp;    
        }
    }
    
    node* point = head;
    while(point!=NULL)
    {
        if(point->next==tail)
        point->next=NULL;
         point=point->next;
        
    }
    
    node* temp = head;
    while(temp!=0)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}
