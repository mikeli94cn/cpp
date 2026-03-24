#include <vector>
#include <cstdio>
#include <iostream>
#include <string>

using std::vector;
using std::cout;
using std::string;

int main()
{
	vector<int> vi;
	for(int i=1;i<=100;i++)
	{
		vi.push_back(i);
	}
	for(int i=1;i<=100;i++)
	{
		printf("%d\n",vi[i-1]);
	}
	printf("the vector length is %ld\n",vi.size());

	printf("the vector is empty? %d\n",vi.empty());
	cout<<vi.empty();

	string s1;
	s1="hello world";
	cout<<s1;
	
}
