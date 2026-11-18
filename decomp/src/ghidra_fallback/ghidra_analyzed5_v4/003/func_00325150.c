#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_004ED9C8(int param_1);
extern int DAT_0032526c;

// USA 00325150 <- EU 0032512C (Ghidra, non-matching)
// GLOBAL DAT_0032526c int

void func_00325150(int *param_1)

{
  float *pfVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if (*(char *)((int)param_1 + 0x4cd) == '\0') {
    pfVar1 = (float *)(**(code **)(*param_1 + 0x78))(param_1);
    fVar7 = *pfVar1 - ALBW_AS_F32(param_1[0x11e]);
    fVar6 = pfVar1[2] - ALBW_AS_F32(param_1[0x120]);
    if (ALBW_AS_F32(param_1[0xf7]) * ALBW_AS_F32(param_1[0xf7]) + ALBW_AS_F32(param_1[0xf9]) * ALBW_AS_F32(param_1[0xf9]) <=
        fVar7 * fVar7 + fVar6 * fVar6) {
      func_00115C54((float *)(param_1 + 0xf4),(float *)(param_1 + 0xf4),(float *)(param_1 + 0xf7));
    }
    else {
      param_1[0xf4] = param_1[0x11e];
      iVar3 = DAT_0032526c;
      param_1[0xf6] = param_1[0x120];
      param_1[0x12e] = 0x1e;
      param_1[0xf7] = iVar3;
      param_1[0xf9] = iVar3;
      param_1[0xf5] = (int)ALBW_AS_U32((ALBW_AS_F32(param_1[0xf5]) + ALBW_AS_F32(param_1[0xf8])));
    }
  }
  else {
    func_00115C54((float *)(param_1 + 0xf4),(float *)(param_1 + 0xf4),(float *)(param_1 + 0xf7));
    *(undefined1 *)((int)param_1 + 0x4cd) = 0;
  }
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 0x78))(param_1);
  fVar6 = ALBW_AS_F32(puVar2[1]);
  fVar7 = ALBW_AS_F32(param_1[0x12f]);
  iVar3 = param_1[0x103];
  uVar4 = *puVar2;
  uVar5 = puVar2[2];
  *(undefined4 *)(iVar3 + 4) = uVar4;
  *(float *)(iVar3 + 8) = fVar6 + fVar7;
  *(undefined4 *)(iVar3 + 0xc) = uVar5;
  iVar3 = param_1[0x126];
  fVar8 = ALBW_AS_F32(param_1[0x12f]);
  fVar9 = ALBW_AS_F32(param_1[0x130]);
  *(undefined4 *)(iVar3 + 4) = uVar4;
  *(float *)(iVar3 + 8) = ((fVar6 + fVar7) - fVar8) + fVar9;
  *(undefined4 *)(iVar3 + 0xc) = uVar5;
  func_004ED9C8(param_1[0x125]);
  *(undefined1 *)((int)param_1 + 0x4ed) = 0;
  *(undefined1 *)(param_1 + 0x13b) = 0;
  *(undefined1 *)((int)param_1 + 0x4eb) = 0;
  return;
}

