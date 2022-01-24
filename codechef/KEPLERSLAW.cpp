#include<bits/stdc++.h>

int main() {

	int t;
	std::cin >> t;
	while(t--) {
		int t1, t2, r1, r2;
		std::cin >> t1 >> t2 >> r1 >> r2;

		int t1sq = t1 * t1;
		int t2sq = t2 * t2;
		int r1cu = r1 * r1 * r1;
		int r2cu = r2 * r2 * r2;

		float k1 = r1cu / t1sq;
		float k2 = r2cu / t2sq;

		if(k1 == k2)
			std::cout << "Yes\n";
		else
			std::cout << "No\n";
	}

	return 0;
}



// Sample Input 1 
// 3
// 1 1 1 1
// 1 2 3 4
// 1 8 2 8
// Sample Output 1 
// Yes
// No
// Yes