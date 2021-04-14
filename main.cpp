#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp>
#include <functional> // for less
using namespace __gnu_pbds;
using namespace std;
 
typedef vector< int > vi;
typedef vector< vi > vvi;
typedef pair< int,int > ii;
 
#define sz(a) int((a).size())
#define pb push_back
#define mp make_pair
#define all(c) (c).begin(),(c).end()
#define tr(c,i) for(typeof((c).begin()) i = (c).begin(); i != (c).end(); i++)
#define present(c,x) ((c).find(x) != (c).end())
#define cpresent(c,x) (find(all(c),x) != (c).end())
#define input(v,n) for(ll i=0; i<n; i++) cin>>v[i]
#define output(v,n) for(ll i=0; i<n; i++) cout<<v[i]<<" "
#define ll long long
#define ff first
#define se second
// a new data structure defined. Please refer below
// GNU link : https://goo.gl/WVDL6g
 typedef tree<ll, null_type, less<ll>, rb_tree_tag,
              tree_order_statistics_node_update>
     new_data_set;
 
// Driver function to sort the vector elements
// by second element of pairs
bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}
 
// Driver function to sort the vector elements by
// first element of pair in descending order
bool sortinrev(const pair<int,int> &a,
               const pair<int,int> &b)
{
       return (a.first > b.first);
}
 
// Driver function to sort the vector elements by
// second element of pair in descending order
bool sortbysecdesc(const pair<int,int> &a,
                   const pair<int,int> &b)
{
       return a.second>b.second;
}
 
 
ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
 
}

ll exp(ll x, ll p){
  if(p==0)
    return 1;
  else if(p%2==0)
    return exp(x, p/2)*exp(x, p/2);
  else
    return x*exp(x, p/2)*exp(x, p/2);
}


#define MAXN 1000005

ll spf[MAXN];
void sieve() { 
    spf[1] = 1; 
    for (ll i=2; i<MAXN; i++) 
  
        // marking smallest prime factor for every  number to be itself. 
        spf[i] = i; 
  
    // separately marking spf for every even number as 2 
    for (ll i=4; i<MAXN; i+=2) 
        spf[i] = 2; 
  
    for (ll i=3; i*i<MAXN; i++) { 
        // checking if i is prime 
        if (spf[i] == i) { 
            // marking SPF for all numbers divisible by i 
            for (ll j=i*i; j<MAXN; j+=i) 
  
                // marking spf[j] if it is not previously marked 
                if (spf[j]==j) 
                    spf[j] = i; 
        } 
    } 
}

// Common mistakes
// always check whether container is empty before accessing its elements
// always put ((ans)%n+n)%n to avoid negative output
// always check if values are not overflowing (use long long where required)
// always check minor mistake endl at end of every statement 
// always read problem twice carefully beacuse wrong assumption can lead to double(30) time devoted to same problem

struct Edge{
    ll u, v, wght;
    bool operator<(Edge const& other) {
        return wght<other.wght;
    }
};

vector<ll> rnk, par;

ll find(ll i)  {  
    // find root and make root as parent of i(path compression)  
    if(par[i]!=i)
        par[i]=find(par[i]);
    return par[i];
}  

// A function that does union of two sets of x and y  (uses union by rank)  
void Union(ll x, ll y)  {  
   
    // Attach smaller rank tree under root of high rank tree (Union by Rank)  
    ll xroot=find(x);
    ll yroot=find(y);
    if(rnk[xroot]> rnk[yroot])
        par[yroot]=xroot;
    else if(rnk[yroot]> rnk[xroot])
        par[xroot]=yroot;

    // If ranks are same, then make one as root and increment its rank by one  
    else{
        rnk[yroot]++;
        par[xroot]=yroot;
    }
}  
 
# define ALPHABET_SIZE 26
# define CHAR_TO_INDEX(c) (int(c)- int('a')) 
  
struct TrieNode{
    struct TrieNode *children[ALPHABET_SIZE];
    
    bool isWordend;
};
  
struct TrieNode getNode(){
    struct TrieNode* pNode=new TrieNode;
    pNode->isWordEnd=false;
    
    for(int i=0; i<ALPHABET_SIZE; i++){
        pNode->children[i]=false;
    }
    return pNode;
} 


// void insert(){
    
// } 
 
  
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    return 0;   
}
