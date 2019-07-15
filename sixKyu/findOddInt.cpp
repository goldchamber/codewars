/*
07/14/19
+++++DETAILS+++++

Given an array, find the int that appears an odd number of times.

There will always be only one integer that appears an odd number of times.

*/

#include <vector>

int findOdd(const std::vector<int>& numbers){
  for (int i : numbers){
    if (std::count(numbers.begin(), numbers.end(), i) % 2 != 0) return i;
  }
}