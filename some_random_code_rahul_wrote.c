#include <stdio.h>
int main()
{
    int i,j,m,n,b,t;
    int c[m][n];

    scanf("%d %d %d", &b, &m, &n);
    int a[m],d[n];
    for(i=0;i<m;i++)
    {
        scanf("%d", &a[i]);

    }
      for(i=0;i<n;i++)
      {
          scanf("%d", &d[i]);

      }
      for(i=0;i<m;i++)
      {
          for(j=i+1;j<m;j++)
          {
              if(a[i]<a[j])
              {
                  t = a[i];
                  a[i] = a[j];
                  a[j]=t;

              }
          }
      }
            for(i=0;i<n;i++)
      {
          for(j=i+1;j<n;j++)
          {
              if(d[i]<d[j])
              {
                  t = d[i];
                  d[i] = d[j];
                  d[j]=t;

              }
          }
      }
       if(a[0]+d[0]<=b)
              {
                  printf("%d", a[0] + d[0]);
              }
       if(a[m-1]+d[n-1]>b)
              {
                  printf("-1");
              }
      for(i=0;i<m;i++)
      {
          for(j=0;j<n;j++)
          {


               {
                     c[i][j] = a[i] + d[j];
               }

          }
      }
      int largest = c[0][0];
         for(i=0;i<m;i++)
      {
          for(j=0;j<n;j++)
          {
              if((c[i][j] > largest)&&(c[i][j]<=b))
              {
                  largest = c[i][j];
              }

          }
      }
      printf("%d", largest);
      return 0;
}
