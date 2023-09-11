#include <stdio.h>
#include<limits.h>
#include<float.h>
int main()
{   
   printf("the range of short int min = %d\n",SHRT_MIN);
   printf("the range of short int max =%d\n",SHRT_MAX);
   printf("the range of short signed int min=%d\n",SHRT_MIN);
   printf("the range of short signed int max=%d\n",SHRT_MAX);
   printf("the range of unsigned short int max=%d\n",USHRT_MAX);
   printf("the range of signed int min/int min=%d\n",INT_MIN);
   printf("the range of int max=%d\n",INT_MAX);
   printf("the range of unsigned int max=%lu\n",UINT_MAX);
   printf("the range of long int min/signed long int min=%d\n",LONG_MIN);
   printf("the range of long int max/signed long int max=%d\n",LONG_MAX);
   printf("the range of unsigned long int max=%lu\n",ULONG_MAX);
   printf("the range of long long int max=%lld\n",LLONG_MAX);
   printf("the range of long long int min=%lld\n",LLONG_MIN);
   printf("the range of unsigned long long int max=%llu\n",ULLONG_MAX);
   printf("the range of char min/signed char min=%d\n",CHAR_MIN);
   printf("the range of char max/signed char max=%d\n",CHAR_MAX);
   printf("the range of unsigned char max=%d\n",UCHAR_MAX);
   printf("the range of float min=%e\n",FLT_MIN);
   printf("the range of float max=%e\n",FLT_MAX);
   printf("the range of double max=%e\n",DBL_MIN);
   printf("the range of long double max=%le\n",LDBL_MAX);
   printf("the range of long double min=%Le\n",LDBL_MIN);

    return 0;
}