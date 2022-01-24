#include<bits/stdc++.h>

int main() {

	int t;
	std::cin >> t;
	while(t--) {
		int Xa, Xb, Xc;
		std::cin >> Xa >> Xb >> Xc;

		if(Xa > 50)
			std::cout << "A\n";
		else if(Xb > 50)
			std::cout << "B\n";
		else if(Xc > 50)
			std::cout << "C\n";
		else
			std::cout << "NOTA\n";
	}

	return 0;
}