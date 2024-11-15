#ifndef __STUDENT_H_
#define __STUDENT_H_

#include "list.h"

template <typename T>
void CP::list<T>::block_swap(iterator a1, iterator a2, iterator b1, iterator b2) {
	// write your code here
	if(a1 == b2){std::swap(a1,b1); std::swap(a2,b2);}
	if(a2 == b1){
		node * temp = a2.ptr->prev;
		b1.ptr->prev = a1.ptr->prev;
		a1.ptr->prev->next = b1.ptr;

		a1.ptr->prev = b2.ptr->prev;
		b2.ptr->prev->next = a1.ptr;

		temp->next = b2.ptr;
		b2.ptr->prev = temp;

	}
	else{
		node *temp = a1.ptr->prev;
		a1.ptr->prev = b1.ptr->prev;
		b1.ptr->prev->next = a1.ptr;

		temp->next = b1.ptr;
		b1.ptr->prev = temp;

		node *endb = b2.ptr->prev;
		a2.ptr->prev->next = b2.ptr;
		b2.ptr->prev = a2.ptr->prev;

		endb->next = a2.ptr;
		a2.ptr->prev = endb;
	}
}

#endif