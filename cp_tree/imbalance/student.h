// Your code here
int imbalance(node* n,KeyT &k,int &b){
    if(n == NULL) return 0;
    int lh = imbalance(n->left,k,b);
    int rh = imbalance(n->right,k,b);
    int i = std::abs(lh-rh);
    if(i>b || i==b && mLess(n->data.first,k) ){k = n->data.first; b = i;}
    return 1+std::max(lh,rh);
}

KeyT getValueOfMostImbalanceNode() {
    // Your code here
   KeyT ans = mRoot->data.first;
   int b = 0;
   imbalance(mRoot,ans,b);
   return ans;
    
}
