#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void selection(vector<int>&arr)
{
    int n = arr.size();
    for(int i = 0 ; i < n ; i ++)
    {
        int min = i ;

        for(int j = i + 1 ; j < n ; j++)
        {
            if(arr[j] < arr[min])
            {
                min = j ; 
            }
        }

        swap(arr[i] , arr[min]);
    }
}

void printarr(vector<int>&arr)
{

    for(int x : arr)
    {
        cout<<x<<" "; 
    }
    // return 0 ;

}

int main()
{
    vector<int> arr = { 23 ,45, 12,34,10};

    selection(arr);

    cout<<"sorted"<<endl;
     printarr(arr);
}