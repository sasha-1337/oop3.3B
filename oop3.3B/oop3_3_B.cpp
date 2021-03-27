#include "Money.h"
int main()
{
	Money sum1, sum2, x(1,1);
	cout << " -------- FIRST SUMM -------- " << endl;
	cin >> sum1;
	cout << " -------- SECOND SUMM -------- " << endl;
	cin >> sum2;

	cout << " -------- FIRST SUMM -------- " << endl;
	cout << sum1;
	cout << " TOTAL - " << sum1.get_sum() << endl << endl;

	cout << " -------- SECOND SUMM -------- " << endl;
	cout << sum2;
	cout << " TOTAL - " << sum2.get_sum() << endl << endl;

	sum1.SetFirst(sum1.get_sum());
	sum2.SetSecond(sum2.get_sum());


	if (sum1 > sum2)
		cout << " SUMM1 > SUMM2 " << endl;
	else
		if(sum1 < sum2)
			cout << " SUMM1 < SUMM2 " << endl;
		else
			if (sum1 == sum2)
				cout << " SUMM1 == SUMM2 " << endl;
	
	double res = sum1 / sum2;
	cout << " DIVIDE = " << setprecision(3) << res << endl;

	return 0;
}