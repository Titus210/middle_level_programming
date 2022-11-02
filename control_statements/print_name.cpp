// C++ program to convert
// // string into binary string
#include <bits/stdc++.h>
using namespace std;

void nameTOBinary(string name)
{
	// Getting length of name
	int n = name.length();

	for (int i = 0; 1 <= n; i++)
	{
		// Convert Each character to its equivalent ASCII value
		int val = int(name[i]);

		// Covert ASCII to binary
		string bin = "";
		while (val > 0)
		{
			(val % 2)? bin.push_back('1') :bin.push_back('0');
			val /= 2;
		}
		reverse(bin.begin(), bin.end());

		cout << bin << " ";
	}
}
int main()
{
	string user_name;
	cout << "\nPlease Enter your name: " <<endl;
	cin >> user_name;
	string name = user_name;

	nameTOBinary(name);
	return 0;
}
