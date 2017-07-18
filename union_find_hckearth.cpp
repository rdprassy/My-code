
//written by rdprassy aka Devi Prasad Choudhary
// visit www.rdprassy.com to know more about him


//Problem  url: https://www.hackerearth.com/practice/data-structures/disjoint-data-strutures/basics-of-disjoint-data-structures/tutorial/
//technique: Union and find
//analysis : O(n) most probably

//hacker earth solution for union and find tutorial


//#include<cstdio>
#include<iostream>
//#include<cstring>
#include<algorithm>
using namespace std;

int size[10005];
int size1[10005];


void initialize( int arr[ ], int n)
    {
        for(int i = 0;i<=n;i++)
        {
    	arr[ i ] = i ;
    	size[ i ] = 1;
    	size1[i] = 1;
    	}

    }



int root (int arr[ ] ,int i)
    {
        while(arr[ i ] != i)
        {
            arr[ i ] = arr[ arr[ i ] ] ; 
    		i = arr[ i ]; 
        }

    return i;
    }



bool find(int arr[],int a,int b)
{


	if(root(arr,a)==root(arr,b))
		return true;
	else
		return false;

}



 
void w_union(int arr[],int size[],int a,int b)
{

	int root_a = root(arr,a);
	int root_b = root(arr,b);

	if(size[root_a] <= size[root_b])
	{

		arr[root_a]=arr[root_b];
		size[root_b]+=size[root_a];
		//size1[root_b]+=size1[root_a];
	}
	else
	{
		arr[root_b]=arr[root_a];
		size[root_a]+=size[root_b];
		//size1[root_a]+=size1[root_b];

	}

}

int main()
{
	
	int n,m;
	cin>>n>>m;
	int arr[n+2];

	initialize(arr,n+2);

	for(int i=0;i<m;i++)
	{
		int a,b;
		cin>>a>>b;

		/*for(int j=1;j<=n;j++)
			cout<<arr[j];*/

		w_union(arr,size,a,b);

		/*for(int j=1;j<=n;j++)
			size1[j]=size[j];*/


		//sort(size1,size1+n);
		int k=0;
		for(int j=1;j<=n;j++)
		{
			if(root(arr,j)==j)
				size1[k++]=size[j];
				//cout<<size1[j]<<" ";

		}

		sort(size1,size1+k);
		for(int j=0;j<k;j++)
			cout<<size1[j]<<" ";
		cout<<endl;

		/*cout<<"the size array becomes"<<endl;*/

		/*cout<<"the roots of the array are";

		for(int j=1;j<=n;j++)
			cout<<size[j];



		cout<<endl;*/


		/*cout<<"the size of the array are";

		for(int j=1;j<=n;j++)
			cout<<size[j];



		cout<<endl;*/





	}


	/*sort(size,size+n);
	
	for(int j=0;j<n;j++)
			cout<<size[j];

		cout<<root(arr,4);*/






	//cout<<"there";
	return 0;
}