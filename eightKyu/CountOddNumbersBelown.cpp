/* 
07/08/19
Given a number n, return the number of positive odd numbers below n, EASY!

oddCount(7) //=> 3, i.e [1, 3, 5]
oddCount(15) //=> 7, i.e [1, 3, 5, 7, 9, 11, 13]


Expect large Inputs!

Thoughts on this kata ---
I tried using a for loop and incremented every occurence of an odd number... Totally forgot I
could just have divided by two. I felt so dumb lol.

*/

int odd_count(int n){
  return n/2;
}