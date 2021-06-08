#include <iostream>
#define int long long 
#define endl '\n' ; 
using namespace std ;
void solve(){
	int D ,d , p , q ; cin >> D >> d >> p >> q ; 
	int sum = 0 ; 
	int interval = d ; 
	while ( d <= D){
		sum+=p*interval ; 
		d+=interval ; 
		p+=q ; 
	}
	int rem = D%interval ; 
	if ( rem != 0 )
		sum+=(rem*p) ; 
	cout << sum << endl ; 
	return ; 
}
#undef int 
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