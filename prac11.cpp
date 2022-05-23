#include <bits/stdc++.h>
using namespace std;

void swap(int *a,int *b);
void heapify(vector<int> &hT,int i);
void insert(vector<int> &ht,int newNum);

/*
Heap is a special case of binary tree data structure where the root-node key is compared with
its children and arranged accordingly.
*/

int main()
{
    vector<int> heapTree;
    int no,marks;
    cout<<"Enter the no. of students : ";
    cin>>no;
    for(int i  = 0;i<no;i++)
    {
        cout<<"Enter the marks of student "<<i+1<<" : ";
        cin>>marks;
        insert(heapTree, marks);
    }
    int size = heapTree.size();
    cout<<"Max Marks Obtained are : "<<heapTree[0]<<"\n";
    cout<<"Min Marks Obtained are : "<<heapTree[size-1]<<"\n";
}

/*
There are two types of heap data structure i.e. min heap and max heap based on the comparison 
of the values of parent and child.
Min Heap - root node < child node; diagram
Max Heap - root node > child node; diagram
*/

void swap(int *a, int *b)
{
    int temp = *b;
    *b = *a;
    *a = temp;
}

void heapify(vector<int> &hT, int i)
{
    int size = hT.size();
    int largest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;
    if (l < size && hT[l] > hT[largest])
    {
        largest = l;
    }
    if (r < size && hT[r] > hT[largest])
    {
        largest = r;
    }
    if (largest != i)
    {
        swap(&hT[i], &hT[largest]);
        heapify(hT, largest);
    }
}

/*
Max Heap Construction Algorithm
s1 - Create a new node at the end of the heap.
s2 - Assign new value to the node
s3 - Compare its value with the parent
s4 - If value is greater than parent then swap
s5 - repeat s3 and s4 until heap property is maintained 
*/


void insert(vector<int> &hT, int newNum)
{
    int size = hT.size();
    if (size == 0)
    {
        hT.push_back(newNum);
    }
    else
    {
        hT.push_back(newNum);
        for (int i = size / 2 - 1; i >= 0; i--)
        {
            heapify(hT, i);
        }
    }
}
