#include <iostream>
using namespace std;
#include <stack>
int main()
{
    stack<char> a;
    string s;
    cin >> s;
    int l = s.length();
    for (int i = 0; s[i]!='\0'; i++)
    {
        char ch=s[i];
        switch (ch)
        {
        case '(':
            a.push(ch);
            break;
        case '{':
            a.push(ch);
            break;
        case '[':
            a.push(ch);
            break;
        }
        if (a.top()=='(' && s[i]==')' && !a.empty())
        {
            a.pop();
        }
        if (a.top()=='{' && s[i]=='}' && !a.empty())
        {
            a.pop();
        }
        if (a.top()=='{' && s[i]=='}' && !a.empty())
        {
            a.pop();
        }
    }
    if (a.size()==0)
    {
        cout<<"Valid Paranthesis";
    }
    
    return 0;
}