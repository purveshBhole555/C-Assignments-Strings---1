#include <iostream>
#include <vector>

using namespace std;

int main()
{
    string s;
    getline(cin,s);
    int len = s.length() , count=0;
    bool flag= true;
    for(int i=0 , j=s.length()-1;i<=j ;i++, j-- )
    {
        if(s[i]!=s[j]) flag= false;
    }

    if(flag==true) cout<<"palindrome";
    else cout<<"NOT a palindrome";

}

// Outpu is 

Hello
NOT a palindrome
PS E:\CPP Prograamming\PW\7 Strings\assignment\1 Srings> cd "e:\CPP Prograamming\PW\7 Strings\assignment\1 Srings\" ; if ($?) { g++ 3.cpp -o 3 } ; if ($?) { .\3 }
maham
palindrome