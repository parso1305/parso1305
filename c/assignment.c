#include<stdio.h>
int main(){
   printf("Size of the short int is %d\n",sizeof(short));
   printf("Size of the short sized int is %d\n",sizeof(short signed int));
   printf("Size of the short unsigned int is %d\n",sizeof(short unsigned int));
   printf("Size of the int is %d\n",sizeof(int));
   printf("Size of the signed int is %d\n",sizeof(signed int));
   printf("Size of the unsigned int is %d\n",sizeof(unsigned int));
   printf("Size of the long int is %d\n",sizeof(long int));
   printf("Size of the signed long int is %d\n",sizeof(signed long int));
   printf("Size of the unsigned long int is %d\n",sizeof(unsigned long int));
   printf("Size of the long long int is %d\n",sizeof(long long int));
   printf("Size of the signed long long int is %d\n",sizeof(signed long long int));
   printf("Size of the unsigned long long int is %d\n",sizeof(unsigned long long int));
   printf("Size of the char is %d\n",sizeof(char));
   printf("Size of the unsigned char is %d\n",sizeof(unsigned char));
   printf("Size of the signed char is %d\n",sizeof(signed char));
   printf("Size of the float is %d\n",sizeof(float));
   printf("Size of the double is %d\n",sizeof(double));
   printf("Size of the long double is %d\n",sizeof(long double));
    return 0;
}