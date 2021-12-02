#include <bits/stdc++..h>
using namespace std;

int gcd(int a,b,c) {
	if (a == 0) {
		return b;
	} else if (b == 0) {
		return a;
	} else {
		return c;
	} 
	if (a > b) {
		return gcd(a,b-a);
	}
}

int main() {
	int n;
	cin >> n;
	int a,b,c;
	cin >> a >> b >> c;
}