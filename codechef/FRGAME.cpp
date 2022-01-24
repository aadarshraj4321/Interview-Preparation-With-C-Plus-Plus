#include<bits/stdc++.h>

int main() {

	int t;
	std::cin >> t;
	while(t--) {
		int a, b, c, d;
		std::cin >> a >> b >> c >> d;

			if(a < b)
				a += c;
			else
				b += c;

			if(a < b)
				a += d;
			else
				b += d;

			std::cout << (a < b ? "S\n" : "N\n");
	}

	return 0;
}


// 3
// 2 3 4 5
// 3 3 3 3
// 2 3 1 2
// Sample Output 1 
// S
// N
// S