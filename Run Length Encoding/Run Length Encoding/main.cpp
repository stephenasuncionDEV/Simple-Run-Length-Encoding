#include <iostream>
#include <string>

using namespace std;

string RLEcompress(string _b) {
	string _l = "";
	int _c = 1;

	for (int n = 0; n < _b.length(); n++) {
		if (_b[n] == _b[n + 1]) {
			_c++;
		}
		else {
			_l += _b[n];
			if (_c > 1)
				_l += to_string(_c);
			_c = 1;
		}
	}
	
	return _l;
}

int main()
{
	string buffer;
	cout << "Enter your string: ";
	cin >> buffer;

	string Compressed = RLEcompress(buffer);

	cout << "Compressed String: " << Compressed << endl;

	for (;;) {}
}