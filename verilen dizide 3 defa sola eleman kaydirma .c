#include <stdio.h>
void ucsola(      int A[12], int boy         ) {
	
	int i;
	int j;
	int takas;
     for( i=0;i<3;i++)
  {
    takas = A[0];
   for( j=0;j<boy-1;j++)
   {
    A[j]=A[j+1];
    
   }
    A[boy-1]=takas;
  }

}


int main() {
	int A[] = {1, 2, 3, 4, 5, 20, 6, 30, 7, 40, 8, 9};
	int boy = 12;
	int i; 
	ucsola(A,boy);
	for (i=0; i<boy; i++){
		printf("%d\n", A[i]);
	}
return 0;
}

