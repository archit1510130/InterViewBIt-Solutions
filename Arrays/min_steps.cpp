int Solution::coverPoints(vector<int> &A, vector<int> &B) 
{
    int ans=0;
    for(int i=1;i<A.size();i++)
    {
        int x2=abs(A[i]-A[i-1]);
        int y2=abs(B[i]-B[i-1]);
        if(x2>y2)
            ans+=x2;
        else
        ans+=y2;
        
        
        
            
        
    }
    return ans;
}
