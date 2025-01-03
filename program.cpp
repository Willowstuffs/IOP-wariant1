#include <iostream>

int main(){
	int x;
	std::cin >> x;
	if(x < 0){
		std::cout << "Podano liczbe ujemna, program zakonczony." << std::endl;
		return 1;
	}

	std::cout << x << std::endl;
	return 0;
}
