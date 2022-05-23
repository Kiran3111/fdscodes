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

/*
practical:

Title:
There arc flight paths between cities. If there is a night between city A and city B then there is an edge between the cities. The cost of the edge can be the time that flight take to reach city B from A. or the amount of fuel used for the journey. Represent this as a graph. The node can be represented by airport name or name of the city. Use adjacency list representation of the graph or use adjacency matrix representation of the graph. Justify the storage representation used.
Objectives:
I. To understand concept of Graphdata structure
2. To understand concept of representation of graph.
Learning Objectives: 
	To understand concept of Graph data structure
	To understand concept of representation of graph.

Theory: 
Graphs are the most general data structure. They are also commonly used data structures.
Graph definitions:
	A non-linear data structure consisting of nodes and links between nodes.
Undirected graph definition:

•	An undirected graph is a set of nodes and a set of links between the nodes.
•	Each node is called a vertex, each link is called an edge, and each edge connects two vertices.
•	The order of the two connected vertices is unimportant.
•	An undirected graph is a finite set of vertices together with a finite set of edges. Both sets might be empty, which is called the empty graph.


fig 1

Graph Implementation:
Different kinds of graphs require different kinds of implementations, but the fundamental concepts of all graph implementations are similar. Well look at several representations for one particular kind of graph: directed graphs in which loops are allowed.
Representing Graphs with an Adiacency Matrix

fig2

Definition:
•	An adjacency matrix is a square grid of true/false values that represent the edges of a graph.
•	If the graph contains n vertices, then the grid contains n rows and n columns.
•	For two vertex numbers i and j, the component at row i and column j is true if there is an edge from vertex i to vertex j; otherwise, the component is false.
We can use a two-dimensional array to store an adjacency matrix: bouleanilli adjacent = new booleanl4ll4l;
Once the adjacency matrix has been set, an application can examine locations of the matrix to determine which edges arc present and which are missing.


Representing Graphs with Edge Lists

fig 3

Definition:
•	A directed graph with n vertices can be represented by n different linked lists.
•	List number i provides the connections for vertex i.
•	For each entry j in list number i, there is an edge from i to j.
Loops and multiple edges could be allowed.
Representing Graphs with Edge Sets
To represent a graph with n vertices, we can declare an array of n sets of integers. For example: ilialitimagE
•	ns = new IntSet1101; // 10 vertices

A set such as connections[i] contains the vertex numbers of all the vertices to which vertex i is connected.
Software Required: g++ / gcc compiler- / 64 bit Fedora, eclipse IDE
Input: I.Number of cities.
2.Time required to travel from one city to another.
Output: Create Adjacency matrix to represent path between various cities. Conclusion: This program gives us the knowledge of adjacency matrix graph.
Questions asked in university exam. 
I. What are different ways to represent the graph? Give suitable example. 2. What is time complexity of function to create adjacency matrix?


*/
