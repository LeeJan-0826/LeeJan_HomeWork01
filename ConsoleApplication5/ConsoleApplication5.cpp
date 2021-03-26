#include<iostream>
using namespace std;
int factorial(int _n, int res)
{
	if (_n == 1 || _n == 0)
		return res;
	else
		return factorial(_n - 1, _n * res);
}
int main(int argc, char* argv[])
{
	std::cout << "请输入一个整数：" << endl;
	int input_nums = 0;
	cin >> input_nums;
	int ans = factorial(input_nums, 1);
	if (ans<0 || ans>INT_MAX)
		std::cout << "输入数字过大，已无法计算" << endl;
	else
		std::cout << input_nums << "的阶乘为" << ans << endl;
	system("pause");
	return 0;
}