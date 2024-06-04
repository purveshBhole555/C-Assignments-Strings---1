#include <iostream>
#include <vector>

using namespace std;

int main()
{
    string s;
    getline(cin,s);
    int len = s.length() , count=0;

    for(int i=0 ; i<len ; i++)
    {
        if(s[i]!='a' &&s[i]!='e' &&s[i]!='i' &&s[i]!='o' &&s[i]!='u'&&s[i]!=' ' ) {count++;}
    }

    cout<<count<<endl;
}

// Output is 

Purvesh
5