#include <bits/stdc++.h>
using namespace std;

int main() {
    int X, N; cin >>X>> N;
    int t=101;
    if(N==0){
        cout << X << endl;
        return 0;
    }
    vector<int>a(N);
    for (int i =0; i<N;i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int count =0;
    int ans =0;
    for (int i =0; i<201; i++){
        if (i==a[count]){
            count++;
        }
        else{
            if (abs(X-i)<t){
                 ans =i;
                t = abs(X-i);
            }
        }
    }
    cout << ans << endl;
}

