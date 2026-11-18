#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00520FC0(void);
extern int func_0068C690(float *param_1);

// USA 00165420 <- EU 00165424 (Ghidra, non-matching)

void func_00165420(int param_1,uint param_2)

{
  uint uVar1;
  float *pfVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define afStack_18 ((float *)(albw_frame + 0x8))
  uVar1 = param_2 & 0xff;
  bVar5 = 0x1d < uVar1;
  bVar4 = uVar1 != 0x1e;
  if (bVar4) {
    uVar1 = uVar1 - 0xe;
    bVar5 = 2 < uVar1;
  }
  if (!bVar5 || (!bVar4 || uVar1 == 3)) {
    pfVar2 = (float *)func_00520FC0();
    func_00115C70(afStack_18,pfVar2,(float *)(param_1 + 0x3d0));
    iVar3 = func_0068C690(afStack_18);
    *(int *)(param_1 + 1000) = iVar3;
  }
  return;
}

