#include <iostream>
#include <cmath>

using namespace std;

int main()
{


	/*
	int n;
	cout << "Vnesi ja vrednosta na n : ";
	cin >> n;

	for (int i = 1; i <= n/2 ; i++)

		if ( n % i == 0 )

		cout << i << " " << endl;

	cout << n << endl;
	*/



	/*
	int n, sum = 0;;

	cout << "Vnesi ja vrednosta na n : ";
	cin >> n;

	for (int i = 1; i <= n / 2; i++)

		if (n % i == 0)
			sum += i;

	sum += n;

	cout << "\nZbirot na site deliteli e : " << sum << endl;
	*/


	//Da se dokazhe dali prirodniot broj e sovrshen

	/*
	int n, sum = 0;

	cout << "Vnesi ja vrednosta na n : ";
	cin >> n;

	for (int i = n; i <= n/2 ; i++)

		if (n % i == 0)
			sum += i;

	if (sum == n)
			cout << "\nPrirodniot broj " << n << " e sovrshen" << endl;

	else
		cout << "\nPrirodniot broj " << n << " ne e sovrshen" << endl;
	*/

	/*
	for (int i = 1; i <= 5; i++)
	{
		cout << endl;
		for (int j = 1; j <= 5; j++)
			cout << i << j << " ";
	}
	*/

	/*
	int n, a, b, sum;

	a = 0;

	b = 100;

	cout << "Vnesi ja vrednosta na n : ";
	cin >> n;


	for (n = a; n <= b; n++)
	{
		sum = 0;

		for (int i = n; i <= n / 2; i++)

			if (n % i == 0)
				sum += i;

		if (sum == n)
			cout << "\nPrirodniot broj " << n << " e sovrshen" << endl;

		else
			cout << "\nPrirodniot broj " << n << " ne e sovrshen" << endl;

	}
	*/

	/*
	int n;

	cout << "Vnesi ja vrednosta na n : ";
	cin >> n;

	for (int i = 2; i <= n / 2; i++)
	{


		if (n % i == 0)
			cout << "\nBrojot " << n << " e prost broj" << endl;
		break;

		continue;
		if(n % i == 1)
			cout << "\nBrojot " << n << " e slozhen broj" << endl;

	}
	*/


	/*
    int n, a, b;


	cout << "Vnesi ja vrednosta na a : ";
	cin >> a;

	cout << "Vnesi ja vrednosta na b : ";
	cin >> b;


	for (n = a; n <= b; n++)
	{
		for (int i = n; i <= n / 2; i++)
		{
			if (n % 1 == 0)
				break;

		}
		if (i == (n / 2 + 1))
			cout << "\nBrojot " << n << " e prost broj" << endl;

		else
			cout << "\nBrojot " << n << " e slozhen broj" << endl;
	}
	*/




























	cin.get(); cin.get();

	return 0;

}