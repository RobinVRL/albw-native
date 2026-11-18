#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int iRam00163ee4;
extern char s_SE_Omugai_APPEAR_00163ed0[];

// USA 00163E88 <- EU 00163E8C (Ghidra, non-matching)
// GLOBAL UNK_00163ee4 int
// GLOBAL s_SE_Omugai_APPEAR_00163ed0 string

undefined4 func_00163E88(int param_1)

{
  _Alignas(8) unsigned char albw_frame[0x10];
  #define iStack_10 (*(int *)(albw_frame + 0x0))
  #define pcStack_c (*(char * *)(albw_frame + 0x4))
  func_004FABDC(param_1,7,0xffffffff,0);
  pcStack_c = s_SE_Omugai_APPEAR_00163ed0;
  iStack_10 = iRam00163ee4;
  return func_00150A84((int *)param_1,&iStack_10,0);
}

