
//Prime Number 2 to N value o(N)

# include <stdio.h>
# include <stdbool.h>
#define N 100

int main() {

	int prime[N], indexprime =2 ;
	prime[0] = 2;
	prime[1] =3 ;
	int i, j ;

	for(i = 5 ; i<= N ; i+=2 ) {

		bool  isPrime = 1 ;

		for( j = 1 ; j<indexprime ; j++ ) {

			if(i % prime[j] == 0) {

				isPrime = 0;
				break; 

			}

		}
		
		if(isPrime == 1 ){
			prime[indexprime] = i ; 
			indexprime++ ; 
		}
		
		
	}
	
	for ( i = 0 ; i<indexprime ; i++ ){
		printf("%d ", prime[i]);
	}

	
	
	
	
	return 0;
}


