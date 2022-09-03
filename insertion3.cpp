//insertion at middle
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
    int c = n/2;
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

    int b=1;
    node* point=head;
    node* mid=head;
     
   node* temp2 =new node(13);
    while(mid!=NULL)   
    {
        if(b==c)
        {
            temp2->next=mid->next;
            mid->next->pre=temp2;
            mid->next=temp2;
             temp2->pre=mid;
            break;
        }
        else
        {
            mid=mid->next;
            b++;
        }
    }
    while(point!=NULL)
    {
        cout<<point->data<<endl;
        point=point->next;
    }
}
