#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int iRam002188f8;
extern char s_SE_Kyameron_APPEAR_002188e4[];

// USA 002188A0 <- EU 002188A0 (Ghidra, non-matching)
// GLOBAL UNK_002188f8 int
// GLOBAL s_SE_Kyameron_APPEAR_002188e4 string

undefined4 func_002188A0(int param_1)

{
  _Alignas(8) unsigned char albw_frame[0x10];
  #define iStack_10 (*(int *)(albw_frame + 0x0))
  #define pcStack_c (*(char * *)(albw_frame + 0x4))
  func_004FABDC(param_1,1,0xffffffff,0);
  pcStack_c = s_SE_Kyameron_APPEAR_002188e4;
  iStack_10 = iRam002188f8;
  return func_00150A84((int *)param_1,&iStack_10,0);
}

