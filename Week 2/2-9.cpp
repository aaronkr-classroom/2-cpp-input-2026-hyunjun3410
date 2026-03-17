// 2-9 입력한 두 숫자 중 더 큰 숫자
#include<iostream>


int main(void) {

	int a, b;

	std::cout << "2개의 정수를 입력하세요." << std::endl;
	std::cin >> a >> b;

	if (a > b) {
		std::cout << "더 큰 숫자는" << a;
	}

	if (a < b) {
		std::cout << "더 큰 숫자는" << b;
	}
	
	if (a == b) {
		std::cout << "서로 같은 숫자입니다.";
	}

	return 0;
}