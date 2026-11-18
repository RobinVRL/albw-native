#include "ghidra_types.h"

extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern undefined4 func_00151148(int param_1,int param_2);
extern float fRam00252730;
extern int iRam0025274c;
extern undefined4 uRam0025272c;
extern undefined4 uRam00252734;
extern char s_SE_TurtleTurn_WATER_00252738[];

// USA 00252688 <- EU 002526B0 (Ghidra, non-matching)
// GLOBAL UNK_0025272c undefined4
// GLOBAL UNK_00252730 float
// GLOBAL UNK_00252734 undefined4
// GLOBAL UNK_0025274c int
// GLOBAL s_SE_TurtleTurn_WATER_00252738 string

undefined4 func_00252688(int param_1)

{
  _Alignas(8) unsigned char albw_frame[0x10];
  #define iStack_10 (*(int *)(albw_frame + 0x0))
  #define pcStack_c (*(char * *)(albw_frame + 0x4))
  func_00151148(*(int *)(param_1 + 0x520),0);
  *(undefined4 *)(param_1 + 0x550) = uRam0025272c;
  func_00115D70((float *)(param_1 + 0x3dc),(float *)(param_1 + 0x3dc),fRam00252730);
  iStack_10 = iRam0025274c;
  *(undefined4 *)(param_1 + 0x3e0) = uRam00252734;
  *(undefined4 *)(param_1 + 0x89c) = *(undefined4 *)(param_1 + 0x3d0);
  *(undefined4 *)(param_1 + 0x8a0) = *(undefined4 *)(param_1 + 0x3d4);
  *(undefined4 *)(param_1 + 0x8a4) = *(undefined4 *)(param_1 + 0x3d8);
  pcStack_c = s_SE_TurtleTurn_WATER_00252738;
  return func_00150A84((int *)param_1,&iStack_10,0);
}

