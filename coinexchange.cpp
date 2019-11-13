#include<bits/stdc++.h> 
using namespace std; 
  
// m is size of coins array (number of different coins) 
int minCoins(int coins[], int m, int V) 
{ 
    // table[i] will be storing the minimum number of coins 
    // required for i value.  So table[V] will have result 
    int table[V+1]; 
  
    // Base case (If given value V is 0) 
    table[0] = 0; 
  
    // Initialize all table values as Infinite 
    for (int i=1; i<=V; i++) 
        table[i] = INT_MAX; 
  
    // Compute minimum coins required for all 
    // values from 1 to V 
    for (int i=1; i<=V; i++) 
    { 
        // Go through all coins smaller than i 
        for (int j=0; j<m; j++) 
          if (coins[j] <= i) 
          { 
              int sub_res = table[i-coins[j]]; 
              if (sub_res != INT_MAX && sub_res + 1 < table[i]) 
                  table[i] = sub_res + 1; 
          } 
    } 
    return table[V]; 
} 

int main()
{
 int n, v;
 cout<<"Enter the number of coins: ";
 cin>>n;
 int coins[n];
 cout<<"Enter the different coins :"<<endl;
 for(int i=0; i<n; i++)
  cin>>coins[i];
 cout<<"Enter the amount: ";
 cin>>v;
 cout<<"Minimum number of coins required : "<<minCoins(coins, n, v)<<endl;
}
 
 

/*Output:
Enter the number of coins: 4
Enter the different coins :
9 6 5 1
Enter the amount: 11
Minimum number of coins required : 2
*/
