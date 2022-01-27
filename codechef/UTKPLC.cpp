#include<bits/stdc++.h>

int main() {
	
	int t;
	std::cin >> t;
	while(t--) {
		char f, s, th;
		std::cin >> f >> s >> th;
		char x, y;
		std::cin >> x >> y;

		int f1 = 0, s1 = 0, th1 = 0, f2 = 0, s2 = 0, th2 = 0, iamx = 0;

		if(x == f)
			f1++;
		else if(x == s)
			s1++;
		else if(x == th)
			th1++;

		if(y == f)
			f2++;
		else if(y == s)
			s2++;
		else if(y == th)
			th2++;

		if(f1)
			std::cout << x << '\n';
		else if(s1)
			std::cout << x << '\n';
		else if(f2)
			std::cout << y << '\n';
		else if(s2)
			std::cout << y << '\n';
		else if(th1)
			std::cout << x << '\n';
		else if(th2)
			std::cout << y << '\n';
	}	

	return 0;
}




// Sample Input 1 
// 2
// A B C
// A B
// B C A
// A C
// Sample Output 1 
// A
// C