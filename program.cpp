#include <iostream>

int silnia(int n){
	if(n <= 1){
		return 1;
	} else {
		return n*silnia(n-1);
	}
}

int main(){
	int x;
	std::cin >> x;
	if(x < 0){
		std::cout << "Podano liczbe ujemna, program zakonczony." << std::endl;
		return 1;
	}

	std::cout << silnia(x) << std::endl;
	return 0;
}
