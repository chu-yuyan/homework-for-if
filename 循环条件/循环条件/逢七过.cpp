#include<iostream>
#include<cctype>
#include<iomanip>
using namespace std;
int main() {
	int a, b;
	cin >> a >> b;
	int n = 0;

	for (int i = a; i <= b; i++)
	{
		int bei = 1;
		if (0 == i % 7)
		{
			n++;
			cout << i << " ";
			continue;
		}


		else
		{

			while (i >= bei)
			{
				if (7 == (i / bei) % 10)
				{
					n++;
					cout << i << " ";
					break;
				}

				bei = bei * 10;



			}

		}

	}
	cout << "一共有" << n << "个数字需要说“过”。";
	return 0;

}