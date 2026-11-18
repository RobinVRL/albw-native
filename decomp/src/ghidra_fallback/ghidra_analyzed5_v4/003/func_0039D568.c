#include "ghidra_types.h"

extern int func_004EDEA0(int param_1,uint *param_2);
extern int func_004FC1CC(int param_1,int param_2,byte param_3,float fparam_0);
extern int func_0052FBA0(int param_1,uint param_2);
extern int *DAT_0039d59c;
extern float DAT_0039d5a0;

// USA 0039D568 <- EU 0039D544 (Ghidra, non-matching)
// GLOBAL DAT_0039d59c int *
// GLOBAL DAT_0039d5a0 float

void func_0039D568(int param_1)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(uint *)(albw_frame + 0x0))
  iVar1 = func_0052FBA0(*DAT_0039d59c + 0x3dbbc,*(uint *)(param_1 + 0x50));
  if (iVar1 != 0) {
    local_10 = *(uint *)(iVar1 + 0x2cc);
    func_004EDEA0(*(int *)(param_1 + 0x430),&local_10);
    func_004FC1CC(iVar1,*(int *)(param_1 + 0x4d4),0xb,DAT_0039d5a0);
  }
  return;
}

