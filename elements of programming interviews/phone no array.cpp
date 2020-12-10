// given an array of phone numbers ,we have to find the next integer of the number formed by the elements of the array

# include <bits/stdc++.h>

using namespace std;

vector<int> plusone(vector<int> arr)
{
   
   for (int i=arr.size()-1;i>0;i--)
   {
      
      if(arr[i]==9){
         
          arr[i]=0;
          
      }

      else{
          arr[i]+=1;
          break;
      }
      
   }

   return arr;
}
int main(){

vector<int> arr={1,2,9,9},num;

 num =plusone(arr);

for(int x:num)
{
  cout<<x<<endl;
}
}










