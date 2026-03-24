#include <iostream>
using namespace std;
int main()
{
	enum day{Mon,Tue,Wed,Thu,Fri,Sat,Sun};
	day workDay;
	double times,wages,hourlyRate,hours;

	day& operator++()
	{
		++value;
		return *this;
	}

	day operator++(int)
	{
		day tmp=*this;
		++(*this);
		return tmp;
	}




	cout<<"Enter the hourly wages rate"<<endl;
	cin>>hourlyRate;
	cout<<"Enter hours worked daily\n";
	for(workDay=Mon;workDay<=Sun;workDay++)
	{
		cin>>hours;
		switch(workDay)
		{
			case Sat:times=1.5*hours;break;
			case Sun:times=2.0*hours;break;
			default: times=hours;
		}
		wages=wages+times*hourlyRate;
	}
	cout<<"the wages for the week are"<<wages;
	return 0;
}


