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
	cout << "����������"<<endl;
	cin >> m;
	cin >> n;
	cin >> i;
	cin >> j;
	vector a(m, n);
	vector b(i, j);
	vector c = a.add(b);
	cout << "����֮��",c.print();
	cout << "ģ��",c.dir();
	return 0;
}*/