void splitList(list<T>& list1, list<T>& list2) {
    // Add your code here
    if(mSize == 0) return;
    int mid =(mSize+1)/2;
    
    auto it = begin();
    for(int i=0; i<mid-1; ++i) ++it;
    // ต่อท้าย
    mHeader->next->prev = list1.mHeader->prev; 
    list1.mHeader->prev->next = mHeader->next; 
    list1.mSize += mid;

    it.ptr->next->prev = list2.mHeader->prev;
    list2.mHeader->prev->next = it.ptr->next;
    list2.mSize += mSize-mid;
    
    // เชื่อม mHeader
    list1.mHeader->prev = it.ptr;
    it.ptr->next = list1.mHeader;

    list2.mHeader->prev = mHeader->prev;
    mHeader->prev->next = list2.mHeader;
    
    // *this is empty
    mSize = 0;
    mHeader->prev = mHeader;
    mHeader->next = mHeader;

}
