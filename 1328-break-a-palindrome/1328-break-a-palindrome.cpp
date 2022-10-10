class Solution
{
    bool pali(string s)
    {
        bool re = true;
        int n = s.length();
        for (int i = 0; i < ((n + 2) / 2); i++)
        {
            if (s[i] != s[n - i - 1])
            {
                re = false;
                break;
            }
        }
        return re;
    }

public:
    string breakPalindrome(string s)
    {
        string re;
        int n = s.length();
        if (n < 2)
            return re;
        re = s;
        int i = 0;
        while (pali(s) == true && i <= n)
        {
            if (s[i] != 'a')
            {
                s[i] = 'a';
            }
            else
            {
                i++;
            }
        }
        if (pali(s))
        {
            re[n - 1] = 'b';
            s = re;
        }

        return s;
    }
};