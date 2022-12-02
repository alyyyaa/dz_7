//Заменить в слове все "/"на "\"
#include<iostream>
#include<string>
using namespace std;
void main()
{
    string s;
    cin >> s;

    while (s.find('/') != -1)
    {
        s.replace(s.find('/'), 1, "\\");
    }
    cout << s;
}