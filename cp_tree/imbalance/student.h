// Your code here
int getValueOfMostImbalanceNode(node *n,KeyT &max,int &b) {
    if(n == NULL) return 0;
    int lh = 0, rh = 0;
    if(n->left != NULL) lh = getValueOfMostImbalanceNode(n->left,max,b);
    if(n->right != NULL) rh = getValueOfMostImbalanceNode(n->right,max,b);
    int imbalance = std::abs(lh-rh);
    if(imbalance > b || (imbalance == b && mLess(n->data.first,max))){ b = imbalance; max = n->data.first;}
    return 1+std::max(lh,rh);
    
}

KeyT getValueOfMostImbalanceNode() {
    // Your code here
    auto ans = mRoot->data.first;
    int b = 0;
    getValueOfMostImbalanceNode(mRoot,ans,b);
    return ans;
    
}
