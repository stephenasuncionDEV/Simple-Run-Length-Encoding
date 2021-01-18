# Simple-Run-Length-Encoding
Made in C++

![image](https://i.postimg.cc/6QYWFCGp/Screenshot-1.png);

How to use:
```
int main()
{
	string buffer;
	cout << "Enter your string: ";
	cin >> buffer;

	string Compressed = RLEcompress(buffer);

	cout << "Compressed String: " << Compressed << endl;

	for (;;) {}
}
```
