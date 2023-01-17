

class Solution {
public:
    int compress(vector<char>& chars) {
        string s = "";
        int count = 1;
        int n = chars.size();
        if (chars.size() == 1)
            return 1;
        for (int i = 0; i < chars.size() - 1; i++)
        {
            if (chars[i] == chars[i + 1])
            {
                count++;
                if (i == n - 2)
                {
                    s += chars[i];
                    if (count > 1)
                        s += to_string(count);
                }
            }

            else
            {
                s += chars[i];
                if (count > 1)
                {
                    s += to_string(count);
                }
                count = 1;
            }
        }

        if (chars[n - 1] != chars[n - 2])
        {
            s += chars[n - 1];
        }
        for (int i = 0; i < s.length(); i++)
        {
            chars[i] = s[i];
        }
        return s.length();
    }
};