/***************************sieveOfEratosthenes*****************************/
vector<bool> sieveOfEratosthenes(int n){
	vector<bool>isPrime(n+1,true);
	isPrime[0]=false;
	isPrime[1]=false;
	
	for(int i=2;i*i<=n;i++){
		for(int j=2*i;j<=n;j+=i){
			isPrime[j]=false;
		}
	}
return isPrime;
}
/***************************************************************************/

/**********************************gcd**************************************/
int gcd(int a,int b){
	return a%b==0?b:gcd(b,a%b);
}
/***************************************************************************/
/*****************************fastPower*************************************/
int fastPower(int a,int b){
	int res=1;
	while(b>0){
		if(b&1==1){
			res=res*a;
			b=b-1;
		}
		else{
			a=a*a;
			b>>=1;
		}
	}
return res;
}
/***************************************************************************/
/*****************************fastPower with MOD*************************************/
int fastPower(int a,int b,int mod){
	long res=1;
	while(b>0){
		if(b&1==1){
			res=(res*a % MOD) % MOD;
			b=b-1;
		}
		else{
			a=(a % MOD *a % MOD)% MOD;
			b>>=1;
		}
	}
return res;
}
/***************************************************************************/
