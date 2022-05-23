#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5, m;
    string cityName[n];
    cout << "Enter the time required to travel and name of 5 cities." << endl;
    cout << "Enter the no. of connected cities(no. of edges) : ";
    cin >> m;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the name of city " << i + 1 << " : ";
        cin >> cityName[i];
    }

    cout << "Listed Cities are : \n";
    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << " - " << cityName[i] << endl;
    }

    int adjMat[5][5] = {0};
    for (int i = 0; i < 2 * m; i++)
    {
        cout << "Enter the no. of two cities connected : ";
        int u, v,time;
        cin >> u >> v;
        cout<<"Enter the time required to travel between these two cities : ";
        cin>>time;
        adjMat[u - 1][v - 1] = time;
        adjMat[v - 1][u - 1] = time;
    }
    cout << endl;

    char yn;
    cout << "Are all cities connected to connected to each other(y/n) : ";
    cin >> yn;

    cout << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j == 0)
            {
                cout << cityName[i] << " -> ";
            }
            if (adjMat[i][j] != 0)
            {
                cout << cityName[j] << " -> ";
            }
        }
        cout << "|\n";
    }

    (yn == 'y') ? cout << "\nGraph is Connected\n" : cout << "\nGraph is disconnected\n";
    return 0;
}

/*

OUTPUT : 
Enter the time required to travel and name of 5 cities.
Enter the no. of connected cities(no. of edges) : 4    
Enter the name of city 1 : Pune
Enter the name of city 2 : Mumbai
Enter the name of city 3 : Nagput
Enter the name of city 4 : Nashik
Enter the name of city 5 : Sinnar
Listed Cities are :
1 - Pune
2 - Mumbai
3 - Nagput
4 - Nashik
5 - Sinnar
Enter the no. of two cities connected : 1 2
Enter the time required to travel between these two cities : 5
Enter the no. of two cities connected : 2 1
Enter the time required to travel between these two cities : 6
Enter the no. of two cities connected : 3 4
Enter the time required to travel between these two cities : 5
Enter the no. of two cities connected : 3 5
Enter the time required to travel between these two cities : 4
Enter the no. of two cities connected : 4 3
Enter the time required to travel between these two cities : 8
Enter the no. of two cities connected : 4 5
Enter the time required to travel between these two cities : 9
Enter the no. of two cities connected : 5 3
Enter the time required to travel between these two cities : 8
Enter the no. of two cities connected : 5 4
Enter the time required to travel between these two cities : 9

Are all cities connected to connected to each other(y/n) : n

Pune -> Mumbai -> |
Mumbai -> Pune -> |
Nagput -> Nashik -> Sinnar -> |
Nashik -> Nagput -> Sinnar -> |
Sinnar -> Nagput -> Nashik -> |

Graph is disconnected

*/
