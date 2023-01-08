// Complete Dynamic programming Aditya verma Notes

// lecture 1 Dynamic Progamming
// dp is enhanced recursion . Dp ka parent h recusrion . Dp ki problem m kuch kuch na kuch optimal mangte h or first see how to find we have to call recusrion when ever we have given choice mtlb le skte h ya nhi le skte second one dp m choice + optimal puch hoga means ( max , min etc etc ). Dp is top down approach. first try to write recursion approach   recursion m 2 line add kr do memoisation bn jaata h .
// Question variation
// 1. 0-1 Knapsack(6)
// 2. unbounded Knapsack(5)
// 3. Fibonacci(7)
// 4. LCS(15)
// 5. LIS(10)
// 6. Kadane's Algorithm (6)
// 7. Matrix Chain Multiplication (7)
// 8. DP on Trees(4)
// 9. Dp on grid (14)
// 10. others(5)

// Lecture 2 Types of Knapsack
// 1. Subset Sum
// 2. Equal Sum partition
// 3. count of subset Sum
// 4. Minimum Target Sum Diff
// 5. Target Sum
// 7 No of subseet givin diff

// Lecture 3 Knapsack Recusrive
//  Fractional Knapsack(greedy Approach)
//  0-1 Knapsack
//  Unbounded Knapsack
//  Recusrive Knapsack
//  int knapsack(int wt[], int val, int w, int n)
//  {
//      if (n == 0 || w == 0)
//      {
//          return 0;
//      }
//      if (wt[n - 1] <= w)
//      {
//          return max(val[n - 1] + knapsack(wt, val, w - wt[n - 1], n - 1), knapsack(wt, val, w, n - 1));
//      }
//      else if (wt[n - 1] > w)
//      {
//          return knapsack(wt, val, w, n - 1);
//      }
//  }

// Lecture 4 Memosiation Knapsack
// Memosiation Knapsack
// int dp[102, 1001];
// memeset(dp, -1, sizeof[dp]);
// int knapsack(int wt[], int val[], int w, int n)
// {
//     if (n == 0 || w == 0)
//     {
//         return 0;
//     }
//     if (dp[n][w] != -1)
//     {
//         return dp[n][w];
//     }
//     if (wt[n - 1] <= w)
//     {
//         return dp[n][w] = max(val[n - 1] + knapsack(wt, val, w - wt[n - 1], n - 1), knapsack(wt, val, w, n - 1));
//     }
//     else if (wt[n - 1] > w)
//     {
//         return dp[n][w] = knapsack(wt, val, w, n - 1);
//     }
// }

// Lecture 5 Top Down Knapsack
// int dp[n + 1][w + 1]; // jo variable change hote h unki matrix bnate h
// for (int i = 0; i < n + 1; i++)
// {
//     for (int j = 0; j < w + 1; j++)
//     {
//         if (i == 0 || j == 0)
//         {
//             dp[i][j] = 0;
//         }
//     }
// }
// for(int i=1;i<n+1;i++){
//     for(int j=1;j<w;j++){
//         if(wt[i-1]<=j){
//             dp[i][j]=max(val[i-1]+dp[i-1][j-wt[i-1]],dp[i-1][j]);
//         }else{
//             dp[i][j]=dp[i-1][j];
//         }
//     }
// }
// return dp[n][w];

// Lecture 6 Identification of Knapsack
// 1 . Subset Sum Problem
// 2. Equal sum Partition
// 3. Count of Subset Sum
// 4. Minimum subset sum off
// 6. Target sum
// 7. Number of subset of given difference.

// Lecture 7 Subset Sum Problem
// bool isSubsetSum(vector<int>arr,int sum){
//     int n=arr.size();
//     bool dp[n+1][sum+1];
//     for(int i=0;i<n+1;i++){
//         for(int j=0;j<sum+1;j++){
//             if(i==0){
//                 dp[i][j]=false;
//             }
//             if(j==0){
//                 dp[i][j]=true;
//             }
//         }
//     }
//     for(int i=1;i<n+1;i++){
//         for(int j=1;j<sum+1;j++){
//             if(arr[i-1]<=j){
//         dp[i][j]=dp[i-1][j-arr[i-1]] || dp[i-1][j];
//     }else{
//         dp[i][j]=dp[i-1][j];
//     }
//         }
//     }
//     return dp[n][sum];
// }

// Lecture 8 Equal sum
// int equalPartition(int N, int arr[])
//     {
//         // code here
//         int sum=0;
//         for(int i=0;i<N;i++){
//             sum+=arr[i];
//         }
//         if(sum%2!=0){
//             return 0;
//         }
//         // intitalise the dp
//          sum=sum/2;
//         int dp[N+1][sum+1];
//         for(int i=0;i<N;i++){
//             for(int j=0;j<sum+1;j++){
//                 if(i==0){
//                     dp[i][j]=0;
//                 }
//                 if(j==0){
//                     dp[i][j]=1;
//                 }
//             }
//         }
//         // loop through matrix
//         for(int i=1;i<N+1;i++){
//             for(int j=1;j<sum+1;j++){
//                 if(arr[i-1]<=j)
//                 dp[i][j]=dp[i-1][j-arr[i-1]] || dp[i-1][j];
//                 else
//                 dp[i][j]=dp[i-1][j];
//             }
//         }
//         return dp[N][sum];
//     }

// Lecture 9 count of Subset Sum Problem
// if(arr[i-1]<=j){
//     dp[i][j]=dp[i-1 ][j] + dp[i-1][j-arr[i-1]];
// }else{
//     dp[i][j]=dp[i-1][j]
// }

// Lecture 10 Minimum Subset sum Problem

// Lecture 11 Count the number of subset with given difference.
// this problem exactly same as a count of subset sum

// Lecture 12 Target Sum Problem
// class Solution {
// public:
//     int findTargetSumWays(vector<int>& nums, int target) {
//         int s1=0;
//         for(int i=0;i<nums.size();i++){
//             s1+=nums[i];
//         }
//         if((s1+target)%2!=0) return 0;
//         int diff=(s1+target)/2;
//         if(diff<0){
//             return 0;
//         }
//         int n=nums.size();
//         //vector<vector<int>> dp(n+1,vector<int> (diff+1,0));
//         int dp[n+1][diff+1];
//         for(int i=0;i<n+1;i++){
//             for(int j=0;j<diff+1;j++){
//                 if(i==0){
//                     dp[i][j]=0;
//                 }
//                 if(j==0){
//                     dp[i][j]=1;
//                 }
//             }
//         }
//         for(int i=1;i<n+1;i++){
//             for(int j=0;j<diff+1;j++){
//                 if(nums[i-1]<=j){
//                     dp[i][j]=dp[i-1][j-nums[i-1]]+dp[i-1][j];
//                 }else{
//                     dp[i][j]=dp[i-1][j];
//                 }
//             }
//         }
//         return dp[n][diff];
//     }
// };

// Lecture 13 Unbounded Knapsack
// fractional knapsack is not dp it is greedy aproach
// Related Problems
// 1. Rod Cutting
// 2. Coin Change 1 ( Max no of ways )
// 3. Coin Change 2 ( Min No of ways )
// 4. Maximum Ribbon Cut
// Unbounded Knapsack allows multiple occurence of same Item
// if (wt[i - 1] <= j)
// {
//     dp[n][w] = max(val[i - 1] + dp[i][j - wt[i - 1]], dp[i - 1][j]);
// }
// else
// {
//     dp[i][j] = dp[i - 1][j];
// }

// Lecture 14 Rod Cutting Problem
// given price array 1 to N , length array
// just change the name in 0-1 knapsack it will become
// if (length[i - 1] <= j)
// {
//     dp[i][j] = max(price[i - 1] + dp[i][j - length[i - 1]], dp[i - 1][j]);
// }
// else
// {
//     dp[i][j] = dp[i - 1][j];
// }

// Lecture 15 Coin Change Problem Maximum no of ways
// if(coin[i-1]<=j){
//     dp[i][j]=dp[i][j-coin[i-1]]+dp[i-1][j];
// }else{
//     dp[i][j]=dp[i-1][j]
// }

// Lecture 16 Coin Change Problem Minimun no of Coins to equal to sum
// Initialisation
// first row to INT_MAX se intitialsise krenege and 1 coloumn ko 0 se initiaise krenge uske baad 2 row ko intitalise krenge
// for (int j = 0; j < sum + 1; j++)
// {
//     /* code */
//     if (j % arr[0] == 0)
//     {
//         dp[i][j] = j / arr[0];
//     }
//     else
//     {
//         dp[i][j] = INT_MAX - 1;
//     }
// }
// Code
// if(coin[i-1]<=j){
//     dp[i][j]=min(dp[i][j-coin[i-1]]+1,dp[i-1][j]);
// }else{
//     dp[i][j]=dp[i-1][j];
// }

// Lecture 17 Simple justification

// Lecture 18 Longest Common Subsequence Introduction.
// 1. Largest Common Substring.
// 2. Print LCS.
// 3. Shortest Common Subsequence.
// 4. Print SCS.
// 5. Min No of insertion and deletion.
// 6. Largest Repeating Subsequence.
// 7. Length of longest Subsequence of A which is a substring of B.
// 8. Subsequence Pattern Matching.
// 9. Count How many times A appear as Subsequence in B.
// 11. Largest Pallindromic Substring.
// 10. Largest Palindromic Subsequence.
// 12. Count of Pallindromic Substring.
// 13. Min no of deletion in a string to make it a pallindrome.
// 14. Min no of insertion in a string to make it a pallindrome.

// Lecture 19 Longest Common Subsequence Recursive.
// we have given two strings x, y.
// string x,y;
// cin>>x>>y;
// if(x[n-1]==y[m-1]){
//     return 1+lcs(x,y,n-1,m-1);
// }else{
//     return max(lcs(x,y,n,m-1),lcs(x,y,n-1,m));
// }

// Lecture 20 Longest Common Subsequence Memoisation
// int static dp[100][1001];
// memset(dp, -1, sizeof(dp));
// if (n == 0 || m == 0)
// {
//     return 0;
// }
// if (dp[m][n] != -1)
// {
//     return dp[m][n];
// }
// if (x[m - 1] == y[n - 1])
// {
//     return dp[m][n] = 1 + lcs(x, y, m - 1.n - 1);
// }else
// return dp = max(lcs(x, y, m, n - 1), lcs(x, y, m - 1, n));

// Lecture 21 Longest Common Subsequence DP(top down aproach)
// for (int i = 1; i <= n; i++)
// {
//     for (int j = 1; j <= m; j++)
//     {
//         if (x[m - 1] == y[n - 1])
//         {
//             t[m][n] = 1 + t[m - 1][n - 1];
//         }
//         else{
//             t[m][n]=max(t[m][n-1],t[m-1][n]);
//         }
//     }
// }
// return t[m][n];

// Lecture 22 Longest Common Substring
// if (a[i - 1] == b[j - 1])
// {
//     t[i][j] = t[i - 1][j - 1] + 1;
// }
// else
// {
//     t[i][j] = 0;
// }
// return t[m][n];

// Lecture 23 Print LCS b/w 2 strings
// int i = m, int j = n;
// string s;
// while (i > 0 && j > 0)
// {
//     if (a[i - 1] == b[j - 1])
//     {
//         s.push_back(a[i - 1]);
//     }
//     else
//     {
//         if (t[i][j - 1] > t[i - 1][j])
//         {
//             /* code */
//             j--;
//         }
//         else
//         {
//             i--;
//         }
//     }
// }
// reverse(s.begin(), s.end());
// return s;

// Lecture 24 Shortest Common Subsequence length
// m + n(worst case) - LCS

// Lecture 25 Minimum no of insertion and deletion
//  given two string a:heap,
// b:pea,
// no of deletion = aLength - LCS
// no of insertion = bLength - LCS

// Lecture 26 Longest Pallindromic Subsequence
// given string a only to find the second string just reverse string a which will be equal to a and calculate the find out the LCS the length of that LCS if our ans.

// Lecture 27 Not Available.

// Lecture 28 Minimun no of insertion and deletion
// String ki length - Length of Longest Pallindromic Subsequence.

// Lecture 30 Largest Repeating Subsequence.
// same as it is LCS just one condition will add ki i!=j hona chiaye.
// if (a[i - 1] == b[j - 1] && i != j)
// {
//     dp[i][j] = dp[i - 1][j - 1] + 1;
// }
// else
// {
//     dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]);
// }

// Lecture 31 Sequence Pattern Matching
// given two string we will fiind LCS of both String and check if length of LCS equal to smaller string then return true otherwise return false.

// Lecture 32 Minimun no of Deletion in a string to make it a pallindromic no of insertion.
// no of deleteion = string ki length - lcs
// and no of deletion = no of insertion

// Lecture 33 Matrix Chain Multiplication
// types 1 . MCM Recursive.
// 2. Printing MCM
// 3. Evaluate Exp to true/Boolean Parenthesis
// 4. Min/Max value of ans
// 5. Palindrone Partioning
// 6. Scramble String
// 7. Egg Dropping Problem
// Base Code
// int solve(int arr[],int i,int j){
//     if(i>j){
//         return 0;
//     }
//     for(int k=i;k<j;k++){
//         tempAns=solve(arr,i,k)+solve(arr,k+1,j);
//         ans=0;
//         ans=for(tempans)// like maximum ans each time it will change.
//     }
//     return ans;
// }

// Lecture 34 Matrix Chain Multiplication Recursive Approach.

// Lecture 35 MCM Memoisation

// Lecture 36 Pallindrome partioning Recursive
// eg:- nitin i want min no partions


// lectrue 46
// Dynamic Programming on TRees
// General Syntax
// How Dp can be appeared to trees
// Diameter of a binary tree.
// maximum path sum from any node to any.
// Diameter of N-ary tree.

// lecture 47 general syntax for tree;
int  function(){
    // base control


    // Hypothesis

    // Induction
}


 



  
