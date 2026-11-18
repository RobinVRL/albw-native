#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_004FB4E0(int param_1,float fparam_0);
extern int iRam0021d9c4;
extern float DAT_0021d9b0;
extern char s_SE_Rope_FALL_0021d9b4[];

// USA 0021D924 <- EU 0021D924 (Ghidra, non-matching)
// GLOBAL DAT_0021d9b0 float
// GLOBAL UNK_0021d9c4 int
// GLOBAL s_SE_Rope_FALL_0021d9b4 string

undefined4 func_0021D924(int param_1)

{
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define iStack_18 (*(int *)(albw_frame + 0x8))
  #define pcStack_14 (*(char * *)(albw_frame + 0xc))
  fparam_0 = DAT_0021d9b0;
  *(float *)(param_1 + 0x3dc) = DAT_0021d9b0;
  *(float *)(param_1 + 0x3e4) = fparam_0;
  if (*(char *)(param_1 + 0x8c1) == '\x04') {
    func_004FABDC(param_1,3,0xffffffff,0);
  }
  else {
    func_004FABDC(param_1,0,0xffffffff,0);
  }
  func_004FB4E0(param_1,fparam_0);
  pcStack_14 = s_SE_Rope_FALL_0021d9b4;
  iStack_18 = iRam0021d9c4;
  return func_00150A84((int *)param_1,&iStack_18,0);
}

