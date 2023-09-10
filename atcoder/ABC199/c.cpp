#include <bits/stdc++.h>
using namespace std;

int main() {
  long long N, Q;
  string S, S1, S2;
  bool f=0;
  
  cin >> N;
  cin >> S;
  cin >> Q;
  //S1 = S.substr(0, N);
  //S2 = S.substr(N, N);
  
  for(long long i=0; i<Q; i++){
    int T;
    long long A, B;
    cin >> T >> A >> B;
    if(T == 1){
      A--; B--;
      if(f){
        if(A>=N) A = A-N;
        else if(A<N) A = A+N;
        if(B>=N) B = B-N;
        else if(B<N) B = B+N;
      }
    
      char c;
      c = S.at(A);
      S.at(A) = S.at(B);
      S.at(B) = c;  
    }else if(T == 2){
      f = ! f;
    }
    //cout << T << ": " << S << endl;
  }
  if(f) S = S.substr(N, N) + S.substr(0, N);
  cout << S << endl;
  
  return 0;
}