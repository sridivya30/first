#include <stdio.h>
int sumarray(int a[],int n)
{   
int i,sum=0,maxsum=0;
	for(i=0;i<n; i++) 
        { 
            sum=sum + a[i]; 
            if(sum<0)
            {
            if(sum>maxsum)
            maxsum=sum;
            sum=0;
            }
            else if(sum>maxsum)
            maxsum =sum; 
        } 
        return maxsum; 
}

int main()
{
	int t,p,n,i,a[100];
	//scanf("%d",&t);
    //while(t<0)
    //{
	    scanf("%d",&n);
	    for(i=0;i<n;i++)
	    {
	        scanf("%d",&a[i]);
	    }
	    //t--;
	    
	 int k=sumarray(a,n);
	 printf("%d",k);
	 return 0;

}
