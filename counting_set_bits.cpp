#include<iostream>
#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
#define countdigit(x) floor(log10(x)+1)
#define all(x) x.begin(), x.end()
#define asort(v) sort(v.begin(), v.end());  ///sorting in ascending order
#define dsort(v) sort(v.begin(), v.end(), greater<int>());  ///sorting in descending order
#define uq(x) x.resize(distance(x.begin(), unique(x.begin(), x.end())))
#define PI 3.1415926535
#define ff first
#define ss second
#define pb push_back
#define ee "\n"
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
// typedef tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update > pbds; // find_by_order, order_of_key

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}


void solve()
{
		int n;
		cin >> n;
		int x;
		vector<int> odd;
		vector <int> even;
		for(int i =0;i<n;i++){
           cin >> x;
           if(x%2==0) even.pb(x);
           else odd.pb(x);
		}
        debug(even);
        debug(odd);
    	for(int i =0;i<even.size();i++)
			cout << even[i] << " ";
		

		for(int i=0;i<odd.size();i++)
		    cout << odd[i] <<" ";
		
       cout << ee;
	return;
}


int main() {
	IOS;
	#ifndef ONLINE_JUDGE
		freopen("Error.txt", "w", stderr);
	#endif

	ll test;	cin >> test;
	while (test--)
		solve();
}