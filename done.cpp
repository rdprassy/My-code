#include <bits/stdc++.h>
using namespace std;

int main()
{

	int n;
	set< string> words;
	scanf("%d\n",&n);
	while(n--)
	{
		string s,temp;

		getline(cin,s);

		for(int i=0;i<(int)s.size();i++)
		{

			if(isalpha(s[i]))
			{
				s[i] =tolower(s[i]);
				
			}
			else
			{
				s[i]=' ';
			}
		}

		stringstream ss(s);

		while(ss >> temp)
		{
			words.insert(temp);
		}




	}

	cout<<int(words.size()) <<endl;
	for(set <string>:: iterator it = words.begin();it!=words.end() ;it++ )
	{

		cout<<*it <<'\n';
	}




	return 0;

}