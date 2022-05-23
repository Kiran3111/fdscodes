#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n = 5, m;
    string cityName[n];
    cout<<"Enter the time required to travel and name of 5 cities."<<endl;
    cout<<"Enter the no. of connected cities(no. of edges) : ";
    cin>>m;
    for(int i = 0;i<n;i++)
    {
        cout<<"Enter the name of city "<<i+1<<" : ";
        cin>>cityName[i];
    }
    
    cout<<"Listed Cities are : \n";
    for(int i = 0;i<n;i++)
    {
        cout<<i+1<<" - "<<cityName[i]<<endl;
    }


	int adjMat[5][5] = {0};
	for(int i = 0; i < 2*m; i++)
    {
        cout<<"Enter the no. of two cities connected : ";
		int u , v ;
		cin >> u >> v ;
		adjMat[u-1][v-1] = 1 ;
		adjMat[v-1][u-1] = 1 ;
	}
    cout<<endl;

    char yn;
    cout<<"Are all cities connected to connected to each other(y/n) : ";
    cin>>yn;

    cout<<endl;

    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<n;j++)
        {
            if(j==0)
            {
                cout<<cityName[i]<<" -> ";
            }
            if(adjMat[i][j]==1)
            {
                cout<<cityName[j]<<" -> ";
            }
        }
        cout<<"|\n";
    }

    (yn=='y')?cout<<"\nGraph is Connected\n":cout<<"\nGraph is disconnected\n";
	return 0;
}

/*
OUTPUT : 

Enter the time required to travel and name of 5 cities.
Enter the no. of connected cities(no. of edges) : 4    
Enter the name of city 1 : Pune
Enter the name of city 2 : Mumbai
Enter the name of city 3 : Nagpur
Enter the name of city 4 : Nashik
Enter the name of city 5 : Sinnar
Listed Cities are :
1 - Pune
2 - Mumbai
3 - Nagpur
4 - Nashik
5 - Sinnar
Enter the no. of two cities connected : 1 2
Enter the no. of two cities connected : 2 1
Enter the no. of two cities connected : 3 4
Enter the no. of two cities connected : 3 5
Enter the no. of two cities connected : 4 3
Enter the no. of two cities connected : 4 5
Enter the no. of two cities connected : 5 3
Enter the no. of two cities connected : 5 4

Are all cities connected to connected to each other(y/n) : n
Pune -> Mumbai -> |
Mumbai -> Pune -> |
Nagpur -> Nashik -> Sinnar -> |
Nashik -> Nagpur -> Sinnar -> |
Sinnar -> Nagpur -> Nashik -> |
Graph is disconnected

*/
