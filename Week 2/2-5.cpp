// 2-5 '*' 문자로 정사각형, 직사각형, 삼각형 형태 출력

#include<iostream>
#include<string>

int main(void) {

	//정사각형
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			std::cout << " *";
		}
		std::cout << std::endl;
	}
	
		std::cout << "\n\n";

	//직사각형
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j <= 5; j++) {
			std::cout << " *";
		}
		std::cout << std::endl;
	}
		std::cout << "\n\n";

	//삼각형
		for (int i = 0; i <= 6; i++) {
			for (int j = 1; j <= i + 1; j++) {
				std::cout << " *";
			}
			std::cout << std::endl;
	}

	return 0;
}