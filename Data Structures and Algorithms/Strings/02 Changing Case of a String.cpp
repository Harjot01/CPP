// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

int main()
{
    char A[] = "HaRJot";
    for (int i = 0; i < 6; ++i)
    {
        if (A[i] >= 65 && A[i] <= 90)
            A[i] += 32;
        else if (A[i] >= 97 && A[i] <= 122)
            A[i] -= 32;
    }
    cout << A;
    return 0;
}
