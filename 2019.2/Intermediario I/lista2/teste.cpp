#include <bits/stdc++.h>
#define MAXS 100007
#define INF 2147483647

#define make_pair(a, b) mp(a,b)
#define pb(a) push_back(a)
#define INP freopen("input.txt", "r", stdin)
#define OUT freopen("out.txt", "w", stdout)
#define STREE int bch = no*2, mid = (l+r)/2
#define ALL(a) a.begin(), a.end()

using namespace std;
typedef long long ll;
typedef vector < int > vi;
typedef pair < int, int > pii;


int main(){
  mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
  uniform_int_distribution<int> t(0, 99);
  int a = pow(2, 4) * pow(3, 6) * pow(5, 2) ;
  cout << a << "   " << sqrt(a) << endl;