/*
ip:
8
1
0
0
0
1
0
0
1
2
op:
true
*/
#include<stdio.h>
int main()
{
 int i,n,c=0,a[30],j,k,c1=0,c2=0,t,flag=0;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {scanf("%d",&a[i]);
    if(a[i]==1)
      { c++;
         t=i;
      }
 }
 //printf("%d",c);
 scanf("%d",&k);
 for(i=t-1;i>=(t-k);i--)
  if(a[i]==0)
   c1++;
  if(c1==k)
    flag=1;
     //printf("%d\n",c1);
     //printf("%d\n",flag);
 for(i=0;i<t;i++)
 {  c1=0;
     if(a[i]==1 && i!=t)
     {
        for(j=i+1;j<=i+k;j++)
         {
            if(a[j]==0)
              c1++;
            //else
             // break;
        }
        //printf("%d\n",c1);
       if(c1==k)
         { c2++;
           //printf("%d--",c2);
         }
     }
 }
  if (flag==1)
    c2++;
  if(c2==c)
     printf("true");
  else
     printf("false");
 printf("\n");
 return 0;
}
