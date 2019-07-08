/*
07/07/19
+++++DETAILS+++++
Return the number (count) of vowels in the given string.

We will consider a, e, i, o, and u as vowels for this Kata.

The input string will only consist of lower case letters and/or spaces.

*/


#include <string>

using namespace std;

int getCount(const string& inputStr){
  int num_vowels = 0;
  string vowels {"aeiou"};
  for (int i = 0; i < inputStr.size(); i++){
    for (int n = 0; n < vowels.size(); n++){
      if (vowels[n] == inputStr[i]){
        num_vowels++;
      }
    }
  }
  return num_vowels;
}