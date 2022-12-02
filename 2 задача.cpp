//Найти все уникальные символы в строке 
#include<iostream>
#include <string>
using namespace std;

void main()
{
    string s, answer;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        char symb = s[i];
        int count = 0;

        for (int j = 0; j < s.size(); j++)
        {
            if (symb == s[j]) 
                count += 1;
        }

        if (count == 1)
        {
            answer.append(1, s[i]);
        }
    }
    cout << answer;
}