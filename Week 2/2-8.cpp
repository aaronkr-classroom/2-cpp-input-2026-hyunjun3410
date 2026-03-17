// 2-8 [1, 10)범위의 숫자 곱하기
#include <iostream>

int main(void) {

	int result = 1; 

	for (int i = 1; i < 10; i++) {
		result = result * i;
	}

	std::cout << "[1, 10)범위에 숫자를 곱한 값은" << result;

	return 0;
	
}