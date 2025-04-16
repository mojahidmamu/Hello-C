// #include<stdio.h>
// int main()
// {
//     int N;
//     scanf("%d", &N);
     
//          if (N % 1 == 0 && N % N == 0)
//          {
//             printf("YES");
//          } 
//          else{
//             printf("NO");
//          }
      
    
//     return 0;
// }

#include <stdio.h>
int isPrime(int x) {
    if (x <= 1) {
        return 0;  
    }

    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) {
            return 0;  
        }
    }

    return 1;  
}

int main() {
    int X;
    scanf("%d", &X);  

    if (isPrime(X)) {
        printf("YES\n");  
    } else {
        printf("NO\n");  
    }

    return 0;
}
