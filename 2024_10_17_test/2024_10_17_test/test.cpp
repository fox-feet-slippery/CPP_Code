#define _CRT_SECURE_NO_WARNINGS 1
#include"Date.h"


int main()
{
	/*Date d1(2024, 10, 17);
	Date d2(2024, 10, 17);

	d1.Print();
	d1 += 100;
	d1.Print();

	cout << endl;

	d2.Print();
	d2 + 100;
	d2.Print();
	d2 = d2 + 100;
	d2.Print();

	cout << endl;

	Date d3(2024, 10, 17);
	Date d4 = d3 + 100;
	d4.Print();
	d3.Print();

	cout << endl;

	d1 -= 100;
	d1.Print();
	d1 -= 100;
	d1.Print();

	cout << endl;

	Date d5(2024, 10, 17);
	d5.Print();
	d5 += 10000;
	d5.Print();
	d5 -= 10000;
	d5 -= 10000;
	d5.Print();

	cout << endl;*/

	/*Date d1(2024, 10, 17);
	Date ret1 = d1++;
	d1.Print();
	ret1.Print();
	Date ret2 = ++d1;
	d1.Print();
	ret2.Print();*/

	/*Date d1(2024, 10, 17);
	Date d2(2004, 2, 13);
	Date d3(2003, 11, 7);
	int ret1 = d1 - d2;
	int ret2 = d1 - d3;
	cout << ret1 << endl;
	cout << ret2 << endl;*/

	Date d1(2024, 10, 18);
	Date d2(2004, 2, 13);
	Date d3(2003, 11, 7);
	int ret1 = d1 - d2;
	int ret2 = d1 - d3;
	cout << ret1 << endl;
	cout << ret2 << endl;
	
	/*d1 << cout;
	d1.operator<< (cout);*/
	
	//cout << d1;
	cout << d1 << d2 << d3 << endl;
	Date d4;
	cin >> d4;
	cout << d4;

	return 0;
}
