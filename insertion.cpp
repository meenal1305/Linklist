//insertion at first

class node{
    public:
    int data;
    node* next;
    node* pre;
    node (int x)
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
        else{
            tail->next=temp;
            temp->pre=tail;
                tail=temp;
        }
    }
    node* temp2=new node(13);
    temp2->next=head;
    head->pre=temp2;
    head=temp2;
    while(head!=NULL)
    {
        cout<<head->data<<endl;
        head=head->next;
    }
}
