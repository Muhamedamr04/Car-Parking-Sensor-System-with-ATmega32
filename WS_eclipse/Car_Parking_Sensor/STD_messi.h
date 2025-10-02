/*
 * STD_messi.h
 *
 *  Created on: Sep 18, 2025
 *      Author: MOHAMED
 */

#ifndef STD_MESSI_H_
#define STD_MESSI_H_

/* Boolean Data Type */
typedef unsigned char boolean_messi;

/* Boolean Values */
#ifndef FALSE_MESSI
#define FALSE_MESSI       (0u)
#endif
#ifndef TRUE_MESSI
#define TRUE_MESSI        (1u)
#endif

#define LOGIC_HIGH_MESSI     (1u)
#define LOGIC_LOW_MESSI       (0u)


#define NULL_PTR_MESSI    ((void*)0)

typedef unsigned char         uint8;          /*           0 .. 255              */
typedef signed char           sint8;          /*        -128 .. +127             */
typedef unsigned short        uint16;         /*           0 .. 65535            */
typedef signed short          sint16;         /*      -32768 .. +32767           */
typedef unsigned long         uint32;         /*           0 .. 4294967295       */
typedef signed long           sint32;         /* -2147483648 .. +2147483647      */
typedef unsigned long long    uint64;         /*       0 .. 18446744073709551615  */
typedef signed long long      sint64;         /* -9223372036854775808 .. 9223372036854775807 */
typedef float                 float32;
typedef double                float64;


#endif /* STD_MESSI_H_ */
