#include<stdio.h>
#include<math.h>
int main()
{
    const double pi = acos(-1);
    double a,b,v,A,s,L;
    while(scanf("%lf %lf %lf %lf %lf",&a,&b,&v,&A,&s)){
        if(a==0 && b==0 && v==0 && A==0 && s==0)
            break;
        L = s*v/2;
        double H = L * cos((A/180) * pi);
        double V = L * sin((A/180) * pi);
        printf("%.0lf %.0lf\n",H/a,V/b);
    }
    return  0;
}
