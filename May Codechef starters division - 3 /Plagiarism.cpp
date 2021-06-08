#include <iostream>
#include <map>
#include <iterator>
#include <vector>
#define endl '\n' ; 
using namespace std ;
void solve(){
	int n , m , k , num ; cin >> n >> m >> k ; 
	map <int , int > mp ;
	map <int , int > :: iterator it  ; 
	vector <int> ans ; 
	while( k--){
		cin >> num ; 
		if ( num <= n )
			mp[num]++ ; 
		continue ; 
	}
	for ( it = mp.begin() ; it != mp.end() ; it++){
			if ( it->second > 1)
				ans.push_back(it->first) ; 
	}
	cout << ans.size()<<' ' ; 
	for ( auto i : ans)
			cout << i << ' ' ; 
	cout << endl ; 

	return ; 
}
int32_t main(){
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