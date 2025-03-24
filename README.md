# Pattern Programs Repository

This repository contains various pattern programs implemented in C. Each pattern is categorized based on its structure and complexity.

## Table of Contents
1. [Star Patterns](#star-patterns)
2. [Number Patterns](#number-patterns)
3. [Alphabet Patterns](#alphabet-patterns)
4. [Pyramid Patterns](#pyramid-patterns)
5. [Diamond Patterns](#diamond-patterns)
6. [Hollow Patterns](#hollow-patterns)
7. [Pascal's Triangle](#pascals-triangle)
8. [Floyd's Triangle](#floyds-triangle)
9. [Zig-Zag Patterns](#zig-zag-patterns)
10. [Butterfly Pattern](#butterfly-pattern)
11. [Heart Shape Pattern](#heart-shape-pattern)

---

## Star Patterns
### 1. n * n Inverted Triangle
```
*****
****
***
**
*
```

**Code (C):**
```c
#include <stdio.h>
int main() {
    int n = 5;
    for (int i = n; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
```

---

## Hollow Patterns
### 1. Hollow Square
```
*****
*   *
*   *
*   *
*****
```

**Code (C):**
```c
#include <stdio.h>
int main() {
    int n = 5;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || i == n-1 || j == 0 || j == n-1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
```

---

## Pascal's Triangle
```
    1
   1 1
  1 2 1
 1 3 3 1
1 4 6 4 1
```

**Code (C):**
```c
#include <stdio.h>
int fact(int n) {
    int f = 1;
    for (int i = 1; i <= n; i++)
        f *= i;
    return f;
}
int main() {
    int n = 5;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%d ", fact(i) / (fact(j) * fact(i - j)));
        }
        printf("\n");
    }
    return 0;
}
```

---

## Butterfly Pattern
```
*        *
**      **
***    ***
****  ****
**********
****  ****
***    ***
**      **
*        *
```

**Code (C):**
```c
#include <stdio.h>
int main() {
    int n = 5;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++)
            printf("*");
        for (int j = 1; j <= 2 * (n - i); j++)
            printf(" ");
        for (int j = 1; j <= i; j++)
            printf("*");
        printf("\n");
    }
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++)
            printf("*");
        for (int j = 1; j <= 2 * (n - i); j++)
            printf(" ");
        for (int j = 1; j <= i; j++)
            printf("*");
        printf("\n");
    }
    return 0;
}
```

---

## Heart Shape Pattern
```
  **   **  
 *  * *  * 
*    *    *
*         *
 *       * 
  *     *  
   *   *   
    * *    
     *     
```

**Code (C):**
```c
#include <stdio.h>
int main() {
    int i, j, n = 6;
    for (i = n / 2; i <= n; i += 2) {
        for (j = 1; j < n - i; j += 2)
            printf(" ");
        for (j = 1; j <= i; j++)
            printf("*");
        for (j = 1; j <= n - i; j++)
            printf(" ");
        for (j = 1; j <= i; j++)
            printf("*");
        printf("\n");
    }
    for (i = n; i >= 1; i--) {
        for (j = i; j < n; j++)
            printf(" ");
        for (j = 1; j <= (i * 2) - 1; j++)
            printf("*");
        printf("\n");
    }
    return 0;
}
```

---

 Contribution
If you have additional pattern programs, feel free to contribute by adding new patterns and their corresponding code.

 License
This repository is open-source and free to use.

