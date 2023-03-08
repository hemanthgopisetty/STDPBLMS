#include "bits/stdc++.h"
using namespace std;
/*                                      Binary search
Binary search maintains a contiguous subsequence of the starting sequence where the target value is surely located. 
    This is called the search space.

Binary Search is quite easy to understand conceptually. 
Basically, it splits the search space into two halves and only keep the half that probably has the search target 
and throw away the other half that would not possibly have the answer.

In this manner, we reduce the search space to half the size at every step, until we find the target. 
Binary Search helps us reduce the search time from linear O(n) to logarithmic O(log n). 
But when it comes to implementation, it's rather difficult to write a bug-free code in just a few minutes. 

Some of the most common problems include:
    When to exit the loop? Should we use left < right or left <= right as the while loop condition?
    How to initialize the boundary variable left and right?
    How to update the boundary? How to choose the appropriate combination from left = mid, left = mid + 1 and right = mid, right = mid - 1?

Correctly initialize the boundary variables" left" and "right" to specify search space. 
    Only one rule: set up the boundary to include all possible elements;

Decide return value. Is it return left or return left - 1? 
    Remember this: after exiting the while loop, left is the minimal k​ satisfying the condition function;
Design the condition function. This is the most difficult and most beautiful part. Needs lots of practice.

A rather common misunderstanding of binary search is that people often think this technique could only be used in simple scenario like 
"Given a sorted array, find a specific value in it". 
As a matter of fact, it can be applied to much more complicated situations.
*/
vector<int>a{-1,0,3,5,9,12};
int target=6;
//Recursive Approach
int bs(vector<int>& a, int target,int l,int r)
    {
        int mid=(l+r)/2;
           if(l<=r)
           {
               if(a[mid]==target)return mid;
               if(a[mid]<target)return bs(a,target,mid+1,r);
               else return bs(a,target,l,mid-1);
           }
        return -1;
    }
int main()
{
    //Iterative Approach
    int l{0},r{(int)a.size()-1};
        int mid{0};
        while(l<=r)
        {
            mid=(l+r)/2;
            if(a[mid]==target)
            {
                cout<<mid<<endl;
            }
            if(a[mid]<target)
            {
                l=mid+1;
            }
            else
            {
                r=mid-1;
            }
        }
    return 0;
}