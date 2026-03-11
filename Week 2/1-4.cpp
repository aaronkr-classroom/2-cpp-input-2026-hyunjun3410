// 1-4.cpp
#include <iostream>
#include<string>

int main(void) {
	{
		const std::string s = "a string";
		std::cout << s << std::endl;
		{
			const std::string s = "another string"; // 두번째 중괄호 안에 새로운 s생성 출력 > 내부블록 종료 > 내부s 소멸 
			std::cout << s << std::endl;
		}
	}
	return 0;
}