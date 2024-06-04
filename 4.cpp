#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// std::string reverseStr(std::string str) {
//     std::string reversedStr;
//     reversedStr = reverse(str.begin(), str.end());
    
//     return reversedStr;
// } 
int main()
{
    string s="Purvesh";
    // getline(cin,s);
    int len = s.length() , count=0;
    reverse(s.begin(), s.end());
    cout<<s;
}

// Output is 

hsevruP