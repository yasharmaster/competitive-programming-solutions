#include <stdio.h>
#include <math.h>
int isPrime(long long int n)
{
	long long int d = n;
	long int s = 0;
	while((d-1)%2 == 0){
		s++;
		d = d/2;
	}
	long long int x;
	int a=2, r, it=5;
	here:
	while(it--){
		x = pow(a, d);
		x %= n;
		if (x==1 || x==n-1)
			continue;
		for(r=0; r<=s-1; r++){
			x = (x*x)%n;
			if(x==1)
				return 0;
			if(x== n-1)
				goto here;
		}
		return 0;
	}
	return 1;
}




int Miller(long long n)
{ 
    int i;
    long long int s;
    if (n < 2)
    {
        return 0;
    }
    if (n != 2 && n % 2==0)
    {
        return 0;
    }
    s = n - 1;
    while (s % 2 == 0)
    {
        s /= 2;
    }
    for (i = 0; i < 5; i++)
    {
        long long int a = rand() % (p - 1) + 1, temp = s;
        long long int mod = modulo(a, temp, p);
        while (temp != p - 1 && mod != 1 && mod != p - 1)
        {
            mod = mulmod(mod, mod, p);
            temp *= 2;
        }
        if (mod != p - 1 && temp % 2 == 0)
        {

            return 0;

        }
    }
    return 1;
}




int main()
{
	int t;
	scanf("%d", &t);
	long long int n;
	while(t--){
		scanf("%lld", &n);
		if(isPrime(n))
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}
