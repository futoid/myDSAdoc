//GCD with recurrsion
//Euclidean algorithm

#include<bits/stdc++.h>

using namespace std;

int gcd( int a, int b){
	
	if(b==0){
		return a;
	}
	
	return gcd(b, a%b);
}


int main(){
	cout<<gcd(6,18);
	return 0;
}
