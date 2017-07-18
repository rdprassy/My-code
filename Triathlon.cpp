#include<bits/stdc++.h>

using namespace std;

bool sortbysec(const pair<long long,long long> &a,
              const pair<long long,long long> &b)
{
    return (a.second > b.second);
}


int main()
{
	vector<pair<long long,long long>> v;
	long long n;
	cin>>n;
	long long a[n],e[n],maxsum=1<<25,t=0,minelem=0;
	for(int i=0;i<n;i++)
	{
		int b,c,d,sum=0;
		cin>>b>>c>>d;
		sum=c+d;
		e[i]=sum;
		a[i]=b;
		v.push_back(make_pair(a[i],e[i]));

	}
		sort(v.begin(),v.end(),sortbysec);
		long long tot=0,rans=0;


		for(long long i=0;i<n;i++)
		{
			long long ans=0;
			tot+=v[i].first;
		//	cout<<v[i].first<<"   "<< v[i].second<<endl;
			ans=tot+v[i].second;

			if(ans>rans)
				rans=ans;





		}


	/*	t+=b;

		if (maxsum>sum)
		{
			maxsum=sum;
			minelem=b;
			
		}


		
		//if()


	}

	cout<<maxsum+t;*/

	cout<<rans<<endl;


	return 0;
}