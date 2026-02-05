#include<iostream>
#include<cctype>
#include<iomanip>
using namespace std;
int main() {
	double s = 0;
	int n = 0;
	double a;
	while (cin >> a && a != -1) {
		if (n > 0 && n < 10 && a > s / n)
		{
			cout << fixed << setprecision(2) << a << "被录用了。" << endl;
			n++;
			s = (s + a);
		}
		else if (0 == n && a >= 3.50)
		{
			cout << fixed << setprecision(2) << a << "被录用了。" << endl;
			n++;
			s = (s + a);
		}
		else if (n >= 10)
		{
			cout << fixed << setprecision(2) << a << "未被录用。" << endl;
		}
		else
		{
			cout << fixed << setprecision(2) << a << "未被录用。" << endl;
		}
	}

	return 0;

}