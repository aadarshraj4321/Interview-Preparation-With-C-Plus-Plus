#include<bits/stdc++.h>

int main() {

	int t;
	std::cin >> t;
	while(t--) {
		int x, y, p, q;
		std::cin >> x >> y >> p >> q;

		p *= 10;
		q *= 10;

		p += x;
		q += y;

		if(p < q)
			std::cout << "Chef\n";
		else if(p > q)
			std::cout << "Chefina\n";
		else if(p == q)
			std::cout << "Draw\n";
	}

	return 0;
}


// Sample Input 1 
// 3
// 10 8 2 3
// 10 10 10 10
// 40 21 2 0
// Sample Output 1 
// Chef
// Draw
// Chefina