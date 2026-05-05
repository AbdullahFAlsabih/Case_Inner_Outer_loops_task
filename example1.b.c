for(int i = 0; i < 10; i++) {
#ifdef Outerloop
printf("i= %d\n", (i));
#endif
#ifdef INC
    printf("result = %d\n", (i * y));
    #endif
}