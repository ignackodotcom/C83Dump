# C83Dump

## Dump macros library for C and C++

3rd edition of the library

part of the C83Project<br>
support for 8.3 file naming conventions with the exception of the main include and code files<br>
support C89 and higher editions<br>

<br>

### Macro to get datatype string
```c
    #define GET_DATATYPE_STRING(var)        ... /* since C11 */
```

### Macros for displaying integer variables
```c
    #define DUMP_VARIABLE(var)              ...
    #define DUMP_VARIABLE_U(var)            ...
    #define DUMP_VARIABLE_U_HEX(var)        ...
```

### Macros for displaying long integer variables
```c
    #define DUMP_VARIABLE_L(var)            ...
    #define DUMP_VARIABLE_UL(var)           ...
    #define DUMP_VARIABLE_UL_HEX(var)       ...
```

### Macros for displaying long long integer variables
```c
    #define DUMP_VARIABLE_LL(var)           ... /* since C99 and C++11 */
    #define DUMP_VARIABLE_ULL(var)          ... /* since C99 and C++11 */
    #define DUMP_VARIABLE_ULL_HEX(var)      ... /* since C99 and C++11 */
```

### Macro for listing the bits of a variable
```c
    #define DUMP_VARIABLE_BITS(type,var)    ...
```

### Macros for displaying size_t variables
```c
    #define DUMP_VARIABLE_SIZE_T(var)       ...
    #define DUMP_VARIABLE_SIZE_T_HEX(var)   ...
```

### Macro for displaying pointer variables
```c
    #define DUMP_POINTER(ptr)               ...
```

### Macros for displaying strings
```c
    #define DUMP_STRING(var)                ...
    #define DUMP_WSTRING(var)               ... /* since C95 and C++98 */
```

### Macros for displaying integer arrays
```c
    #define DUMP_ARRAY(arry,size)           ...
    #define DUMP_ARRAY_U(arry,size)         ...
    #define DUMP_ARRAY_U_HEX(arry,size)     ...
```

### Macros for displaying long integer arrays
```c
    #define DUMP_ARRAY_L(arry,size)         ...
    #define DUMP_ARRAY_UL(arry,size)        ...
    #define DUMP_ARRAY_UL_HEX(arry,size)    ...
```

### Macros for displaying long long integer arrays
```c
    #define DUMP_ARRAY_LL(arry,size)        ... /* since C99 and C++11 */
    #define DUMP_ARRAY_ULL(arry,size)       ... /* since C99 and C++11 */
    #define DUMP_ARRAY_ULL_HEX(arry,size)   ... /* since C99 and C++11 */
```

<br>

# Updates
2025 11 25 DUMP_VARIABLE_BITS macro added<br>
<br>
