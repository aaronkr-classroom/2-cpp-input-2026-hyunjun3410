//2-6 다음 코드는 어떤 동작을 실행할까요?

#include<iostream>

int main(void) {

	int i = 0; // i 선언

	// 1부터 10까지 카운트업 하는 프로그램
	while (i < 10) { // i의 범위
		i += 1; // i + 1이 10이 될 때까지 반복
		std::cout << i << std::endl; // 연산이 끝날 때까지 i값을 출력 > 줄바꿈. (1부터 10까지)
	}

	return 0;
} 