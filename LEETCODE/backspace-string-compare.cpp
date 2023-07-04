class Solution {
public:
    bool backspaceCompare(string s, string t)
    {
        stack<char> S1;
        stack<char> S2;
        for (int i = 0; i < s.size(); i++)
        {
            char sc = s[i];
            if (sc == '#')
            {
                if (!S1.empty())
                    S1.pop();
            }
            else
                S1.push(sc);
        }
        for (int i = 0; i < t.size(); i++)
        {
            char tc = t[i];
            if (tc == '#')
            {
                if (!S2.empty())
                    S2.pop();
            }
            else
                S2.push(tc);
        }
        return S1 == S2;
    }
};
