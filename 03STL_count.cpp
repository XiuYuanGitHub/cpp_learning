#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<functional>

using namespace std;

void Demo_count()
{
	cout << "====================Demo_count===========================\n";

	const int VECTOR_SIZE = 8;
	typedef vector<string> stringVec;
	typedef vector<string>::iterator stringVecIt;

	stringVec NameVect(VECTOR_SIZE);
	stringVecIt start, end, it;

	ptrdiff_t result = 0;

	NameVect[0] = "She";
	NameVect[1] = "Sells";
	NameVect[2] = "Sea";
	NameVect[3] = "Shells";
	NameVect[4] = "by";
	NameVect[5] = "the";
	NameVect[6] = "Sea";
	NameVect[7] = "Shore";

	start = NameVect.begin();
	end = NameVect.end();

	cout << "NameVect{";
	for (it = start; it < end; it++)
	{
		cout << *it << " ";
	}
	cout << "}\n" << endl;

	result = count(start, end, "Sea");

	cout << "Number of elements that match \" Sea\" =" << result << endl;


}

bool Match_First_Char(const string& str)
{
	string s("S");
	return s == str.substr(0, 1);
}

void Demo_count_if()
{
	cout << "====================Demo_count if===========================\n";

	const int VECTOR_SIZE = 8;
	typedef vector<string> stringVec;
	typedef vector<string>::iterator stringVecIt;

	stringVec NameVect(8);
	stringVecIt start, end, it;

	ptrdiff_t result = 0;

	NameVect[0] = "She";
	NameVect[1] = "Sells";
	NameVect[2] = "Sea";
	NameVect[3] = "Shells";
	NameVect[4] = "by";
	NameVect[5] = "the";
	NameVect[6] = "Sea";
	NameVect[7] = "Shore";

	start = NameVect.begin();
	end = NameVect.end();

	cout << "NameVect{";
	for (it = start; it < end; it++)
	{
		cout << *it << " ";
	}
	cout << "}\n" << endl;

	result = count_if(start, end, Match_First_Char);

	cout << "Number of elements that begin with \"S\" =" << result << endl;

}



int main03()
{

	Demo_count();
	Demo_count_if();


	system("pause");
	return 0;
}