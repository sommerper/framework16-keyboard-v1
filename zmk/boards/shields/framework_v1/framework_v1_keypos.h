/*
  KEY MATRIX / LAYOUT MAPPING
 ╭────────────────────────────┬─────────────────────────────╮ ╭─────────────────────────┬──────────────────────────╮
 │      0   1   2   3   4     │      5   6   7   8   9      │ │     LN4 LN3 LN2 LN1 LN0 │  RN0 RN1 RN2 RN3 RN4     │
 │     10  11  12  13  14     │     15  16  17  18  19      │ │     LT4 LT3 LT2 LT1 LT0 │  RT0 RT1 RT2 RT3 RT4     │
 │     20  21  22  23  24     │     25  26  27  28  29      │ │     LM4 LM3 LM2 LM1 LM0 │  RM0 RM1 RM2 RM3 RM4     │
 │         30  31             │             32  33          │ │         LB1 LB0         │          RB0 RB1         │
 ╰───────────────┬────────────┼────────────┬────────────────╯ ╰──────────┬──────────────┼──────────────┬───────────╯
                 │ 34  35  36 │ 37  38  39 │                             │  LH2 LH1 LH0 │  RH0 RH1 RH3 │
                 ╰────────────┴────────────╯                             ╰──────────────┴──────────────╯
*/

#pragma once

// left-num row
#define LN0 4
#define LN1 3
#define LN2 2
#define LN3 1
#define LN4 0

// right-num row
#define RN0 5
#define RN1 6
#define RN2 7
#define RN3 8
#define RN4 9

// left-top row
#define LT0 14
#define LT1 13
#define LT2 12
#define LT3 11
#define LT4 10

// right-top row
#define RT0 15
#define RT1 16
#define RT2 17
#define RT3 18
#define RT4 19

// left-middle row
#define LM0 24
#define LM1 23
#define LM2 22
#define LM3 21
#define LM4 20

// right-middle row
#define RM0 25
#define RM1 26
#define RM2 27
#define RM3 28
#define RM4 29

// left-bottom row
#define LB0 31
#define LB1 30

// right-bottom row
#define RB0 32
#define RB1 33

// left thumb keys
#define LH0 36
#define LH1 35
#define LH2 34

// right thumb keys
#define RH0 37
#define RH1 38
#define RH2 39

