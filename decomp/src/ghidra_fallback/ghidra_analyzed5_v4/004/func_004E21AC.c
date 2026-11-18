#include "ghidra_types.h"

extern int func_001509A4(int param_1,int *param_2,int param_3);
extern undefined4 func_00151148(int param_1,int param_2);
extern int iRam004e21f8;
extern undefined4 uRam004e21e4;
extern char s_cf_004e21e8[];

// USA 004E21AC <- EU 004E2184 (Ghidra, non-matching)
// GLOBAL UNK_004e21e4 undefined4
// GLOBAL UNK_004e21f8 int

undefined4 func_004E21AC(int param_1)

{
  undefined4 uVar1;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define iStack_10 (*(int *)(albw_frame + 0x0))
  #define pcStack_c (*(char * *)(albw_frame + 0x4))
  func_00151148(*(int *)(param_1 + 0x458),0);
  uVar1 = uRam004e21e4;
  *(undefined4 *)(param_1 + 0x518) = 8;
  *(undefined4 *)(param_1 + 0x51c) = uVar1;
  *(undefined4 *)(param_1 + 0x514) = 0;
  pcStack_c = (char *)((int)s_cf_004e21e8);
  iStack_10 = iRam004e21f8;
  return func_001509A4(param_1,&iStack_10,0);
}

