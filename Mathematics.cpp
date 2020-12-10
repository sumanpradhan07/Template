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
/********************************************************************************/
/**************************LargeFactorial****************************************/
#include<iostream> 
using namespace std; 

// Maximum number of digits in output 
#define MAX 500 

int multiply(int x, int res[], int res_size); 

// This function finds factorial of large numbers 
// and prints them 
void factorial(int n) 
{ 
	int res[MAX]; 

	// Initialize result 
	res[0] = 1; 
	int res_size = 1; 

	// Apply simple factorial formula n! = 1 * 2 * 3 * 4...*n 
	for (int x=2; x<=n; x++) 
		res_size = multiply(x, res, res_size); 

	cout << "Factorial of given number is \n"; 
	for (int i=res_size-1; i>=0; i--) 
		cout << res[i]; 
} 

// This function multiplies x with the number 
// represented by res[]. 
// res_size is size of res[] or number of digits in the 
// number represented by res[]. This function uses simple 
// school mathematics for multiplication. 
// This function may value of res_size and returns the 
// new value of res_size 
int multiply(int x, int res[], int res_size) 
{ 
	int carry = 0; // Initialize carry 

	// One by one multiply n with individual digits of res[] 
	for (int i=0; i<res_size; i++) 
	{ 
		int prod = res[i] * x + carry; 

		// Store last digit of 'prod' in res[] 
		res[i] = prod % 10; 

		// Put rest in carry 
		carry = prod/10;	 
	} 

	// Put carry in res and increase result size 
	while (carry) 
	{ 
		res[res_size] = carry%10; 
		carry = carry/10; 
		res_size++; 
	} 
	return res_size; 
} 

// Driver program 
int main() 
{ 
	factorial(100); 
	return 0; 
} 
/***************************************************************************/

