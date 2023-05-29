class Solution{   
public:
    int maxDays(int arr[],int n){
        // code here 
        int max=arr[0];
        for(int i=0;i<n;i++){
         if(max<=arr[i]){
             max=arr[i];
         }   
        }
        return max;
    }
};