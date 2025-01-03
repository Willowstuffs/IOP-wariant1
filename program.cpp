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
	std::cout << silnia(x) << std::endl;
	return 0;
}
