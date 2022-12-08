#include <stdio.h>
  int main()
  {
  	int n ;
  	scanf("%d",&n);
  	int i , j , h=1;
  	for(i=1;i<=n;i++){

  		for(j=1;j<=i;j++){

  			if(j<=h) printf("%d*%d=%d",j,i,i*j);
  			if(i*j>9) printf("  ");
  			else printf("   ");
  			if(j==h) {
			  printf("\n");
			  h++;
		  }

	  }
}
	  return 0;
  }
