#include <bits/stdc++.h>
using namespace std;
void mycopy(char s1[], char s2[])
{
    int i = 0;
    for ( i = 0; s1[i] != '\0'; i++)
    {
        s2[i] = s1[i];
        s2[i] = '\0';
    }
}
    int main()
    {
        char s1[100] = "hello";
        char s2[100] = "kavya ";
        mycopy(s1, s2);
        cout << s2;
    
    return 0;
}