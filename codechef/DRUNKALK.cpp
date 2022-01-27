#include<bits/stdc++.h>

int main() {
	
	int t;
	std::cin >> t;
	while(t--) {
		int k;
		std::cin >> k;

		int pos = 0;
		while(k) {
			if(k % 2 == 1)
				pos += 3;
			else
				pos -= 1;
			k--;
		}
		std::cout << pos << '\n';
	}

	return 0;
}


// Sample Input 1 
// 3
// 5
// 11
// 23
// Sample Output 1 
// 7
// 13
// 25