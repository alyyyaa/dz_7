//Поменять местами слова в строке
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

void main() {
	string S;
	getline(cin, S);
	string R("");
	int i(S.size() - 1), l;
	while (i >= 0) {
		l = i;
		while (i >= 0 && S[i] != ' ') i--;
		R += " " + S.substr(i + 1, l - i);
		i--;
	}
	R.erase(0, 1);
	cout << R;
}
