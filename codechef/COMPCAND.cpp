#include<bits/stdc++.h>

int main() {
	
	int t;
	std::cin >> t;
	while(t--) {
		int n, k;
		std::cin >> n >> k;

		if(n % k == 0)
			std::cout << n / k << '\n';
		else
			std::cout << "-1\n";
	}

	return 0;
}

// Sample Input 1 
// 3
// 3 1
// 3 2
// 0 3
// Sample Output 1 
// 3
// -1
// 0