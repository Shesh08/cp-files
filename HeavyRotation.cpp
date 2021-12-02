#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; //number of days
	cin >> n;
	if (n%2 == 0) { //if he wears white even days later, then it will output white
		cout << "White" << endl;
	} else {
		cout << "Black" << endl; //if he wears black odd days later, then it will output black
	}
}