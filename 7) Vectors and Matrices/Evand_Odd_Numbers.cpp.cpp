
#include <iostream>

using namespace std;

int nums[10] = {};
int even = 0;
int odd = 0;
int evans[10] = {};
int odds[10] = {};

int main()
{
	cout << " Insira 10 numeros inteiros: " << endl ;

	for (int i = 0; i < 10; i++)
	{
		cin >> nums[i];

		if (nums[i] % 2 == 0)
		{
			evans[even] = nums[i];
			even++;
		}
		else
		{
			odds[odd] = nums[i];
			odd++;
		}
	}
	cout << endl << "Numeros pares: " << endl;
	for (int num : evans)
	{
		if(num != 0)
		cout << num << endl;
	}
	cout << endl;

	cout << endl << "Numeros impares: " << endl;
	for (int num : odds)
	{
		if(num != 0)
		cout << num << endl;
	}
}
