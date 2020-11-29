#include "Header.h"

//This only does single word strings.
//I suspect multiple word strings would use getline...

int main() {
	string str1;
	cout << "Please enter your string: \n";
	cin >> str1;
	for (int i = 0; str1[i] != '\0'; ++i)
	{
		if (str1[i] < 91 && str1[i]>64)
		{
			str1[i] = str1[i] + 32;
		}
	}
	cout << "All converted to lower case: " << str1 <<endl;

	for (int j = 0; str1[j] != '\0'; ++j)
	{
		if (str1[j] <= 122 && str1[j] >= 95)
			str1[j] = str1[j] - 32;
	}
	cout << "And all converted to upper case: " << str1 <<endl;
}