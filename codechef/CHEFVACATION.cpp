#include<bits/stdc++.h>

int main() {
	
	int t;
	std::cin >> t;
	while(t--) {
		int x, y, z;
		std::cin >> x >> y >> z;

		int res = x + y;
		if(res <= z)
			std::cout << "YES\n";
		else
			std::cout << "NO\n";
	}

	return 0;
}



// Sample Input 1 
// 2
// 1 2 4
// 2 2 3
// Sample Output 1 
// YES
// NO