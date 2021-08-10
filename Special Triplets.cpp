#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n, count = 0;
        cin >> n;
        for (int C = 1; C <= n; C++)
        {
            for (int B = C; B <= n; B += C)
            {
                if (B % C == 0)
                {
                    for (int A = C; A <= n; A += B)
                    {
                        if (A % B == C)
                        {
                            count++;
                        }
                    }
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}
