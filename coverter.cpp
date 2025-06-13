#include<iostream>
using namespace std;

long long int power(int a, int b)//power function which return ans in long long int
{
	if (b == 0)
		return 1;
	long long int ans = a;
	for (int i = 1;i < b;i++)
	{
		ans = ans * a;
	}
	return ans;
}
long long int binary(int a)//function for decimal to binary conversion
{
	int temp = a;
	long long int ans = 0;
	int counter = 0;
	while(temp!=1)
	{
		ans = ans+(temp % 2) * power(10, counter);
		temp = temp / 2;

		counter++;
		
 }
	ans = ans+(temp % 2) * power(10, counter);
	return ans;
}
int main()
{
	
	int num;
	cout << "enter decimal number to convert from :";
	try {
		cin >> num;
		if (num < 0)
			throw exception("error");
	}
	catch (exception)
	{
		cout << "binary not available for negative numbers" << endl;
		return 0;
	}
	cout << binary(num) << endl;
}