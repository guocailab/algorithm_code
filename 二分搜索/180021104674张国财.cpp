
#include <iostream>
using namespace std; 
int binarySearch(int list[],int left,int right,int number)
{
    while(left<right)
    {
        int mid=(right+left)/2;
        if(list[mid] == number)
        {
            return mid;
        }
        else if(number > list[mid])
        {
            left=mid+1;
        }
        else if(number < list[mid])
        {
            right=mid-1;
        }
    }
    return -1;
}
int main()
{
    int a[]={1,3,5,7,9,11,14,16,17,20};
    int left = 0;
    int right = sizeof(a)/sizeof(a[0])-1;
    int index =binarySearch(a,left,right,11);
    cout<<index<<endl;
    return 0;
}
