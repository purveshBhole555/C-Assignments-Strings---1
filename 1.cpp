#include <iostream>
#include <string>
using namespace std;

int main()
{

    int n;
   
    string s ;
    getline(cin,s);

    for(int i=0 ; i<s.length();i+=2)
    {
        s[i]='#';
    }

    cout<<s;
    
}

// Output is 


efegnyj
#f#g#y#