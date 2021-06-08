#include <iostream>
#define endl '\n' ; 
using namespace std ;
void solve(){
	/*
	1. lang a -> m lowercase
	2. lang N -> Z uppercase 

	*/
	int k ; cin >> k ; 
	
	while (k--){
		bool ans = true ; 
		string word ; 
		bool first , second ; 
		first = second = false ; 
		cin >> word ; 
		for ( char s : word)
			if ( s >= 'a' and s <= 'm')
				first = true ; 
			else if ( s >= 'N' and s <='Z')
				second = true ; 
			else 
				ans = false ; 
			
		cout << ((ans == false) || (first and second)) ? 'No' : 'Yes' ; 
	}
	
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