
void Harmonic_series() {
	 
	 for( int i = 1; i <= N; i++ ) {
	 	 for ( j = i ; j <= N; j += i ) {
	 	 	 // 
	 	 }
	 }
}


SPF[N +123 ]; 

void SmallPrimeFactorGenaration(){
	
	for( int i = 1; i <= N; i++ ) SPF[i] = i; 
	
	for (int i = 2; i * i <= N; i++ ) {
		 if(SPF[i] == i ) { // when i is Prime 
		 	for ( int j = i * i ; j <= N; j += i ) {	
		 	  SPF [ j ] = min ( SPF[j] , i ); 
		      }
		 }
		 
	}
}