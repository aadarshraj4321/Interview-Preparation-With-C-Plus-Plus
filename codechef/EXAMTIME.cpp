#include<bits/stdc++.h>

int main() {

	int t;
	std::cin >> t;
	while(t--) {
		int Ddsa, Dtoc, Dmath;
		std::cin >> Ddsa >> Dtoc >> Dmath;
		int Sdsa, Stoc, Smath;
		std::cin >> Sdsa >> Stoc >> Smath;

		int DtotaScore = Ddsa + Dtoc + Dmath;
		int StotalScore = Sdsa + Stoc + Smath;

		if(DtotaScore > StotalScore)
			std::cout << "Dragon\n";
		else if(DtotaScore < StotalScore)
			std::cout << "Sloth\n";
		else if(DtotaScore == StotalScore){
			if(Ddsa > Sdsa)
				std::cout << "Dragon\n";
			else if(Ddsa < Sdsa)
				std::cout << "Sloth\n";
			else if(Ddsa == Sdsa) {
				if(Dtoc > Stoc)
					std::cout << "Dragon\n";
				else if(Dtoc < Stoc)
					std::cout << "Sloth\n";
				else if(Dtoc == Stoc)
					std::cout << "Tie\n";
			}
		}
	}

	return 0;
}



// 4
// 10 20 30
// 30 20 10
// 5 23 87
// 5 23 87
// 0 15 100
// 100 5 5
// 50 50 50
// 50 49 51


// SLOTH
// TIE
// DRAGON
// DRAGON