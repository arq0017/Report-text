#include <iostream>
#include <set>
#include <utility>
#define endl '\n' 
#define int long long 
#define loop(n) for ( int i = 0 ; i < n ; i++)
#define fast ios_base::sync_with_stdio(false) ; cin.tie(NULL) ; cout.tie(NULL) ; 
using namespace std ;
void solve(){
	//n-> invigilator 
	// k-> googling minutes 
	// f-> ending time 
	int n , k , f ; cin >> n >> k >> f ; 
	set <pair <int , int> > s ; 
	loop(n){
		int start , end ; cin >> start >> end ; 
		s.insert(make_pair(start, end)) ; 
	}
	s.insert({f , f}) ; 
	int leftTime = 0 ;
	int maxEnd = 0 ; 
	for ( auto i : s){
		if ( i.first > maxEnd) leftTime += i.first - maxEnd ; 
		else if ( maxEnd < i.second) maxEnd = i.second ; 
	}
	cout <<  (( leftTime >= k) ? "yes\n" : "no\n" ) ; 


}
int32_t main(){
	fast ; 
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