using namespace std;
#include<string>

#include "global.hh"

// int yyyymmdd;
int power(int n, int exp)
{
    if (exp == 0)
        return 1;
    if (exp % 2 == 0)
    {
        int temp = power(n, exp / 2);
        return temp * temp;
    }
    else
    {
        int temp = power(n, (exp - 1) / 2);
        return n * temp * temp;
    }
}
int strToNum(string s)
{
    int res = 0;
    for (int i = 0; i < s.size(); i++)
        res += ((s[s.size() - 1 - i] - '0') * power(10, i));
    return res;
}