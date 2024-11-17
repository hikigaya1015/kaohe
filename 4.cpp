/*#include <iostream>
using namespace std;

void jiance1(string s) { 
	int i = s.length() - 1;
	while (s[i] == '0') { 
		i--;
		if (i < 0) {
			cout << "0";
			return;
		}
	}
	while (i >= 0) {
		cout << s[i];
		i--;
	}
}
void jiance2(string s) { 
	int i = 0;
	while (s[i] == '0') { 
		if (i == s.length()) {
			cout << "0";
			return;
		}
	}
	for (int k = s.length() - 1; k >= i; k--) {
		cout << s[k];
	}
}
int main() {
	char a[25], b[25]; 
	char ch;
	int i = 0;
	while ((ch = getchar()) <= '9' && ch >= '0')
		a[i++] = ch;
	a[i] = 0; 
	jiance1(a);

	if (ch == '.') {
		cin >> b;
		cout << ".";
		(b);
	}
	else if (ch == '/') {
		cin >> b;
		cout << "/";
		jiance2(b);
	}
	else if (ch == '%')
		cout << "%";

	return 0;
}*/


