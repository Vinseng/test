#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n==1)
	{
		printf("1\n");
	}
	else 
	{
		int k=1;
            for(int i=2;;i++)
	    {
		int s=i,f=0;
		while(s>0)
		{
                    if(s%2==0)
		      s/=2;
		    else if(s%3==0)
		      s/=3;
		    else if(s%5==0)
			s/=5;
		    else if(s==1)
		      break;
		    else 
		    {
		       f=1;
		       break;
		    }
		}
		if(f==0)
		{
		    k++;
		    if(k==n)
		    {
			    printf("%d\n",i);
		    }

		}
	    }

	}

}
