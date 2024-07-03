//passins array in an function
// #include <iostream>
// using namespace std;
// void printArray(int arr[], int size){
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }
// int main()
// {
// int arr[5]={2,3,4,2,6};
// int size =5;
// printArray(arr, size);
//     return 0;
// }

//linear search by array passing in function

// #include <iostream>
// using namespace std;
// bool linear(int arr[], int size, int target){
//     for(int i=0;i<size;i++){
//         if(arr[i]==target){
//             return true;
//         }
//     }
//     //not found
//     return false;
// }
// int main() {
//     int arr[5]={2,3,4,6,5};
//     int size=5;
//     int target =5;
    
//     bool ans =linear(arr,size,target);
//     if(ans==true){
//         cout<<"target found"<<endl;
//     }
//     else{
//         cout<<"target not found"<<endl;
//     }
//     return 0;
// }

// count 0 and 1 in an array

// #include <iostream>
// using namespace std;
// void zeroOneSearch(int arr[],int size)
// {int zero=0;
// int one=0;
//     for(int i=0;i<size;i++){
//         if(arr[i]==0){
//           zero=zero+1; 
//         }
//       if(arr[i]==1){
//           one++;
//       }
//     }
//     cout<<"Number of zeroes are "<<zero<<endl;
//     cout<<"Number of one are "<<one<<endl;
// }
// int main() {
// int arr[5]={1,0,1,1,0};
// int size=5;
// zeroOneSearch(arr,size);
// // int ans=
//     return 0;
// }

//INT_MIN INT_MAX
// #include <iostream>
// #include<limits.h>
// using namespace std;

// int main() {
//     //-2^31=-2147483648
//     cout<<INT_MIN<<endl;
//     //2^31=2147483647
//     cout<<INT_MAX<<endl; 
//     return 0;
// }
//min No. in an array
// #include <iostream>
// #include<limits.h>
// using namespace std;
// int findMInInArray(int arr[],int size)
// {
//   int minAns = INT_MAX;
// for(int i=0;i<size;i++)
// { minAns=min(minAns,arr[i]);}
//     cout<<"Minimun number in arr is "<<minAns<<endl;
// return 0;
// }
// int main() {
// int arr[7]={10,8,31,4,3,1,-100};
// int size=7;
// findMInInArray(arr,size);
//  return 0;
// }

//reverse array
// #include<iostream>
// using namespace std;
// int revArr(int arr[],int size){
//     int c;
//     for(int i =0;i<size/2;i++){
//         c=arr[i];
//         cout<<"c"<<c;
//         arr[i]=arr[size-i-1];
//         cout<<"arr i "<<arr[i];
//         arr[size-i-1]=c;
//         cout<<"arr size-i"<<arr[size-i];
//         cout<<endl;
//     }
        
//         for(int i=0;i<size;i++){
//             cout<<arr[i]<<" ";
//         }
//     return 0;
// }
// int main(){
//     int arr[7]={10,20,30,40,50,60,70};
//     int size=7;
// revArr(arr,size);
//     // cout<<"Reversed array is "<<reversedArray<<endl;
// }
//reverse array using swap utility
// #include<iostream>
// using namespace std;
// int revArr(int arr[],int size){
//     for(int left=0,right=size-1;left<right;left++,right--){
//         swap(arr[left],arr[right]);
//     }
//     for(int i=0;i<size;i++){
//             cout<<arr[i]<<" ";
//         }
//     return 0;
// }
// int main(){
//     int arr[7]={10,20,30,40,50,60};
//     int size=6;
// revArr(arr,size);
// }

//extrerme priint in an array
// #include<iostream>
// using namespace std;
//  void extremePrint(int arr[],int size){
//      int left=0;
//      int right=size-1;
//      while(left<=right){
//          if(left==right){
//              cout<<arr[left]<<endl;
//          }
//          else{
//              cout<<arr[left]<<endl;
//              cout<<arr[right]<<endl;
//          }
//          left++;
//          right--;
//      }
//      for(int i=0;i<size;i++){
//             cout<<arr[i]<<" ";
//         }
//  }
// int main(){
//     int arr[6]={10,20,30,40,50,60};
//     int size=6;
//     extremePrint(arr,size);
//     return 0;
// }

//*find uniqe elements if all other are in pair
// #include <iostream>
// using namespace std;
// int uniqueElement(int arr[], int size)
// {
//     int ans = 0;
//     for(int i=0;i<size;i++)
//     {
//         ans=ans^arr[i]; //XOR
//     }
//     return ans;
// }
// int main() {
//     int arr[5]={1,6,1,4,4};
//     int size=5;
//     int finalAns = uniqueElement(arr,size);
//     cout<<"Final answer is : "<<finalAns<<endl;
//     return 0;
// }

//print all possible pairs of elements of array
// #include <iostream>
// using namespace std;
// void pairArr(int arr[], int size)
// {
//     for(int i=0;i<size;i++)
//     {
//         for(int j=0;j<size; j++)
//         {
//             cout<<"("<<arr[i]<<","<<arr[j]<<")";
//         }
//         cout<<endl;
//     }
// }
// int main()
// {
//     int arr[3]={1,3,4};
//     int size = 3;
//     pairArr(arr,size);
//     return 0;
// }

//print triplets
// #include<iostream>
// using namespace std;
// void triplet(int arr[], int size)
// {
//         for(int i=0;i<size;i++)
//     {
//         for(int j=0;j<size; j++)
//         {
//             for(int k=0;k<size;k++)
//             {
//             cout<<"("<<arr[i]<<","<<arr[j]<<","<<arr[k]<<")";
//             }
//             cout<<endl;
//         }
//         cout<<endl;
//     }

// }
// int main()
// {
//     int arr[4]={1,2,3,4};
//     int size=4;
//     triplet(arr,size);
//     return 0;
// }    

//sort 0's and 1's of array having 1&0 only
//can be done by 
// 1 - counting
// 2 - 2 pointer approach
// 3 - sort() - utility
#include<iostream>
using namespace std;
void zeroOne(int arr[], int size)
{
    int zeroCount =0;
    int oneCount =0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]==0)
        {
            zeroCount++;
        }
        if(arr[i]==1)
        {
            oneCount++;
        }
        
    }
    // int i;
    // for(i=0;i<zeroCount;i++)
    // {
    //     arr[i]=0;
    // }
    // for(int j=i;j<size;j++)
    // {
    //     arr[j]=1;
    // }
    //EASY WAY
  int index = 0;

  while(zeroCount--) { //run til zerocount<0
    arr[index] = 0;
    index++;
  }

  while(oneCount--) {
    arr[index] = 1;
    index++;
  }
}
int main()
{
    int arr[9]={0,1,0,1,1,0,0,0,0};
    int size =9;
    zeroOne(arr,size);
    //printing
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}


//shift 1
