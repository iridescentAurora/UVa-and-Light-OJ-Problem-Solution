

        /*----------------------------------*\
        ******BISMILLAHIR RAHMANIR RAHIM******
        ********************
        *****************
        /*************************************/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define NL printf("\n")
#define xx first
#define yy second
#define gc getchar
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define scani(x) scanf("%d",&x)
#define scanl(x) scanf("%lld",&x)//scanf("%I64d",&x)
#define scand(x) scanf("%lf",&x)
#define scans(x) scanf("%s",x)
#define mem(a,b) memset(a,b,sizeof(a))
#define FOR(i,j,k) for(i=j;i<=k;i++)
#define REV(i,j,k) for(i=j;i>=k;i--)
#define READ(f) freopen(f,"r",stdin)
#define WRITE(f) freopen(f,"w",stdout)
#define cnd tree[idx]
#define lnd tree[idx*2]
#define rnd tree[(idx*2)+1]
#define lndp (idx*2),(b),((b+e)/2)
#define rndp (idx*2+1),((b+e)/2+1),(e)
#define pi 2.0*acos(0.0)
#define MOD 1000000007
#define MAX 100005
#define PRINT_CASE(x) printf("Case %d:",cs);

#define sc1(a)  scanf("%lld",&a)
#define sc2(a,b) scanf("%lld %lld",&a,&b)
#define sc3(a,b,c) scanf("%lld %lld %lld",&a,&b,&c)

#define pi1(a) printf("%lld",a)
#define pi2(a,b) printf("%lld %lld",a,b)
#define pi3(a,b,c) printf("%lld %lld %lld",a,b,c)
#define sp printf(" ")
#define yes printf("YES")
#define no printf("NO")

#define all(v) v.begin(),v.end()

template <typename T> inline T GCD (T a,T b ) {a = abs(a);b = abs(b);while ( b ) { a = a % b; swap ( a, b ); } return a;}
template <typename T> inline T LCM(T x,T y){T tp = GCD(x,y);if( (x / tp) * 1. * y > 9e18) return 9e18;return (x / tp) * y;}
template <typename T> inline T BigMod(T A,T B,T M){T ret = 1;while(B){if(B & 1) ret = (ret * A) % M;A = (A * A) % M;B = B >> 1;}return ret;}
template <typename T> inline T InvMod (T A,T M){return BigMod(A,M-2,M);}
ll gcdr ( ll a, ll b )
{
  if ( a==0 ) return b;
  return gcdr ( b%a, a );
}
/*
ll poW(ll x, ll n)
{
    if(n==0)
        return 1;
    else if(n%2==0)
        return poW(x*x,n/2);
    else
        return x*poW(x*x,((n-1)/2));
}
*/
/*
int gcdr ( int a, int b )
{
  if ( a==0 ) return b;
  return gcdr ( b%a, a );
}

const int maxx=1000000;
int status[(maxx>>5)+2];

bool check(int N,int pos)
{
    return (bool)(N & (1<<pos));
}
int Set(int N, int pos)
{
    return N=(N|(1<<pos));
}
vector<int>P_list;
void sieve()
{
    int i,j,sqrtN;
    sqrtN=int(sqrt(maxx))+1;
    P_list.push_back(2);
    for(int i=3;i<=maxx;i+=2)
    {
        if(check(status[i>>5],i&31)==0)
        {
            P_list.push_back(i);

            if(i<=sqrtN)
            for(j=i*i;j<=maxx;j+=(i<<1))
            {
                status[j>>5]=Set(status[j>>5],j & 31);
            }
        }
    }
}
*/
ll max(ll a,ll b){
    if(a>b) return a;
        return b;
}
ll min(ll a, ll b){
    if(a<b)return a;
            return b;
}
void FastIO()
{
    ios_base::sync_with_stdio(false);cin.tie(0);
    cout.precision(20);
}
const ll size3=300005;
const ll size2=200005;
const ll size1=100005;
/*
void graph(ll n){
    if(n==0) return ;
    for(ll i=0;i<n;i++){
        ll x,y;
        sc2(x,y);
        G[x].pb(y);
        G[y].pb(x);
    }
    return ;
}
*/
ll tree[200000];
ll n;
void update(int idx,int val)
{
       while(idx <= n )
       {
              tree[idx] += val;

              idx += (idx & -idx);
       }
}
int query(int idx)
{
       int sum = 0 ;
       while(idx > 0 )
       {
              sum += tree[idx] ;
              idx -= ( idx & -idx);
       }

       return sum;
}
ll arr[100004];
ll ans[100004];
int main()
{
    ///FastIO();
    ll t,i,j,m,x,y;
    ///sc1(t);

    scanf("%lld",&t);
    ll cs=1;
    while(t--){
        scanf("%lld",&n);

        mem(tree,0);
        for(i=1;i<=n;i++){
            //sc1(arr[i]);
            scanf("%lld",&arr[i]);
            update(i,1);
        }
        for(i=n;i>=1;i--){
            ll location=i-arr[i];
            ll lower=1,upper=n;
            while(lower<=upper){
                ll mid=(lower+upper)/2;
                if(query(mid)>=location){
                    upper=mid-1;
                }
                else {
                    lower=mid+1;
                }
            }
            //cout<<lower<<endl;
            ans[i]=lower;
            update(lower,-1);
        }
        printf("Case %lld: ",cs);cs++;
        printf("%lld\n",ans[1]);
    }

    return 0;
}











