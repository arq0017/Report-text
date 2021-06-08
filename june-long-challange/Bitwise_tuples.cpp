#include <iostream>
#define endl '\n' ; 
using namespace std ;
void solve(){
	cout << 0 and 1 << endl ; 
	cout << 2 and 3 << endl ;  
	return ; 
}
int main(){
	ios_base::sync_with_stdio(false) ; 
	cin.tie(NULL) ; cout.tie(NULL) ; 
	#ifndef ONLINE_JUDGE
		freopen("/Users/arqam/Dev/C++/input.txt" , "r" , stdin ) ;
		freopen("/Users/arqam/Dev/C++/output.txt" , "w" , stdout) ; 
	#endif 
	int t ; 
	t = 1 ; 
	while(t--){
		solve() ; 
	}
	return 0     ; 
}