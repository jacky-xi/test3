#include <iostream>
#include <Windows.h>
#include <string>

/*
1.��վ404����
2.��վ�۸Ĺ���
3.��վ������¼
4.DNS����
5.��������������
*/

using namespace std;
int main(void) {
	string name;
	string pwd;

	while (1)
	{
		system("cls");
		//�����˺�����
		std::cout << "�������û�����" << std::endl;
		std::cin >> name;

		std::cout << "����������:" << std::endl;
		std::cin >> pwd;

		//Ȩ����֤
		if (name == "54hk" && pwd == "201314")
		{
			break;
		}
		else {
			cout << "�û������������\n";
			system("pause");
		}
	}
	system("cls");
	std::cout << " 1.��վ404����" << std::endl;
	std::cout << " 2.��վ�۸Ĺ���" << std::endl;
	std::cout << " 3.��վ������¼" << std::endl;
	std::cout << " 4.DNS����" << std::endl;
	std::cout << " 5.��������������" << std::endl;
	


	system("pause");
	return 0;
}