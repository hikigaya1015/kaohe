/*#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
class vector {
private:
	double x, y;
public:
	vector(double a, double b) {
		x = a, y = b;
	}
	vector add(vector m)
	{
		return vector(x + m.x, y + m.y);
	}
	void print()
	{
		cout << "x=" << x << " " << "y=" << y << endl;
	}
	void dir()
	{
		double mo = sqrt(x * x + y * y);
		cout << fixed << setprecision(2)<< mo;
	}
};
int main()
{
	int m, n, i, j;
	cout << "请输入坐标"<<endl;
	cin >> m;
	cin >> n;
	cin >> i;
	cin >> j;
	vector a(m, n);
	vector b(i, j);
	vector c = a.add(b);
	cout << "向量之和",c.print();
	cout << "模长",c.dir();
	return 0;
}*/