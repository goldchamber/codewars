/*
07/13/19
+++++DETAILS+++++
This time no story, no theory. The examples below show you how to write function accum:

Examples:

accum("abcd") -> "A-Bb-Ccc-Dddd"
accum("RqaEzty") -> "R-Qq-Aaa-Eeee-Zzzzz-Tttttt-Yyyyyyy"
accum("cwAt") -> "C-Ww-Aaa-Tttt"
The parameter of accum is a string which includes only letters from a..z and A..Z.

*/


class Accumul
{
public:
    static std::string accum(const std::string &s){
    
      std::string mumble{};
      for (int i = 0; i < s.size(); i++){
        mumble += '-' + std::string(i + 1, s[i]);
      } 
      
      for (int i = 0; i < mumble.size(); i++) {
        if (mumble[i] == '-') {
          mumble[i + 1] = toupper(mumble[i + 1]);
        } else mumble[i + 1] = tolower(mumble[i + 1]);
      }
      
      mumble.erase(mumble.begin());
      return mumble;
          
    }
};