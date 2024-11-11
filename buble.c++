#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void bubble(vector<int>&arr)
{

int n = arr.size();
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < n - i - 1 ; j ++)
        {
            if(arr[j] > arr[j + 1])
            {
                swap(arr[j] ,arr[j + 1]);
            }
        }
    }
}

void printarr(vector<int>&arr)
{
    for(int i = 0 ; i <arr.size()  ; i ++)
    {
        cout<<arr[i]<< " "; 
    } 
}

int main()
{
    vector<int> arr = { 2,4,6,1,3,5};

    cout<<"the sorted"<<endl;

    bubble(arr);

    printarr(arr);

    return 0 ; 
}