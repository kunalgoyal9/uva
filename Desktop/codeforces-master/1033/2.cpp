
#include<bits/stdc++.h>

using namespace std;
 
#define int1(a) scanf("%d",&a)
#define int2(a,b) scanf("%d %d",&a,&b)
#define int3(a,b,c) scanf("%d %d %d",&a,&b,&c)
#define int4(a,b,c,d) scanf("%d %d %d %d",&a,&b,&c,&d)
 
#define lint1(a) scanf("%lld",&a)
#define lint2(a,b) scanf("%lld %lld",&a,&b)
#define lint3(a,b,c) scanf("%lld %lld %lld",&a,&b,&c)
#define lint4(a,b,c,d) scanf("%lld %lld %lld %lld",&a,&b,&c,&d)
#define lli long long int
 
#define pint(x) printf("%d",x)
#define plint(x) printf("%lld",x)
#define endl '\n'
#define nl printf("\n");
#define ps printf(" "); 
 
#define all(x) x.begin(),x.end()
#define pb push_back
#define Set(a, s) memset(a, s, sizeof (a))
#define mod1 (lli)(1e9 + 7)
#define mod2 (lli)(1e9 + 9)
#define EPS 1e-9

#define fore(i,n) for(int i=n; i>=0; i--)
#define fors(i,a,n) for(int i=a; i<n; i++)
#define fora(i,ele) for(auto i: ele)
 
#define trace1(x)                cerr<<#x<<": "<<x<<endl
#define trace2(x, y)             cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
#define trace3(x, y, z)          cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl
 
typedef vector<int> vi;
typedef vector<string> vs;
typedef pair<int,int> pii;
typedef vector<lli> vli;
 
template< class T > T gcd(T a, T b) { return (b != 0 ? gcd<T>(b, a%b) : a); }
template< class T > T lcm(T a, T b) { return (a / gcd<T>(a, b) * b); }
 
double tick(){static clock_t oldt,newt=clock();double diff=1.0*(newt-oldt)/CLOCKS_PER_SEC;oldt=newt;return diff;}
float roundoff(float val, float p){ return floor(val*pow(10.0,p)+0.5)/pow(10.0,p);}
lli power(lli a, lli b, lli mod){lli x=1,y=a; while(b > 0){if(b&1){x=(x*y)%mod;}y = (y*y)%mod; b /= 2;}return x;}
 
const int INF = 0x3f3f3f3f;
const float pi = 3.14159265;
 
//int dx[]={1,1,0,-1,-1,-1,0,1};int dy[]={0,1,1,1,0,-1,-1,-1};
//int dx[]={1,-1,0,0}; int dy[]={0,0,1,-1};
 
 void SieveOfEratosthenes(lli n) 
{ 
    // Create a boolean array "prime[0..n]" and initialize 
    // all entries it as true. A value in prime[i] will 
    // finally be false if i is Not a prime, else true. 
    bitset<1000000000> prime[n+1]; 
    memset(prime, true, sizeof(prime)); 
  
    for (lli p=2; p*p<=n; p++) 
    { 
        // If prime[p] is not changed, then it is a prime 
        if (prime[p] == true) 
        { 
            // Update all multiples of p 
            for (lli i=p*2; i<=n; i += p) 
                prime[i] = false; 
        } 
    } 
  
    // Print all prime numbers 
} 
 
int main(void) {
    ios_base::sync_with_stdio(true);
    cin.tie(NULL);
    cout.tie(NULL);
	//srand (time(NULL));
	/*
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
	*/
    // 
    int t;
    int1(t);
    
    while(t--){
		lli a,b;
		lint2(a,b);
		
		if(a-b != 1){
			cout<<"NO";
		}
		else{
			bool chk = true;
			lli sum = a+b;
			trace1(sum);
			for(lli i=2; i*i<=sum; i++){
				if(sum%i == 0){
					trace1('k');
					cout<<"NO";
					chk = false;
					break;
				}
			}
			if(chk){
				cout<<"YES";
			}
		}
		cout<<endl;
	}
    return 0;
}
