#include <bits/stdc++.h>
using namespace std;

string remove_Duplicate(string str)
{
    stack<char> stck;

    for (int i = 0; i < str.length(); i++)
    {

        if (stck.empty() or stck.top() != str[i])
            stck.push(str[i]);
        else
        {
            stck.pop();
        }
    }

    if (stck.empty())
        return "Khaali";

    string result = "";
    while (!stck.empty())
    {
        result = stck.top() + result;
        stck.pop();
    }
    return result;
}

int main()
{
    string str = "aabaaabccded";
    cout << remove_Duplicate(str);
    return 0;
}