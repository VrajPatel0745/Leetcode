class Solution {
public:
    bool isValid(string s)
    {
        int n = s.length();
        stack<char> r;
        for (int i = 0; i < n; i++)
        {
            char v = s[i];
            if (v == '(')
            {
                r.push(v);
            }
            if (v == ')')
            {
                if (r.empty() || r.top() != '(')
                {
                    return false;
                }
                r.pop();
            }
            if (v == '[')
            {
                r.push(v);
            }
            if (v == ']')
            {
                if (r.empty() || r.top() != '[')
                {
                    return false;
                }
                r.pop();
            }
            if (v == '{')
            {
                r.push(v);
            }
            if (v == '}')
            {
                if (r.empty() || r.top() != '{')
                {
                    return false;
                }
                r.pop();
            }
        }
        return r.empty();
    }
};