#include<bits/stdc++.h>

int main() {
		
	int t;
	std::cin >> t;
	while(t--) {
		int a, b;
		std::cin >> a >> b;

		if((a + b) % 2 == 0)
			std::cout << "Bob\n";
		else
			std::cout << "Alice\n"; 
	}	

	return 0;
}


// Sample Input 1 
// 2
// 1 1
// 1 2
// Sample Output 1 
// Bob
// Alice