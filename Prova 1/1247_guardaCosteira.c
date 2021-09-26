#include<stdio.h>
#include<math.h>

int main()
{
      int d,vg,vf, n;
      double dg,df,x;
      n = 12;
                  while(scanf("%d %d %d", &d, &vf, &vg) == 3){
                        x =  (double )sqrt((n * n + (d * d)));
                        df = (double) n / vf;
                        dg = (double) (x / vg);
                        
                  if(dg > df)
                    printf("N\n");
                  else
                    printf("S\n");
                  }
      return 0;
}