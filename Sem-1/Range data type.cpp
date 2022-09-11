#include<stdio.h>
#include<float.h>
#include<limits.h>
int main()
{   
 printf("Range of char is %d to %d\n",CHAR_MIN,CHAR_MAX);
 printf("Range of int is %d to %d\n",INT_MIN,INT_MAX);
 printf("Range of float is %e to %e\n",FLT_MIN,FLT_MAX);
 printf("Range of double is %le to %le\n",DBL_MIN,DBL_MAX);
 printf("Range of unsigned char is %d to %d\n",0,UCHAR_MAX);
 printf("Range of short is %d to %d\n",SHRT_MIN,SHRT_MAX);
 printf("Range of unsigned short is %d to %d\n",0,USHRT_MAX);
 printf("Range of unsigned int is %d to %d\n",0,UINT_MAX);
 printf("Range of long is %ld to %ld\n",LONG_MIN,LONG_MAX);
 printf("Range of unsinged long is %d to %lu\n",0,ULONG_MAX);
 printf("Range of long long is %lld to %lld\n",LLONG_MIN,LLONG_MAX);
 printf("Range of unsigned long long is %d to %llu\n",0,ULLONG_MAX);
 printf("Range of long double is %llu to %llu\n",LDBL_MIN,LDBL_MAX);
 return 0;
}

