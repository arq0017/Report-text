#include <iostream>
#include <map>
#include <set>
#define endl '\n' ; 
#define loop(n) for ( int i = 0 ; i < n ; i++)
using namespace std ;
void solve(){
	int n , m , pref = 0  ; cin >> n >> m ; 
	int arr[m] ; 
	map <int , int > mp ; 
	set <int> st ; 

	// input array and map of element and index 
	for ( int i = 0 ; i < m ; i++){
		cin >> arr[i] ; 
		mp[arr[i]] = i ; 
	}

	// when prefix = 0
	for ( auto i : mp )
		st.insert(i.second) ; 
	int ans = m - *st.begin() ; 
	// when prefix = 1..m
	for ( int i = 0 ; i < m ; i++){
		if ( st.count(mp[arr[i]])) st.erase(mp[arr[i]]) ; 
		if ( !st.empty()) ans = min ( ans , i+1 + m- *st.begin()) ; 
		else ans = min( ans , i+1) ; 
	}
	cout << ans << endl ; 

	return ; 
}
int main(){
	ios_base::sync_with_stdio(false) ; 
	cin.tie(NULL) ; cout.tie(NULL) ; 
	#ifndef ONLINE_JUDGE
		freopen("/Users/arqam/Dev/C++/input.txt" , "r" , stdin ) ;
		freopen("/Users/arqam/Dev/C++/output.txt" , "w" , stdout) ; 
	#endif 
	int t ; cin >> t ;
	while(t--){
		solve() ; 
	}
	return 0     ; 
}