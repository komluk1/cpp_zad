#include <stdlib.h>
#include <math.h>

void main() {
	int n,q,k,m,i,s,f,r,a, *A;
	scanf("%d %d %d %d",&n,&q,&k,&m);
	A = malloc (4*(n+1));
	for(i=n;i>=0;)
	    scanf("%d", &A[i--]);
	for(i=q-1;m-i++;){
	    r=f=s=0;
	    for(;f<=n;)
	        s += pow(i, f) * A[f++];
	    while (s) {
	        a = s %10;
	        r += a*a;
	        s /= 10;
	    }
	    printf("%d\n",r);
	}
}
