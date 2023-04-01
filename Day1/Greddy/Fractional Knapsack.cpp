
class Solution
{
    public:
    static bool comp(Item i1,Item i2){
        double r1=(double)i1.value/(double)i1.weight;
        double r2=(double)i2.value/(double)i2.weight;
        return r1>r2;
    }
    double fractionalKnapsack(int w, Item arr[], int n)
    {
        sort(arr,arr+n,comp);
        double ans=0.0;
        for(int i=0;i<n;i++){
            if(arr[i].weight<=w){
                w=w-arr[i].weight;
                ans=ans+arr[i].value;  
            }
            else{
               ans=ans+(double)w*((double)arr[i].value/(double)arr[i].weight); 
               break;
            }
        }
        return ans;

    }
        
};
