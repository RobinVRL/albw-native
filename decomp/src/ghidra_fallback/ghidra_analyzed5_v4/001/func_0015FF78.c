#include "ghidra_types.h"

extern int func_00520FC0(void);
extern int func_0054F9E4(int param_1,uint param_2);
extern int func_0054FBB0(int param_1,int param_2);
extern int func_0054FBC4(int param_1,float *param_2,float *param_3);
extern int func_0054FC84(int param_1,int param_2);
extern int func_00550244(int param_1,uint param_2);
extern int func_0065836C(undefined4 *param_1,undefined1 param_2);
extern int DAT_00160178;
extern float DAT_0016017c;
extern int DAT_00160180;
extern undefined4 DAT_00160184;
extern undefined4 DAT_00160188;

// USA 0015FF78 <- EU 0015FF7C (Ghidra, non-matching)
// GLOBAL DAT_00160178 int
// GLOBAL DAT_0016017c float
// GLOBAL DAT_00160180 int
// GLOBAL DAT_00160184 undefined4
// GLOBAL DAT_00160188 undefined4

undefined4 func_0015FF78(int param_1,int param_2)

{
  float *pfVar1;
  int iVar2;
  uint uVar3;
  float *pfVar4;
  uint uVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  pfVar1 = (float *)func_00520FC0();
  iVar2 = param_1 + 0x9b4;
  uVar3 = func_0054FBC4(iVar2,(float *)(param_1 + 0x994),(float *)0x0);
  pfVar4 = (float *)func_0054F9E4(iVar2,uVar3);
  if ((param_2 == 0) &&
     (DAT_00160178 <=
      (int)ALBW_AS_U32(SQRT((*pfVar4 - *pfVar1) * (*pfVar4 - *pfVar1) +
                (pfVar4[2] - pfVar1[2]) * (pfVar4[2] - pfVar1[2]))))) {
    return 0;
  }
  uVar5 = func_0054FC84(iVar2,uVar3);
  pfVar4 = (float *)func_0054F9E4(iVar2,uVar5);
  fVar9 = SQRT((*pfVar4 - *pfVar1) * (*pfVar4 - *pfVar1) +
               (pfVar4[2] - pfVar1[2]) * (pfVar4[2] - pfVar1[2]));
  uVar5 = func_0054FBB0(iVar2,uVar3);
  pfVar4 = (float *)func_0054F9E4(iVar2,uVar5);
  fVar8 = SQRT((*pfVar4 - *pfVar1) * (*pfVar4 - *pfVar1) +
               (pfVar4[2] - pfVar1[2]) * (pfVar4[2] - pfVar1[2]));
  if (param_2 == 0) {
    fVar7 = fVar9 - fVar8;
    if (fVar7 <= DAT_0016017c) {
      fVar7 = -fVar7;
    }
    if ((int)ALBW_AS_U32(fVar7) < DAT_00160180) {
      return 0;
    }
  }
  if (fVar8 <= fVar9) {
    *(undefined4 *)(param_1 + 0x910) = DAT_00160184;
    uVar3 = func_0054FC84(iVar2,uVar3);
    *(uint *)(param_1 + 0x914) = uVar3;
    while (iVar6 = func_00550244(iVar2,*(uint *)(param_1 + 0x914)), iVar6 != 0) {
      uVar3 = func_0054FC84(iVar2,*(int *)(param_1 + 0x914));
      *(uint *)(param_1 + 0x914) = uVar3;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x910) = DAT_00160188;
    uVar3 = func_0054FBB0(iVar2,uVar3);
    *(uint *)(param_1 + 0x914) = uVar3;
    while (iVar6 = func_00550244(iVar2,*(uint *)(param_1 + 0x914)), iVar6 != 0) {
      uVar3 = func_0054FBB0(iVar2,*(int *)(param_1 + 0x914));
      *(uint *)(param_1 + 0x914) = uVar3;
    }
  }
  *(undefined1 *)(param_1 + 0x918) = 0;
  func_0065836C((undefined4 *)(param_1 + 0x8bc),10);
  return 1;
}

