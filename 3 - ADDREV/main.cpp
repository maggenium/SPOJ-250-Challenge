#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// ifstream f("data.in");
// ofstream g("data.out");

int N, X, Y, i, j, revSum;
string revStr;

int reverseInteger(int revNum)
{
    int fwNum;

    revStr = to_string(revNum);

    int revStrLen = revStr.length();
    for (i = 0; i < revStrLen / 2; i++)
    {
        swap(revStr[i], revStr[revStrLen - i - 1]);
    }
    stringstream ss(revStr);
    ss >> fwNum;

    if (revStr[revStrLen - 1] == '-')
        fwNum = -fwNum;

    return fwNum;
}

int main(int argc, char const *argv[])
{
    scanf("%d", &N);
    for (j = 0; j < N; j++)
    {
        scanf("%d", &X);
        scanf("%d", &Y);
        revSum = reverseInteger(X) + reverseInteger(Y);
        printf("%d \n", reverseInteger(revSum));
    }
    
    return 0;
}
