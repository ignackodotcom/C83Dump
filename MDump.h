/******************************************************************************
* \file      MDump.h
* \version   2026.01.01
* \author    Peter Potrok ( @ignackodotcom )
*            ignacko.com@outlook.com
*            https://github.com/ignackodotcom
* \copyright Copyright (c) 1994 - 2026
*            MIT License (see License.txt file)
* \brief     Dump macros
* \details
*
* \see		 https://github.com/ignackodotcom
*			 https://en.cppreference.com/w/c
*            and other resources
******************************************************************************/

#ifndef MDUMP_H
#define MDUMP_H		20260101L



/******************************************************************************
* Dump datatype
*/

/******************************************************************************
* \brief
*   The DUMP_GET_DATATYPE macro utilizes the C11 _Generic feature to determine 
*   and return the type of the variable var. 
*   If not supported, it returns an empty string.
*
* \param
*	var - Variable name.
*
* \return
*	Variable type name string.
*
* \note
*
* \code
*   ...
*   printf("%s\n\r", DUMP_GET_DATATYPE(pstr));
*	...
* \endcode
*
*/
#if !defined(__cplusplus) && defined(__STDC_VERSION__) && __STDC_VERSION__ >= 201112L
    #define GET_DATATYPE_STRING(var) _Generic((var),                                              \
            _Bool: "_Bool ",                                                                \
      signed char: "signed char ",                unsigned char: "unsigned char ",          \
        short int: "short int ",             unsigned short int: "unsigned short int ",     \
              int: "int ",                         unsigned int: "unsigned int ",           \
         long int: "long int ",               unsigned long int: "unsigned long int ",      \
    long long int: "long long int ",     unsigned long long int: "unsigned long long int ", \
            float: "float ",                             double: "double ",                 \
      long double: "long double ",                                                          \
           void *: "void * ",                                                               \
           char *: "char * ",                   unsigned char *: "unsigned char * ",        \
      short int *: "short int * ",         unsigned short int *: "unsigned short int * ",   \
            int *: "int * ",                     unsigned int *: "unsigned int * ",         \
       long int *: "long int * ",           unsigned long int *: "unsigned long int * ",    \
  long long int *: "long long int * ", unsigned long long int *: "unsigned long long int * ", \
          float *: "float * ",                         double *: "double * ",               \
    long double *: "long double * ",                                                        \
          default: "other ")
#else
    #define GET_DATATYPE_STRING(var) ""
#endif



/******************************************************************************
* Dump integer variable
*/

/******************************************************************************
* \brief
*   The DUMP_VARIABLE macro is used to print the data type, name, and value 
*   of an integer variable in a formatted string to the standard output.
*
* \param
*	var - Variable name.
*
* \return
*	Nothing (void).
*
* \note
*
* \code
*   ...
*   DUMP_VARIABLE(var);
*	...
* \endcode
*
*/
#define DUMP_VARIABLE(var)          printf("%s%s = %d\n\r", GET_DATATYPE_STRING(var), #var, (var))

/******************************************************************************
* \brief
*   The DUMP_VARIABLE_U macro is used to print the data type, name and value 
*   of an unsigned integer variable in a formatted string to the standard output.
*
* \param
*	var - Variable name.
*
* \return
*	Nothing (void).
*
* \note
*
* \code
*   ...
*   DUMP_VARIABLE_U(var);
*	...
* \endcode
*
*/
#define DUMP_VARIABLE_U(var)        printf("%s%s = %u\n\r", GET_DATATYPE_STRING(var), #var, (var))

/******************************************************************************
* \brief
*   The DUMP_VARIABLE_U_HEX macro is used to print the data type, name and 
*   hexadecimal value of a given unsigned integer variable 
*   in a formatted string to the standard output.
*
* \param
*	var - Variable name.
*
* \return
*	Nothing (void).
*
* \note
*
* \code
*   ...
*   DUMP_VARIABLE_U_HEX(var);
*	...
* \endcode
*
*/
#define DUMP_VARIABLE_U_HEX(var)    printf("%s%s = 0x%X\n\r", GET_DATATYPE_STRING(var), #var, (var))



/******************************************************************************
* Dump long integer variable
*/

/******************************************************************************
* \brief
*   The DUMP_VARIABLE_L macro is used to print the data type, name and value of a 
*   long integer variable in a formatted string to the standard output.
*
* \param
*	var - Variable name.
*
* \return
*	Nothing (void).
*
* \note
*
* \code
*   ...
*   DUMP_VARIABLE_L(var);
*	...
* \endcode
*
*/
#define DUMP_VARIABLE_L(var)        printf("%s%s = %ld\n\r", GET_DATATYPE_STRING(var), #var, (var))

/******************************************************************************
* \brief
*   The DUMP_VARIABLE_UL macro is used to print the data type, name and value 
*   of an unsigned long variable in a formatted string to the standard output.
*
* \param
*	var - Variable name.
*
* \return
*	Nothing (void).
*
* \note
*
* \code
*   ...
*   DUMP_VARIABLE_UL(var);
*	...
* \endcode
*
*/
#define DUMP_VARIABLE_UL(var)       printf("%s%s = %lu\n\r", GET_DATATYPE_STRING(var), #var, (var))

/******************************************************************************
* \brief
*   The DUMP_VARIABLE_UL_HEX macro is used to print the data type, name 
*   and hexadecimal value of an unsigned long variable 
*   in a formatted string to the standard output.
*
* \param
*	var - Variable name.
*
* \return
*	Nothing (void).
*
* \note
*
* \code
*   ...
*   DUMP_VARIABLE_UL_HEX(var);
*	...
* \endcode
*
*/
#define DUMP_VARIABLE_UL_HEX(var)   printf("%s%s = 0x%lX\n\r", GET_DATATYPE_STRING(var), #var, (var))



/******************************************************************************
* Dump long long integer variable
*/

#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L || defined(__cplusplus) && __cplusplus > 199711L

/******************************************************************************
* \brief
*   The DUMP_VARIABLE_LL macro is used to print the data type, name and value 
*   of a given long long variable in a formatted string to the standard output.
*
* \param
*	var - Variable name.
*
* \return
*	Nothing (void).
*
* \note
*
* \code
*   ...
*   DUMP_VARIABLE_LL(var);
*	...
* \endcode
*
*/
#define DUMP_VARIABLE_LL(var)       printf("%s%s = %lld\n\r", GET_DATATYPE_STRING(var), #var, (var))

/******************************************************************************
* \brief
*   The DUMP_VARIABLE_ULL macro is used to print the data type, name and value 
*   of an unsigned long long variable in a formatted string to the standard output.
*
* \param
*	var - Variable name.
*
* \return
*	Nothing (void).
*
* \note
*
* \code
*   ...
*   DUMP_VARIABLE_ULL(var);
*	...
* \endcode
*
*/
#define DUMP_VARIABLE_ULL(var)      printf("%s%s = %llu\n\r", GET_DATATYPE_STRING(var), #var, (var))

/******************************************************************************
* \brief
*   The DUMP_VARIABLE_ULL_HEX macro is used to print the data type, name 
*   and hexadecimal value of an unsigned long long variable 
*   in a formatted string to the standard output.
*
* \param
*	var - Variable name.
*
* \return
*	Nothing (void).
*
* \note
*
* \code
*   ...
*   DUMP_VARIABLE_ULL_HEX(var);
*	...
* \endcode
*
*/
#define DUMP_VARIABLE_ULL_HEX(var)  printf("%s%s = 0x%llX\n\r", GET_DATATYPE_STRING(var), #var, (var))

#endif /* defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L || defined(__cplusplus) && __cplusplus > 199711L */



/******************************************************************************
* Dump size_t variable
*/

/******************************************************************************
* \brief
*   The DUMP_VARIABLE_SIZE_T macro is used to print the value of a 
*   variable of type size_t along with its data type, 
*   formatted according to the size of size_t (8 bytes for 64-bit systems, 
*   4 bytes for 32-bit systems, and a fallback for other sizes).
*
* \param
*	var - Variable name.
*
* \return
*	Nothing (void).
*
* \note
*
* \code
*   ...
*   DUMP_VARIABLE_SIZE_T(var);
*	...
* \endcode
*
*/
#define DUMP_VARIABLE_SIZE_T(var)   do { \
                                        switch(sizeof(size_t)) { \
                                            case 8: printf("%s%s = %zu\n\r", GET_DATATYPE_STRING(var), #var, (var)); \
                                                break; \
                                            case 4: printf("%s%s = %lu\n\r", GET_DATATYPE_STRING(var), #var, (unsigned long)(var)); \
                                                break; \
                                            default: printf("%s%s = %u\n\r", GET_DATATYPE_STRING(var), #var, (unsigned int)(var)); \
                                                break; \
                                        } \
                                    } while (0)

/******************************************************************************
* \brief
*   The DUMP_VARIABLE_SIZE_T_HEX macro is used to print the hexadecimal
*   value of a variable of type size_t along with its data type,
*   formatted according to the size of size_t (8 bytes for 64-bit systems,
*   4 bytes for 32-bit systems, and a fallback for other sizes).
*
* \param
*	var - Variable name.
*
* \return
*	Nothing (void).
*
* \note
*
* \code
*   ...
*   DUMP_VARIABLE_SIZE_T_HEX(var);
*	...
* \endcode
*
*/
#define DUMP_VARIABLE_SIZE_T_HEX(var) do { \
                                        switch(sizeof(size_t)) { \
                                            case 8: printf("%s%s = 0x%zX\n\r", GET_DATATYPE_STRING(var), #var, (var)); \
                                                break; \
                                            case 4: printf("%s%s = 0x%lX\n\r", GET_DATATYPE_STRING(var), #var, (unsigned long)(var)); \
                                                break; \
                                            default: printf("%s%s = 0x%X\n\r", GET_DATATYPE_STRING(var), #var, (unsigned int)(var)); \
                                                break; \
                                        } \
                                    } while (0)



/******************************************************************************
* Dump pointer
*/

#if defined(__STDC__) || defined(__STDC_VERSION__) || defined(__cplusplus)
    /* ANSI C or C++: use %p */
    /******************************************************************************
    * \brief
    *   The DUMP_POINTER macro is used to print the data type, name,
    *   and pointer value in a formatted output.
    *
    * \param
    *	var - Variable name.
    *
    * \return
    *	Nothing (void).
    *
    * \note
    *
    * \code
    *   ...
    *   DUMP_POINTER(ptr);
    *	...
    * \endcode
    *
    */
    #define DUMP_POINTER(ptr)       printf("%s%s = %p\n\r", GET_DATATYPE_STRING(ptr), #ptr, (void*)(ptr))
#else
    /* Pre-ANSI C: cast to unsigned long */
    /******************************************************************************
    * \brief
    *   The DUMP_POINTER macro is used to print the data type, name,
    *   and pointer value as unsigned long in a formatted output.
    *
    * \param
    *	var - Variable name.
    *
    * \return
    *	Nothing (void).
    *
    * \note
    *
    * \code
    *   ...
    *   DUMP_POINTER(ptr);
    *	...
    * \endcode
    *
    */
    #define DUMP_POINTER(ptr)       printf("%s%s = %lx\n\r", GET_DATATYPE_STRING(ptr), #ptr, (unsigned long)(ptr))
#endif



/******************************************************************************
* Dump string
*/

/******************************************************************************
* \brief
*   The DUMP_STRING macro is used to print the data type, variable name, 
*   and value of a given variable in a formatted string.
*
* \param
*	var - Variable name.
*
* \return
*	Nothing (void).
*
* \note
*
* \code
*   ...
*   DUMP_STRING(var);
*	...
* \endcode
*
*/
#define DUMP_STRING(var)            printf("%s%s = \"%s\"\n\r", GET_DATATYPE_STRING(var), #var, (var))

#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199409L || defined(__cplusplus) && __cplusplus >= 199711L

/******************************************************************************
* \brief
*   The DUMP_WSTRING macro is used to print the data type and value of a 
*   wide string variable in a formatted output, 
*   displaying it as a wide character string.
*
* \param
*	var - Variable name.
*
* \return
*	Nothing (void).
*
* \note
*
* \code
*   ...
*   DUMP_WSTRING(var);
*	...
* \endcode
*
*/
#define DUMP_WSTRING(var)           printf("%s%s = \"%ls\"\n", GET_DATATYPE_STRING(var), #var, (var))

#endif



/******************************************************************************
* Dump integer array
*/

/******************************************************************************
* \brief
*   DUMP_ARRAY is a macro that prints the data type, name, 
*   and contents of an integer array along with its size in a formatted output.
*
* \param
*	arry - Array name.
* \param
*   size - Array size (number of items)
*
* \return
*	Nothing (void).
*
* \note
*
* \code
*   ...
*   DUMP_ARRAY(array,size);
*	...
* \endcode
*
*/
#define DUMP_ARRAY(arry,size)       do { \
                                        size_t _idx_; \
                                        printf("%s%s (%d items) = [ ", GET_DATATYPE_STRING(arry), #arry, size); \
                                        for (_idx_ = 0; _idx_ < (size); _idx_++) { \
                                            printf("%d ", (arry)[_idx_]); \
                                        } \
                                        printf("]\n\r"); \
                                    } while (0)

/******************************************************************************
* \brief
*   DUMP_ARRAY_U is a macro that prints the data type, name, and contents of an 
*   unsigned integer array along with its size in a formatted output.
*
* \param
*	arry - Array name.
* \param
*   size - Array size (number of items)
*
* \return
*	Nothing (void).
*
* \note
*
* \code
*   ...
*   DUMP_ARRAY_U(array,size);
*	...
* \endcode
*
*/
#define DUMP_ARRAY_U(arry,size)     do { \
                                        size_t _idx_; \
                                        printf("%s%s (%d items) = [ ", GET_DATATYPE_STRING(arry), #arry, size); \
                                        for (_idx_ = 0; _idx_ < (size); _idx_++) { \
                                            printf("%u ", (arry)[_idx_]); \
                                        } \
                                        printf("]\n\r"); \
                                    } while (0)

/******************************************************************************
* \brief
*   DUMP_ARRAY_U_HEX is a macro that prints the hexadecimal representation of 
*   an unsigned integer array's elements along with its data type and size.
*
* \param
*	arry - Array name.
* \param
*   size - Array size (number of items)
*
* \return
*	Nothing (void).
*
* \note
*
* \code
*   ...
*   DUMP_ARRAY_U_HEX(array,size);
*	...
* \endcode
*
*/
#define DUMP_ARRAY_U_HEX(arry,size) do { \
                                        size_t _idx_; \
                                        printf("%s%s (%d items) = [ ", GET_DATATYPE_STRING(arry), #arry, size); \
                                        for (_idx_ = 0; _idx_ < (size); _idx_++) { \
                                            printf("0x%X ", (arry)[_idx_]); \
                                        } \
                                        printf("]\n\r"); \
                                    } while (0)



/******************************************************************************
* Dump long integer array
*/

/******************************************************************************
* \brief
*   DUMP_ARRAY_L is a macro that prints the data type, name, 
*   and contents of an array of long integers along with its size in a formatted output.
*
* \param
*	arry - Array name.
* \param
*   size - Array size (number of items)
*
* \return
*	Nothing (void).
*
* \note
*
* \code
*   ...
*   DUMP_ARRAY_L(array,size);
*	...
* \endcode
*
*/
#define DUMP_ARRAY_L(arry,size)    do { \
                                        size_t _idx_; \
                                        printf("%s%s (%d items) = [ ", GET_DATATYPE_STRING(arry), #arry, size); \
                                        for (_idx_ = 0; _idx_ < (size); _idx_++) { \
                                            printf("%ld ", (arry)[_idx_]); \
                                        } \
                                        printf("]\n\r"); \
                                    } while (0)

/******************************************************************************
* \brief
*   DUMP_ARRAY_UL is a macro that prints the data type, name,
*   and contents of an array of unsigned long integers along with its size 
*   in a formatted output.
*
* \param
*	arry - Array name.
* \param
*   size - Array size (number of items)
*
* \return
*	Nothing (void).
*
* \note
*
* \code
*   ...
*   DUMP_ARRAY_UL(array,size);
*	...
* \endcode
*
*/
#define DUMP_ARRAY_UL(arry,size)   do { \
                                        size_t _idx_; \
                                        printf("%s%s (%d items) = [ ", GET_DATATYPE_STRING(arry), #arry, size); \
                                        for (_idx_ = 0; _idx_ < (size); _idx_++) { \
                                            printf("%lu ", (arry)[_idx_]); \
                                        } \
                                        printf("]\n\r"); \
                                    } while (0)

/******************************************************************************
* \brief
*   The DUMP_ARRAY_UL_HEX macro is used to print the hexadecimal representation 
*   of an array of unsigned long integers, along with its data type and size, 
*   in a formatted output.
*
* \param
*	arry - Array name.
* \param
*   size - Array size (number of items)
*
* \return
*	Nothing (void).
*
* \note
*
* \code
*   ...
*   DUMP_ARRAY_UL_HEX(array,size);
*	...
* \endcode
*
*/
#define DUMP_ARRAY_UL_HEX(arry,size) do { \
                                        size_t _idx_; \
                                        printf("%s%s (%d items) = [ ", GET_DATATYPE_STRING(arry), #arry, size); \
                                        for (_idx_ = 0; _idx_ < (size); _idx_++) { \
                                            printf("0x%lX ", (arry)[_idx_]); \
                                        } \
                                        printf("]\n\r"); \
                                    } while (0)



/******************************************************************************
* Dump long long integer array
*/

#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L || defined(__cplusplus) && __cplusplus > 199711L

/******************************************************************************
* \brief
*   DUMP_ARRAY_LL is a macro that prints the contents of a long long integer array 
*   along with its size and data type in a formatted manner.
*
* \param
*	arry - Array name.
* \param
*   size - Array size (number of items)
*
* \return
*	Nothing (void).
*
* \note
*
* \code
*   ...
*   DUMP_ARRAY_LL(array,size);
*	...
* \endcode
*
*/
#define DUMP_ARRAY_LL(arry,size)   do { \
                                        size_t _idx_; \
                                        printf("%s%s (%d items) = [ ", GET_DATATYPE_STRING(arry), #arry, size); \
                                        for (_idx_ = 0; _idx_ < (size); _idx_++) { \
                                            printf("%lld ", (arry)[_idx_]); \
                                        } \
                                        printf("]\n\r"); \
                                    } while (0)

/******************************************************************************
* \brief
*   DUMP_ARRAY_ULL is a macro that prints the contents of an array of 
*   unsigned long long integers along with its size, formatted for easy readability.
*
* \param
*	arry - Array name.
* \param
*   size - Array size (number of items)
*
* \return
*	Nothing (void).
*
* \note
*
* \code
*   ...
*   DUMP_ARRAY_ULL(array,size);
*	...
* \endcode
*
*/
#define DUMP_ARRAY_ULL(arry,size)  do { \
                                        size_t _idx_; \
                                        printf("%s%s (%d items) = [ ", GET_DATATYPE_STRING(arry), #arry, size); \
                                        for (_idx_ = 0; _idx_ < (size); _idx_++) { \
                                            printf("%llu ", (arry)[_idx_]); \
                                        } \
                                        printf("]\n\r"); \
                                    } while (0)

/******************************************************************************
* \brief
*   The DUMP_ARRAY_ULL_HEX macro is used to print the hexadecimal 
*   representation of an array of unsigned long long integers, 
*   along with its data type and size, in a formatted output.
*
* \param
*	arry - Array name.
* \param
*   size - Array size (number of items)
*
* \return
*	Nothing (void).
*
* \note
*
* \code
*   ...
*   DUMP_ARRAY_ULL_HEX(array,size);
*	...
* \endcode
*
*/
#define DUMP_ARRAY_ULL_HEX(arry,size) do { \
                                        size_t _idx_; \
                                        printf("%s%s (%d items) = [ ", GET_DATATYPE_STRING(arry), #arry, size); \
                                        for (_idx_ = 0; _idx_ < (size); _idx_++) { \
                                            printf("0x%llX ", (arry)[_idx_]); \
                                        } \
                                        printf("]\n\r"); \
                                    } while (0)

#endif /* defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L || defined(__cplusplus) && __cplusplus > 199711L */



#endif /* MDUMP_H */
