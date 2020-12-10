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
