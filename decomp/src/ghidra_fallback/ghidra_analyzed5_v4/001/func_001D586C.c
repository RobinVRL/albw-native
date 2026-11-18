#include "ghidra_types.h"

extern int func_001D47B4(int param_1,uint param_2,float fparam_0,float fparam_1,float fparam_2);
extern int func_001D4854(int param_1,undefined4 param_2,float fparam_0);
extern int func_001D4AE8(int param_1,undefined4 param_2,float fparam_0);
extern int func_00520FC0(void);
extern int func_00588F08(int param_1);
extern float DAT_001d59d8;
extern float *DAT_001d59dc;
extern int *DAT_001d59e0;
extern float DAT_001d59e4;

// USA 001D586C <- EU 001D586C (Ghidra, non-matching)
// GLOBAL DAT_001d59d8 float
// GLOBAL DAT_001d59dc float *
// GLOBAL DAT_001d59e0 int *
// GLOBAL DAT_001d59e4 float

undefined4 func_001D586C(int param_1)

{
  float *pfVar1;
  int *piVar2;
  undefined4 *puVar3;
  float *pfVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  
  func_00520FC0();
  puVar3 = (undefined4 *)func_00520FC0();
  fVar8 = DAT_001d59d8;
  uVar6 = *puVar3;
  uVar7 = puVar3[1];
  *(undefined4 *)(param_1 + 0x3d8) = puVar3[2];
  *(undefined4 *)(param_1 + 0x3d0) = uVar6;
  *(undefined4 *)(param_1 + 0x3d4) = uVar7;
  *(float *)(param_1 + 0x3d4) = *(float *)(param_1 + 0x3d4) + fVar8;
  puVar3 = (undefined4 *)func_00520FC0();
  pfVar1 = DAT_001d59dc;
  uVar6 = *puVar3;
  uVar7 = puVar3[1];
  *(undefined4 *)(param_1 + 0x470) = puVar3[2];
  *(undefined4 *)(param_1 + 0x468) = uVar6;
  *(undefined4 *)(param_1 + 0x46c) = uVar7;
  piVar2 = DAT_001d59e0;
  *(float *)(param_1 + 0x46c) = *(float *)(param_1 + 0x46c) + pfVar1[1];
  pfVar4 = (float *)func_00588F08(*piVar2);
  fVar8 = *(float *)(param_1 + 0x468);
  if (fVar8 <= *pfVar4) {
    fVar8 = fVar8 + *pfVar1;
    *(float *)(param_1 + 0x468) = fVar8;
    *(undefined4 *)(param_1 + 1000) = 0x40000000;
    iVar5 = func_001D47B4(param_1,param_1 + 0x46cU,fVar8,*(float *)(param_1 + 0x46cU),
                          *(float *)(param_1 + 0x470));
    if (iVar5 != 0) {
      pfVar4 = (float *)func_00520FC0();
      *(float *)(param_1 + 0x468) = *pfVar4 - *pfVar1;
      *(undefined4 *)(param_1 + 1000) = 0xc0000000;
    }
  }
  else {
    fVar8 = fVar8 - *pfVar1;
    *(float *)(param_1 + 0x468) = fVar8;
    *(undefined4 *)(param_1 + 1000) = 0xc0000000;
    iVar5 = func_001D47B4(param_1,param_1 + 0x46cU,fVar8,*(float *)(param_1 + 0x46cU),
                          *(float *)(param_1 + 0x470));
    if (iVar5 != 0) {
      pfVar4 = (float *)func_00520FC0();
      *(float *)(param_1 + 0x468) = *pfVar4 + *pfVar1;
      *(undefined4 *)(param_1 + 1000) = 0x40000000;
    }
  }
  fVar8 = DAT_001d59e4;
  *(undefined4 *)(param_1 + 0x3d0) = *(undefined4 *)(param_1 + 0x468);
  *(undefined4 *)(param_1 + 0x498) = *(undefined4 *)(param_1 + 1000);
  *(undefined1 *)(param_1 + 0x4c1) = 0;
  func_001D4854(param_1,0,fVar8);
  return func_001D4AE8(param_1,0,fVar8);
}

