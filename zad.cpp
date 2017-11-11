#define W while
main() {
	int n,q,k,m,s,f,a, A[10];
	scanf("%d %d %d %d",&n,&q,&k,&m);
	s=n+1;
	W(s)
	    scanf("%d", A+--s);
	W(k-q++){
	    f=n+1;
	    W(f)
	        s += pow(q-1, --f) * A[f];
	    s%=(int)pow(10,m);
	    W(s) {
	        a = s %10;
	        f += a*a;
	        s /= 10;
	    }
	    printf("%d\n",f);
	}
}
