#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int H, W;
    cin >> H >> W;
    char S[H][W];
    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            char tmp;
            cin >> tmp;
            S[i][j] = tmp;
        }
    }
    int ans = 0;
    for (int i = 0; i < H - 1; i++)
    {
        for (int j = 0; j < W - 1; j++)
        {
            int cnt = 0;
            if (S[i][j]=='#'){
                cnt++;
            }
            if (S[i+1][j] == '#')
            {
                cnt++;
            }
            if (S[i][j+1] == '#')
            {
                cnt++;
            }
            if (S[i+1][j+1] == '#')
            {
                cnt++;
            }
            // cout << cnt << endl;
            if (cnt == 1 || cnt == 3)
            {
                ans++;
            }
        }
    }
 
    cout << ans << endl;
}