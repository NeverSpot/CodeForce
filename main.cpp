/* "If I can run I will run , If I can walk I will walk , If I can crawl I will crawl" */
/*                           " But I will NEVER_STOP "                                 */
#include <bits/stdc++.h>
using namespace std;
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define NeverSpot cout.tie(NULL);
#define int long long int
#define double long double
#define f first
#define s second
#define pb push_back
#define mp make_pair
#define ed <<endl;
#define sp <<" "<<
#define ci  cin>>
#define co  cout<<
#define bug cout<<" sex "<<endl;
#define v(x) cout << #x << "=" << x << endl;
#define v2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl;
#define all(x) (x).begin(),(x).end()
#define fl(a,b) for (int i=a;i<(b);i++)
#define sl(a,b) for (int j=a;j<(b);j++)
#define tl(a,b) for (int k=a;k<(b);k++)
#define test(t) int t;ci t;while ((t)--)
#define sortv(v) sort(all(v));
#define rev(v) reverse(all(v));
#define ai(x) vi x;fl(0,n){int y ; ci y ; (x).pb(y);}
#define pi 3.14159265358979323846264338327950288419716939937510582097494459230781640628620899862803482534211706798214808651328230664709384460955058223172535940812848111745028410270193852110555964462294895493038196442881097566593344612847564823378678316527120190914564856692346034861045432664821339360726024914127372458700660631558817488152092096282925409171536436789259036
#define no co "NO" ed
#define yes co "YES" ed
//const int mod = 1'000'000'007;
const int N = 1e5+10;
typedef map<int,int> om;
typedef vector<int> vi;
typedef vector<vector<int>> vv;
typedef pair<int, int> pl;
typedef vector<pair<int, int>> vp;
typedef unordered_map<int,int> um;
//char al[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

vi cats;
vi edges[1000000];
int n,m;
int sex=0;

void dfs(int v,int tor,int p){
    if(cats[v]==1){
        tor++;
    }
    if(tor>m){
        return;
    }
    if(cats[v]==0){
        tor=0;
    }
    if(v!=1&&edges[v].size()==1){
        sex++;
    }
    for(auto child:edges[v]){
        if(child!=p){
            dfs(child,tor,v);
        }
    }
}

signed main() {
    Code By NeverSpot
    ci n>>m;
    cats.pb(0);
    fl(0,n){
        int x;
        ci x;
        cats.pb(x);
    }
    fl(1,n){
        int x,y;
        ci x>>y;
        edges[x].pb(y);
        edges[y].pb(x);
    }
    dfs(1,0,-1);
    co sex ed
//    test(t) {
//
//    }
    return 0;
}












