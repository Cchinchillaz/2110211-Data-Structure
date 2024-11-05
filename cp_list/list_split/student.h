void splitList(list<T>& list1, list<T>& list2) {
    // Add your code here
    if(mSize == 0) return;
    int n = mSize;
    int a = (n+1)/2;   
   
    node *it1 = mHeader;
    for(int i=0; i<a; ++i) it1 = it1->next;
    auto it2 = it1->next;

    list1.mHeader->prev->next = mHeader->next;
    mHeader->next->prev = list1.mHeader->prev;
    list1.mHeader->prev = it1;
    it1->next = list1.mHeader;
    list1.mSize += a;
    
    list2.mHeader->prev->next = it2;
    it2->prev = list2.mHeader->prev;
    list2.mHeader->prev = mHeader->prev;
    mHeader->prev->next = list2.mHeader;
    list2.mSize += (n-a);
    

    mHeader->prev = mHeader;
    mHeader->next = mHeader;
    mSize = 0;

}
