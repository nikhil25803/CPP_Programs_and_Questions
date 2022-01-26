// It is Chef's birthday. You know that Chef's favourite number is X. You also know that Chef loves averages. 
// Therefore you decide it's best to gift Chef 3 integers A1,A2,A3, such that:

// The mean of A1,A2 and A3 is X.
// 1≤A1,A2,A3≤1000.
// A1,A2 and A3 are distinct.
// Output any suitable A1,A2 and A3 which you could gift to Chef.

// As a reminder, the mean of three numbers P,Q,R is defined as: mean(P,Q,R)=P+Q+R3.

// For example, mean(2,3,5)=2+3+53=103=3.333¯, mean(2,2,5)=2+2+53=93=3.

// Input Format
// The first line of input contains a single integer T, denoting the number of test cases. The description of T test cases follows.
// The first and only line of each test case contains one integer X — Chef's favourite number.
// Output Format
// For each test case, one line containing 3 space-separated integers — A1,A2, and A3, 
// which satisfy the given conditions. If there are multiple possible answers you may output any of them.

// It can be shown that an answer always exists, under the given constraints.

// Constraints
// 1≤T≤100
// 2≤X≤100
// Sample Input 1 
// 3
// 3
// 5
// 5
// Sample Output 1 
// 1 3 5
// 1 6 8
// 3 5 7
// Explanation
// Test Case 1: mean(1,3,5)=1+3+53=93=3
// Test Case 2: mean(1,6,8)=1+6+83=153=5
// Test Case 3: mean(3,5,7)=3+5+73=153=5

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int x;
	    cin>>x;
	    
	    int sum=3*x;
	    for(int i=1;i<sum;i++)
	    {
	        for(int j=i+1;j<sum;j++)
	        {
	            for(int k=j+1;k<sum;k++)
	            {
	                if(i+j+k==sum)
	                {
	                    cout<<i<<" "<<j<<" "<<k<<endl;
	                    break;
	                }
	                else
	                {
	                    continue;
	                }
	            }
	            break;
	        }
	        break;
	    }
	}
	return 0;
}
