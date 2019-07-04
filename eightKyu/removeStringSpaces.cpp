/* 
07/03/19
====Details====
Simple, remove the spaces from the string, then return the resultant string.

*/

std::string no_space(std::string x)
{
    x.erase(std::remove(x.begin(), x.end(), ' '), x.end());
    return x;
}

/* 
Erase-move idiom
*/