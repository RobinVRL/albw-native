#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_00520FC0(void);
extern int func_0065D9FC(undefined4 *param_1,undefined1 param_2);
extern int func_0068C690(float *param_1);
extern int *DAT_00214a38;
extern float DAT_00214a3c;

// USA 002149BC <- EU 002149BC (Ghidra, non-matching)
// GLOBAL DAT_00214a38 int *
// GLOBAL DAT_00214a3c float

void func_002149BC(int param_1)

{
  float *pfVar1;
  int iVar2;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define afStack_18 ((float *)(albw_frame + 0x8))
  pfVar1 = (float *)func_00520FC0();
  func_00115C70(afStack_18,pfVar1,(float *)(param_1 + 0x3d0));
  iVar2 = func_0068C690(afStack_18);
  func_0051D2F4((int *)(param_1 + 1000),iVar2,0,*DAT_00214a38,DAT_00214a3c);
  if (*(uint *)(param_1 + 0xab8) < *(uint *)(param_1 + 0xabc)) {
    *(uint *)(param_1 + 0xab8) = *(uint *)(param_1 + 0xab8) + 1;
  }
  else {
    func_0065D9FC((undefined4 *)(param_1 + 0x8bc),2);
  }
  return;
}

