/*
==>Majority element occurs more than N/2 time -This is the constant 
==>Our Intution or Logic of algo is based on this Statement

Think of this array as a collection of votes from the voters for different political parties.

"   Now as we know the party which has >50% votes can form the government.
    So , our above question is analogous to this situation.                 "


"Now , if we are certain that one party has > 50% votes" . Then , if :
 . We increment a count variable every time we see the vote from the majority party 
   and decrement it whenever a vote from some other party is occured ,
    we can guarantee that ,count>0.

 Using the above logic :
     1.Create a count=0 and a majority variable "that stores the current majority element".

     2.Traverse the array , and if count =0 , 
       then store the current element as the majority element and increment the count.

     3.Else , if the current element is equal to the current majority element ,
      increment count , else decrement it.

    4.At the end return the majority element

When the elements are the same as the candidate element, votes are incremented
whereas when some other element is found (not equal to the candidate element), we decreased the count. 

This actually means that we are decreasing the priority of winning ability of the selected candidate, 
since we know that if the candidate is in majority it occurs more than N/2 times and the remaining elements are less than N/2. 
We keep decreasing the votes since we found some different element(s) than the candidate element. 

When votes become 0, this actually means that there are the equal  number of votes for different elements, 
which should not be the case for the element to be the majority element. 

So the candidate element cannot be the majority and hence we choose the present element as the candidate and 
continue the same till all the elements get finished. 
The final candidate would be our majority element. 

*/
#include"bits/stdc++.h"

using namespace std;

int main()
{

    vector<int>a{ 1, 1, 1, 1, 2, 3, 4 };
    
    //Count for the voting ->Based on the statement that Majority element occurs more than N/2 time
    //Majority element
    int vote=0,majority=0;
    for(auto i=0;i<a.size();i++)
    {
        if(vote==0)
        {
            //Pick the candidate (element)
            majority=a[i];
            vote=1;
        }
        else
        {
            if(a[i]==majority)
            {
                vote++;
            }
            else
            {
                vote--;
            }
        }
        //At the end we will contain majority element which occured more than one time;

    }
            cout<<"Majority element => "<<majority<<endl;
    return 0;
}