#include<iostream>
#include<stdio.h>
using namespace std;


int main()
{
   	string s,v;
    cin >> s;
    int len = s.length(), num = 0, flag = 1; 
    double l = 0.0, r = 0.0;
    bool judge = true;
    for(int i = 0; i <= len; ++i)
    {
        if(s[i] >= '0' && s[i] <= '9')
            num = num * 10 + s[i] - '0';
        else
        {
            if(s[i] >= 'a' && s[i] <= 'z')
            {
                v = s[i];
                if(judge == false)
                    flag = -flag;
                l += flag * num;
            }
            else
            {
                if(judge)
                    flag = -flag;
                r += flag * num;
            }
            flag = 1;
            num = 0; 
            if(s[i] == '-')
                flag = -1;
            else if(s[i] == '=')
                judge = false;
        }
    }
    cout<<v; 
    printf("=%.3f",r/l);
    return 0;
}
