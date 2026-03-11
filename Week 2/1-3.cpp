#include <iostream>
#include <string>

int main()
{
	{
		const std::string s = "a string";
		std::cout << s << std::endl;
	} // 중괄호로 상수 종료
	{
		const std::string s = "another string";
		std::cout << s << std::endl;
	}
	return 0;
} 