// deleting from mid
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
    node*mid=head;
    while(mid!=NULL)
    {
        if(c==b)
        {
            mid->next=mid->next->next;
        break;
        }
      
        else{
            mid=mid->next;
            c++;
        }
    }
    node*head2=head;
    while(head2!=NULL)
    {
        cout<<head2->data<<endl;
        head2=head2->next;
    }
}
    
