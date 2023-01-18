//https://leetcode.com/problems/valid-palindrome/description/

class Solution {
public:

    bool checkPal(string res)
    {
        for (int i = 0, j = res.length() - 1; i < j; i++, j--)
        {
            if (res[i] != res[j])
                return false;
        }
        return true;
    }
    bool isPalindrome(string s) {
        string res = "";
        for (int i = 0; i < s.length(); i++)
        {
            if (isalnum(s[i]) && isupper(s[i]))
            {
                res += (char)tolower(s[i]);
            }
            else if (isalnum(s[i]))
            {
                res += s[i];
            }
        }
        return checkPal(res);
    }
};