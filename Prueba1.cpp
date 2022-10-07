#includePath <stdlib.h>
#includePath <stdio.h>
#includePath <conio.h>
char x[15];
char y[15];
int i,v,a;
int main()
{
	
	printf ("ingrese una palabra  ");
	scanf("%s",& x[i]);
	printf("\n\n");
	
	
	for(int j=0;j<=15;j++){
		v=(int)  x[i];
		v=v+3;
		
		printf("%i-",y[i]);
		i++;
		y[i]=(char) v;
	}
	printf("\n\n");
	
	
	
	for(i=0;i<=15;i++){
		printf("%c",y[i]);
	}
	printf("\n\n");
	
	
	
	for(i=0;i<=15;i++){
		printf("%c",x[i]);
	}
	printf("\n\n");
	
	for(i=15;i>=0;i--){
		printf("%c",x[i]);
	}
	printf("\n\n");
	return 0;
}
