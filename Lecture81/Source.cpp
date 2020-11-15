#include "Header.h"

double count(int n) {
	double remainder1 = 0.0;
	int count = 0;
	while (n > 0) {
		remainder1 = n % 10;
		n /= 10;
		++count;
	}
	return count;
}

int main() {
	int n = 0;
	int sum = 0;
	int another = 0;
	double remainder = 0;
	cout << "Please enter n\n";
	cin >> n;
	cout << count(n) << " digits in the input."<< endl;
	double counted = count(n);
	int m = n;
	while (n > 0) {
		remainder = n % 10;
		n /= 10;
		sum += (pow(remainder, counted));
	}
	cout << sum << endl;
	if (sum == m)
		cout << "It's Armstrong!\n";
	else
		cout << "Not an Armstrong number\n";
	return 0;
}