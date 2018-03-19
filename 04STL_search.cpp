#include<iostream>
#include<algorithm>
#include<array>
#include<vector>
#include<functional>

using namespace std;


int main()
{
	array<int, 8> test = { 3,5,7,7,11,6,17,19 };
	array<int, 2> t2 = { 11,6 };

	array<int, 8>::iterator it;

	it = search(test.begin(), test.end(), t2.begin(), t2.end());

	if (it != test.end())
	{
		cout << "1:" << it - test.begin() <<"  "<< *it << endl;
	}

	it = search_n(test.begin(), test.end(), 2, 7);

	if (it != test.end())
	{
		cout << "2:" << it - test.begin() << "  " << *it << endl;
	}

	it = search_n(test.begin(), test.end(), 2, 7, [](int i, int j) {return i > j; });

	if (it != test.end())
	{
		cout << "3:" << it - test.begin() << "  " << *it << endl;
	}

	system("pause");
	return 0;
}