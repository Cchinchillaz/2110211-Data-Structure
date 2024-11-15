#include <stdexcept>
#include <assert.h>
#include <vector>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "list.h"
#include "student.h"

int main() {
  std::ios_base::sync_with_stdio(0);
  std::cin.tie(0);

  int check,r;
  std::cin >> check >> r;
  for (int i = 0;i < r;i++) {
    int n,v,a,b;
    std::cin >> n >> v >> a >> b;
    CP::list<int> l;
    for (int j = 0;j < n;j++) {
      int x;
      std::cin >> x;
      l.push_back(x);
    }
    auto ai = l.begin();
    for (int j = 0;j < a;j++,ai++);
    auto bi = ai;
    for (int j = a;j < b;j++,bi++);

    CP::list<int> output;
    output.push_back(99);

    l.set_check(check);
    output.set_check(check);

    l.extract(v,ai,bi,output);

    l.set_check(0);
    output.set_check(0);

    //show output
    l.print();
    output.print();
  }
}

