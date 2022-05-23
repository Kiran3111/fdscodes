#include <iostream>
using namespace std;

const int SIZE = 10; //size of the hash table

int hashFunc(int key,int arr[]);
int search(int key,int arr[]);
int del(int key,int arr[]);
void insert(int key,int arr[]);
void print(int arr[]);

int main()
{
    int myArr[SIZE] = {0},ele,key;
    cout<<"Enter the Number of elements under 10 to be inserted : ";
    cin>>ele;
    while(ele--)
    {
        cin>>key;
        insert(key,myArr);
    }
    print(myArr);
    cout<<"\nEnter the element to be searched : ";
    cin>>key;
    (search(key,myArr)==key)?cout<<"Element Found\n":cout<<"Key Not Found\n";
    cout<<"\nEnter key to be deleted : ";
    cin>>key;
    (del(key,myArr)==1)?cout<<"Key Deleted\n":cout<<"Key not found\n";
    print(myArr);

    return 0;
}

//hash function
int hashFunc(int key,int arr[])
{
    return key%SIZE;
}


//search operation
int search(int key,int arr[])
{
    if(arr[key]==key)
    {
        return arr[key];
    }
    else{
        for(int i = key+1;i<SIZE;i++)
        {
            if(arr[i]==key)
            {
                return arr[i];
            }
        }
        return -1;
    }
}


//delete operation
int del(int key,int arr[])
{
    if(arr[key]==key)
    {
        arr[key] = 0;
        return 1;
    }
    else{
        for(int i = key+1;i<SIZE;i++)
        {
            if(arr[i]==key)
            {
                arr[i] = 0;
                return 1;
            }
        }
        return -1;
    }
}


//insert operation
void insert(int key,int arr[])
{
    if(arr[key]==0)
    {
        arr[key] = key;
        return;
    }
    else{
        for(int i = key+1;i<SIZE;i++)
        {
            if(arr[i]==0)
            {
                arr[i] = key;
                return;
            }
        }
    }
}


//print hash table
void print(int arr[])
{
    cout<<"Hash Table is : ";
    for(int i = 0;i<SIZE;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
