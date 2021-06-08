#include <iostream>
#define endl '\n' ; 
using namespace std ;
void solve(){
	int x , y , X , Y ; 
	cin >> x >> y >> X >> Y ; 
	cout << (X/x) + (Y/y) << endl ; 
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