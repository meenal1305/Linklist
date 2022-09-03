//deletion from mid
class node{
    public:
    int data;
    node* next;
    node* pre;
    
    node(int x)
    {
        data=x;
        next=NULL;
        pre=NULL;
    }
};
int main() {
    node*head;
    node* tail;
    bool first = true;
    int n; cin>>n;
    int b= n;
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
    b=b/2;
    int c=1;
    node* head2=head;
    node* mid=head;
    
    while(mid!=NULL)
    {
        if(c==b)
        {
             mid->next=mid->next->next;
            mid->next->next->pre=mid;
            
        break;
        }
      
        else{
            mid=mid->next;
            c++;
        }
    }
    while(head2!=NULL)
    {
        cout<<head2->data<<endl;
        head2=head2->next;
    }
}
