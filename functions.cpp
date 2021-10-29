#include <bits/stdc++.h>
using namespace std;   

int max_of_four(int a, int b, int c, int d) {
	int big = a;
	if (big < b) {
		big = b;
	} else if (big < c) {
		big = c;
	} else if (big < d) {
		big = d;
	} else {
		big = a;
	}
	cout << big << endl;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}