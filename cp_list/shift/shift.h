void shift(int k) {
	// TODO: Add your code here
	if(k==0 || mSize <= 1) return;
	if(k>0) k %= mSize;
	if(k<0){k =( mSize+(k%mSize))%mSize;}
	auto it = mHeader->next;
	for(int i=0; i<k; ++i) it = it->next;	
	mHeader->next->prev = mHeader->prev;
	mHeader->prev->next = mHeader->next;
	mHeader->prev = it->prev;
	it->prev->next = mHeader;
	it->prev = mHeader;
	mHeader->next = it;
}

