class Solution {
public:
    string reverseOnlyLetters(string s)
{ 
    int l=0;
    int h=s.size()-1;
    while(l<h)
{
    if(isalpha(s[l]) && isalpha(s[h]))
    {
        swap(s[l],s[h]);
        h--;
        l++;
    }
    else if(!isalpha(s[l]))
    {
        l++;
    }
    else
    {
        // h -> non-alpha;
        h--;
    }
 }
 return s;
}
};
// in c++ we can use isalpha(ch) to get alphabet OR
// if(ch>=97 && ch <= 122)||(ch>=65 && ch<=90){
      //a to z                // A to Z
    //it is alphabet
//}