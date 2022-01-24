#include<bits/stdc++.h>

int main() {

	int t;
	std::cin >> t;
	while(t--) {

		int x, y, z;
		std::cin >> x >> y >> z;

		if(x + y < z)
			std::cout << "PLANEBUS\n";
		else if(x + y > z )
			std::cout << "TRAIN\n";
		else if(x + y == z)
			std::cout << "EQUAL\n";
	}

	return 0;
}


// Sample Input 1 
// 3
// 10 12 11
// 3 5 15
// 9 4 13
// Sample Output 1 
// TRAIN
// PLANEBUS
// EQUAL