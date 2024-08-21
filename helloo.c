#include<stdio.h>

int addition(int x, int y, int z){
    return x+y+z;
}

float division(float p, float q){
    if(q == 0){
        printf("Unable to divide");
    }else{
    
            return p/q;
    }
}

float multiply(float r, float s){
    return r*s;
}

char main(){
    // int sum=0, a, b, c;
    // printf("Enter three numbers:\n");
    // scanf("%d %d %d", &a, &b, &c);
    // sum = addition(a, b, c);
    // printf("%d", sum);
    
    // float ans = 0, w, x;
    // printf("Enter two numbers:\n");
    // scanf("%f %f", &w, &x);
    // ans = division(w, x);
    // printf("%f\n", ans);

    // float Mul = 0, e, d;
    // printf("Enter two numbers:");
    // scanf("%f %f", &e, &d);
    // Mul = multiply(e, d);
    // printf("%f\n", Mul);
    
    int arr1[] = {1,2,3,4,5};
    int arr2[] = {6,7,8,9,10};
    for(int i=0; i<5; i++){
         printf("%d", arr1[i],"\n");
    }
    
    return 'c';


}