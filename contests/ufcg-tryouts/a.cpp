#include <bits/stdc++.h>
#define MAXS 1000007
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

 
int n;
 
bool isprime(int a){
  for(int i = 2; i <= sqrt(a); ++i){
    if(a%i == 0){
      return false;
    }
  }
  return true;
}

 
int main(){
  cin >> n;
  if(isprime(n)) cout << 1;
  else if(n % 2 == 0) cout << 2;
  else if(isprime(n-2)) cout << 2;
  else cout << 3;
}