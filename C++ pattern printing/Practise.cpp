#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<"*";
        }
        // cout<<endl;
        for (int k = n-1; k >= i; k--)
        {
            cout << " ";
        }
        for (int k = n-1; k >= i; k--)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
        
    }
    
    return 0;
}