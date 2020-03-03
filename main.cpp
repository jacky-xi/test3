#include <iostream>
#include <Windows.h>
#include <string>

/*
1.网站404攻击
2.网站篡改攻击
3.网站攻击记录
4.DNS攻击
5.服务器重启攻击
*/

using namespace std;
int main(void) {
	string name;
	string pwd;

	while (1)
	{
		system("cls");
		//输入账号密码
		std::cout << "请输入用户名：" << std::endl;
		std::cin >> name;

		std::cout << "请输入密码:" << std::endl;
		std::cin >> pwd;

		//权限验证
		if (name == "54hk" && pwd == "201314")
		{
			break;
		}
		else {
			cout << "用户名或密码错误！\n";
			system("pause");
		}
	}
	system("cls");
	std::cout << " 1.网站404攻击" << std::endl;
	std::cout << " 2.网站篡改攻击" << std::endl;
	std::cout << " 3.网站攻击记录" << std::endl;
	std::cout << " 4.DNS攻击" << std::endl;
	std::cout << " 5.服务器重启攻击" << std::endl;
	


	system("pause");
	return 0;
}