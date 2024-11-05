void shift(int k) {
	// TODO: Add your code here
	int n = mSize;
	if(k==0 || n <= 1) return;
	if(k>0) k %= n;
	if(k<0){k =(n+(k%n))%n;}
	auto it = mHeader->next;
	for(int i=0; i<k; ++i) it = it->next;	
	mHeader->next->prev = mHeader->prev;
	mHeader->prev->next = mHeader->next;
	mHeader->prev = it->prev;
	it->prev->next = mHeader;
	it->prev = mHeader;
	mHeader->next = it;
}

