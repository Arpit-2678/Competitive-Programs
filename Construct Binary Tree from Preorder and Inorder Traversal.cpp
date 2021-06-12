// LINK=https://leetcode.com/explore/challenge/card/june-leetcoding-challenge-2021/604/week-2-june-8th-june-14th/3772/


class Solution{
    public:
   Node* createTreeFromTrav(int *in,int *pre,int s,int e){
    static int i = 0;
    //Base Case
    if(s>e){
        return NULL;
    }
    //Rec Case
    Node *root = new Node(pre[i]);

    int index=-1;
    for(int j=s;j<=e;j++){
        if(in[j]==pre[i]){
            index = j;
            break;
        }
    }

    i++;
    root->left = createTreeFromTrav(in,pre,s,index-1);
    root->right = createTreeFromTrav(in,pre,index+1,e);
    return root;
}
    Node* buildTree(int in[],int pre[], int n)
    {
        Node*root = createTreeFromTrav(in,pre,0,n-1);
        return root;
        // Code here
    }
};
