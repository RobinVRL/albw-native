#include "ghidra_types.h"

extern int func_003D4E78(int param_1);
extern int func_003D4F20(int *param_1,int param_2,int *param_3,int param_4);
extern int func_003D5608(void);

// USA 003D52C4 <- EU 003D52A4 (Ghidra, non-matching)

int * func_003D52C4(int *param_1,int param_2)

{
  _Alignas(8) unsigned char albw_frame[0x20];
  #define auStack_18 ((undefined1 *)(albw_frame + 0x8))
  #define iStack_10 (*(int *)(albw_frame + 0x10))
  *param_1 = param_2;
  *(undefined2 *)(param_1 + 1) = 0;
  *(undefined2 *)((int)param_1 + 6) = 0x80;
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined1 *)((int)param_1 + 0x49) = 0;
  param_1[0x13] = -1;
  param_1[0x14] = -1;
  param_1[0x15] = -1;
  func_003D5608();
  *(undefined2 *)(param_1 + 2) = 0;
  *(undefined2 *)((int)param_1 + 10) = 0;
  *(undefined2 *)(param_1 + 3) = 0;
  *(undefined2 *)((int)param_1 + 0xe) = 0;
  *(undefined2 *)(param_1 + 4) = 0;
  *(undefined2 *)((int)param_1 + 0x12) = 0;
  func_003D4E78((int)param_1);
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined1 *)((int)param_1 + 0x49) = 0;
  func_003D4F20(param_1,(int)auStack_18,&iStack_10,1);
  return param_1;
}

