#include<bits/stdc++.h>

int main() {

	int t;
	std::cin >> t;
	while(t--) {
		int a1, a2, b1, b2, c1, c2;
		std::cin >> a1 >> a2;
		std::cin >> b1 >> b2;
		std::cin >> c1 >> c2;

		long long aBig = a1 + a2;
		long long bBig = b1 + b2;
		long long cBig = c1 + c2;

		if(aBig >= bBig && aBig >= cBig)
			std::cout << aBig << '\n';
		else if(bBig >= aBig && bBig >= cBig)
			std::cout << bBig << '\n';
		else if(cBig >= aBig && cBig >= bBig)
			std::cout << cBig << '\n';
	}

	return 0;
}



// 3
// 3 6
// 5 10
// 8 7
// 99 1
// 55 55
// 33 51
// 54 146
// 5436 627
// 1527 5421


// 15
// 110
// 6948