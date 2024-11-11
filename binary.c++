/*
time complexity is - O(log n )
in binary search we will have a sort algo then we find the mid value by ( low + high) / 2 and we check 
the mid == target  --> then terminate
else 

if target <  mid --> high = mid - 1 ;
if target > mid --> low = mod + 1;
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int binary_search(vector<int> &arr , int low , int high , int x)
{
    while(low<= high)
    {
        int mid= (low + high) / 2 ;

        if(arr[mid] == x)
        {
            return mid;
        }

        else if ( arr[mid] < x)
        {
            low = mid + 1 ; 
        }

        else { 
            high = mid  - 1;
        }
    }

    return -1 ; 
}


int main()
{
    vector<int> arr = {2,5,3,6,8,10};
    sort(arr.begin() , arr.end());

    for(int i = 0 ; i <arr.size(); i++)
    {
        cout<<arr[i]<< " ";
    }

    cout<<endl;

    int x ; 
    cin>>x;

    int result = binary_search(arr , 0 , arr.size() - 1 , x);

    if ( result == -1)
    {
        cout<<"element  is not found";
    }
    else{
        cout<<"element is found at index"<<result;
    }




    return 0 ;
    
}