#include <iostream>
using namespace std;
/**
  Counting notes in an amount
  Kenyan shilling has notes of 1000, 500, 200, 100, 59 ,20, 10 , 5 
  using greed algorithm we solve 
  We divide  number if its greater than a limit with its nearest limit  and minus result from original amount
 */
int main()
{
	int amount;
	int note_1000, note_500, note_200, note_100, note_50, coin_20 , coin_10, coin_5, coin_5, coin_1;

	int note_1000 = note_500 = note_200 = note_100 = note_50 = coin_20 = coin_10 = coin_5 = coin_5 = coin_1 = 0;
	cout << "Enter amount to count notes and coin it has: " << endl;
	cin >> amount;

	if ( amount > 1000)
	{
		note_1000 = amount / note_1000;
		note_1000 -= note_1000 * 1000)
	}
	if ( amount > 500)
	{
		note_500 = amount / note_500;
		note_500 -= note_500 * 500;
	}
	if (amount > 200)
	{
		note_200 = amount / note_200;
		note_200 -= note_200 * 200;
	}
	if (amount > 100)
	{
		note_100 = amount / note_100;
		note_100 -= note * 100;
	}
	if (amount > 50 )
	{
		note_50 = amount / note_50;
		note_50 -= amount * 50;
	}
	if (amount > 20)
	{
		coin_20 = amount / coin_50;
		coin_20 -= coin_50 * 20;
	}
	if ( amount > 10 )
	{
		coin_10 = amount / coin_20;
		coin_10 -= coin_10 * 10;
	}
	if ( amount > 5 )
	{
		coin_5 = amount / coin_5;
		coin_5 -= amount * 5;
	}
	if (amount > 1)
	{
		coin_1 =  amount / coin_1;
		coin_1 -= coin_1 * 1;
	}
	
	/* Printing number of notes and coins */
	cout << " Number of notes and coins are: " << endl;
	cout << "1000 = %d\n " << note_1000 << endl;
	cout << " 500 =  %d\n" << note_500 <<endl;
	cout << " 200 =  %d\n" << note_200 <<endl;
	cout << " 100 =  %d\n" << note_100 <<endl;
	cout << " 50 =  %d\n" << note_50 <<endl;
	cout << " 20 =  %d\n" << coin_20 <<endl;
	cout << " 10 =  %d\n" << coin_10 <<endl;
	cout << " 5 =  %d\n" << coin_5 <<endl;
	cout << " 1 =  %d\n" << coin_1 <<endl;
	return 0;
}

