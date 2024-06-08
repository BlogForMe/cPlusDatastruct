/******************************************************************************************
 * Data Structures in C++
 * ISBN: 7-302-33064-6 & 7-302-33065-3 & 7-302-29652-2 & 7-302-26883-3
 * Junhui DENG, deng@tsinghua.edu.cn
 * Computer Science & Technology, Tsinghua University
 * Copyright (c) 2003-2020. All rights reserved.
 ******************************************************************************************/

#include <cstdio>
#include <cstring>
#include "string_pm_test.h"

/******************************************************************************************
 ******************************************************************************************/
void printNext ( int* N, int offset, int length ) {
   for ( int i = 0; i < length; i++ ) printf ( "%4d", i ); printf ( "\n" );
   for ( int i = 0; i < offset; i++ ) printf ( "    " );
   for ( int i = 0; i < length; i++ ) printf ( "%4d", N[i] ); printf ( "\n\n" );
}

/******************************************************************************************
 ******************************************************************************************/
void printBC ( int* bc ) {
   printf ( "\n-- bc[] Table ---------------\n" );
   for ( size_t j = 0; j < 256; j++ ) if ( 0 <= bc[j] ) printf ( "%4c", ( char ) j ); printf ( "\n" );
   for ( size_t j = 0; j < 256; j++ ) if ( 0 <= bc[j] ) printf ( "%4d", bc[j] ); printf ( "\n\n" );
}

/******************************************************************************************
 ******************************************************************************************/
void printGS ( char* P, int* GS ) {
   printf ( "-- gs[] Table ---------------\n" );
   for ( size_t m = strlen ( P ), j = 0; j < m; j++ ) printf ( "%4d", j ); printf ( "\n" );
   printString ( P ); printf ( "\n" );
   for ( size_t m = strlen ( P ), j = 0; j < m; j++ ) printf ( "%4d", GS[j] ); printf ( "\n\n" );
}

/******************************************************************************************
 * Text     :  0   1   2   .   .   .   i   i+1 .   .   .   i+j .   .   n-1
 *             ------------------------|-------------------|------------
 * Pattern  :                          0   1   .   .   .   j   .   .
 *                                     |-------------------|
 ******************************************************************************************
 ******************************************************************************************/
void showProgress ( char* T, char* P, int i, int j ) {
   /*DSA*/static int step = 0; //
   /*DSA*/printf ( "\n-- Step %2d: --\n", ++step );
   /*DSA*/for ( size_t n = strlen ( T ), t = 0; t < n; t++ ) printf ( "%4d", t ); printf ( "\n" );
   /*DSA*/printString ( T ); printf ( "\n" );
   /*DSA*/if ( 0 <= i + j )
      /*DSA*/{  for ( int t = 0; t < i + j; t++ ) printf ( "%4c", ' ' ); printf ( "%4c", '|' );  }
   /*DSA*/printf ( "\n" );
   /*DSA*/for ( int t = 0; t < i; t++ ) printf ( "%4c", ' ' );
   /*DSA*/printString ( P ); printf ( "\n" );
}

int match ( char*, char* );

#if 0

/******************************************************************************************
 ******************************************************************************************/
int main ( int argc, char* argv[] ) {
//   if ( 3 > argc ) { fprintf ( stderr, "\nUsage: %s <Pattern> <Text>\n\nFor example %s people \"now is the time for all good people to come\"\n\n", argv[0], argv[0] ); return -1; }
//   for ( int i = 0; i < ( argc - 1 ) / 2 * 2; i += 2 ) {
//      /*DSA*/system ( "cls" ); printf ( "####################################################\n" );
//      /*DSA*/printf ( "Text:     " ); printString ( argv[i+2] ); printf ( "\n" );
//      /*DSA*/printf ( "Pattern:  " ); printString ( argv[i+1] ); printf ( "\n" );
//      int pos = match ( argv[i+1], argv[i+2] );
//      /*DSA*/if ( strlen ( argv[i+2] ) < pos + strlen ( argv[i+1] ) )   printf ( "No matching found\a\a\n" );
//      /*DSA*/else                                               printf ( "Matching found at #%d\a\n", pos );
//      /*DSA*/getchar();
//   }
   
   char *p = "1010101101";
   char *t = "1011";
   int pt = match(p, t);
   printf("pt %d \n",pt);


//   int i = 5;
//   int j=2;
//   i -= j-1;
//   printf("i %d \n",i);
   return 0;
}

#endif