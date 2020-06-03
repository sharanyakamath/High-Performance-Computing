#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
 
    int i,j,n;
    float A[1001][1001],x[1001],b[1001],e[1001],zmax,emax;
    // b is the eigenvector
    n = 1000;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            A[i][j] = (float)rand()/(float)RAND_MAX;
	    A[j][i] = A[i][j];
        }
    }
    
    for(i=1; i<=n; i++)
    {
        x[i] = (float)rand()/(float)RAND_MAX;
    }
    do
    {
        for(i=1; i<=n; i++)
        {
            b[i]=0;
            for(j=1; j<=n; j++)
            {
                b[i] += A[j][i]*x[j];
            }
        }
        zmax=fabs(b[1]);
        for(i=2; i<=n; i++)
        {
            if((fabs(b[i]))>zmax)
                zmax=fabs(b[i]);
        }
        for(i=1; i<=n; i++)
        {
            b[i]=b[i]/zmax;
        }
        for(i=1; i<=n; i++)
        {
            e[i]=0;
            e[i]=fabs((fabs(b[i]))-(fabs(x[i])));
        }
        emax=e[1];
        for(i=2; i<=n; i++)
        {
            if(e[i]>emax)
                emax=e[i];
        }
        for(i=1; i<=n; i++)
        {
            x[i]=b[i];
        }
    }
    while(emax>0.001);
    printf("\n The required eigen value is %f",zmax);
}
