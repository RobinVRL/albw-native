#include "ghidra_types.h"

extern int func_00261574(undefined4 *param_1,undefined4 *param_2);
extern undefined4 DAT_002e1b38;
extern float DAT_002e1b3c;
extern int DAT_002e1b40;

// USA 002E1A5C <- EU 002E1A38 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 float *
// PARAM param_6 Stack[0x4]:4 int
// GLOBAL DAT_002e1b38 undefined4
// GLOBAL DAT_002e1b3c float
// GLOBAL DAT_002e1b40 int

void func_002E1A5C(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                  float *param_5,int param_6,float fparam_0,float fparam_1)

{
  float fVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  puVar2 = (undefined4 *)func_00261574(param_1,param_2);
  *puVar2 = DAT_002e1b38;
  uVar5 = param_3[1];
  uVar6 = param_3[2];
  puVar2[8] = *param_3;
  puVar2[9] = uVar5;
  puVar2[10] = uVar6;
  iVar3 = param_4[6];
  uVar10 = param_4[7];
  uVar5 = param_4[1];
  uVar6 = param_4[2];
  fVar7 = ALBW_AS_F32(param_4[3]);
  fVar8 = ALBW_AS_F32(param_4[4]);
  uVar9 = param_4[5];
  puVar2[0xb] = *param_4;
  puVar2[0xc] = uVar5;
  puVar2[0xd] = uVar6;
  puVar2[0xe] = ALBW_AS_U32(fVar7);
  puVar2[0xf] = ALBW_AS_U32(fVar8);
  puVar2[0x10] = uVar9;
  puVar2[0x11] = iVar3;
  puVar2[0x12] = uVar10;
  uVar5 = param_4[9];
  uVar6 = param_4[10];
  puVar2[0x13] = param_4[8];
  puVar2[0x14] = uVar5;
  puVar2[0x15] = uVar6;
  puVar2[0x16] = ALBW_AS_U32(fparam_0 + fparam_1);
  fVar7 = fVar7 + fparam_1;
  puVar2[0x17] = ALBW_AS_U32(*param_5);
  puVar2[0xe] = ALBW_AS_U32(fVar7);
  fVar1 = DAT_002e1b3c;
  if (iVar3 != 0) {
    fVar7 = fVar7 + fparam_0;
    puVar2[0xe] = ALBW_AS_U32(fVar7);
    if ((int)ALBW_AS_U32(fVar7) < 0x3f800001) {
      fVar7 = fVar1;
    }
    puVar2[0xe] = ALBW_AS_U32(fVar7);
    fVar8 = fVar8 + *param_5;
    puVar2[0xf] = ALBW_AS_U32(fVar8);
    if ((int)ALBW_AS_U32(fVar8) < 0x3f800001) {
      fVar8 = fVar1;
    }
    puVar2[0xf] = ALBW_AS_U32(fVar8);
    *param_5 = fVar8;
    puVar2[0x11] = 0;
  }
  iVar3 = puVar2[0xc] + param_6;
  puVar2[2] = iVar3;
  if (param_6 != 0) {
    iVar4 = (DAT_002e1b40 >> 0x1e) - DAT_002e1b40;
    if (DAT_002e1b40 < iVar3) {
      puVar2[2] = DAT_002e1b40;
    }
    else if (iVar3 < iVar4) {
      puVar2[2] = iVar4;
    }
  }
  puVar2[3] = puVar2[0xd];
  return;
}

