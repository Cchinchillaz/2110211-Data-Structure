#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T1,typename T2>
bool CP::pair<T1,T2>::operator>=(const pair<T1,T2>& other) const {
  //write your code here
  if((first == other.first)&&(second >= other.second)|| first > other.first) return true;
  return false;
}

#endif
