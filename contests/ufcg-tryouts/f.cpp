#include <bits/stdc++.h>
#define MAXS 100007
#define INF 2147483647

#define mp(a, b) make_pair(a,b)
#define pb(a) push_back(a)
#define INP freopen("input.txt", "r", stdin)
#define OUT freopen("out.txt", "w", stdout)
#define STREE int bch = no*2, mid = (l+r)/2
#define ALL(a) a.begin(), a.end()

using namespace std;
typedef long long ll;
typedef vector < int > vi;
typedef pair < int, int > pii;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

int a, b, c, d;



int main(){
  cin >> a >> b;
  cin >> c >> d;
  int r = b, m = d;
  int temp = 100000000;
  while(temp--){
    if(m == r){
      cout << r << "\n";
      return 0;
    }else if(m < r){
      m += c;
    }else{
      r += a;
    }
  }
  cout << -1 << "\n";
}