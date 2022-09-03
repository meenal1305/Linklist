//insertion at last
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
    tail->next=temp2;
    temp2->pre=tail;
    temp2->next=NULL;
    tail= temp2;
    while(head!=NULL)
    {
        cout<<head->data<<endl;
        head=head->next;
    }
}
