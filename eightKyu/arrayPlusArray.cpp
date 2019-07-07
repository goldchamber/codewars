/*
07/07/19
+++++DETAILS+++++
I'm new to coding and now I want to get the sum of two arrays...actually the sum of all their 
elements. I'll appreciate for your help.

P.S. Each array includes only integer numbers. Output is a number too.
+++++

I realize there is a function called 'accumulate'. 

*/

#include <vector>

int arrayPlusArray(std::vector<int> a, std::vector<int> b) {
  int sum{};
  for (auto m : a){
    sum += m;
  }
  for (auto m : b){
    sum += m;
  }
  return sum;
}