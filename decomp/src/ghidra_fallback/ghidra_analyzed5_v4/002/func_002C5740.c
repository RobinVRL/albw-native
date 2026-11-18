#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_004356B4(int *param_1);
extern undefined4 func_004A7F00(int param_1,int param_2,uint param_3);
extern int func_004ED9C8(int param_1);
extern int func_004EDAD0(int param_1,uint *param_2);
extern int func_004EDC9C(undefined4 *param_1);
extern int func_0054D964(int param_1,uint param_2);
extern float DAT_002c5890;
extern undefined4 *DAT_002c5894;
extern int *DAT_002c5898;

// USA 002C5740 <- EU 002C571C (Ghidra, non-matching)
// GLOBAL DAT_002c5890 float
// GLOBAL DAT_002c5894 undefined4 *
// GLOBAL DAT_002c5898 int *

void func_002C5740(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  uint in_fpscr;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(uint *)(albw_frame + 0x0))
  if (-1 < *(int *)(param_1 + 0x468)) {
    iVar1 = func_0054D964(param_1,0);
    *(int *)(param_1 + 0x450) = iVar1;
    uVar7 = ALBW_AS_U32(VectorSignedToFloat(*(undefined4 *)(param_1 + 0x464),(byte)(in_fpscr >> 0x15) & 3));
    *(undefined4 *)(*(int *)(param_1 + 0x450) + 0x60) = uVar7;
    uVar7 = ALBW_AS_U32(VectorSignedToFloat(*(undefined4 *)(param_1 + 0x468),(byte)(in_fpscr >> 0x15) & 3));
    *(undefined4 *)(*(int *)(param_1 + 0x450) + 0x58) = uVar7;
    iVar4 = *(int *)(param_1 + 0x464) + -1;
    iVar1 = *(int *)(param_1 + 0x468) + -1;
    fVar11 = (float)VectorSignedToFloat(iVar4,(byte)(in_fpscr >> 0x15) & 3);
    fVar10 = (float)VectorSignedToFloat(iVar4,(byte)(in_fpscr >> 0x15) & 3);
    fVar12 = (float)VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x15) & 3);
    fVar9 = (float)VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x15) & 3);
    iVar1 = *(int *)(param_1 + 0x450);
    fVar8 = *(float *)(param_1 + 0x3d4) - DAT_002c5890;
    fVar11 = (*(float *)(param_1 + 0x46c) * fVar11 * DAT_002c5890 -
             *(float *)(param_1 + 0x470) * fVar9 * DAT_002c5890) + *(float *)(param_1 + 0x3d8);
    fVar9 = *(float *)(param_1 + 0x470) * fVar10 * DAT_002c5890 +
            *(float *)(param_1 + 0x46c) * fVar12 * DAT_002c5890 + *(float *)(param_1 + 0x3d0);
    *(float *)(iVar1 + 4) = fVar9;
    *(float *)(iVar1 + 8) = fVar8;
    *(float *)(iVar1 + 0xc) = fVar11;
    *(float *)(param_1 + 0x458) = fVar9;
    *(float *)(param_1 + 0x45c) = fVar8;
    *(float *)(param_1 + 0x460) = fVar11;
    func_004356B4(*(int **)(param_1 + 0x450));
    puVar2 = (undefined4 *)func_0010BAB4(0x48);
    puVar3 = (undefined4 *)0x0;
    if (puVar2 != (undefined4 *)0x0) {
      puVar3 = func_004EDC9C(puVar2);
    }
    *(undefined4 **)(param_1 + 0x454) = puVar3;
    piVar6 = (int *)(param_1 + 0x454);
    puVar3[6] = *(undefined4 *)(param_1 + 0x450);
    func_004ED9C8(*(int *)(param_1 + 0x454));
    local_10 = *(uint *)(param_1 + 0x2cc);
    func_004EDAD0(*piVar6,&local_10);
    puVar3 = DAT_002c5894;
    *(undefined2 *)(*piVar6 + 0x2c) = *(undefined2 *)(param_1 + 0x54);
    uVar7 = *puVar3;
    uVar5 = puVar3[1];
    *(int *)(param_1 + 0x41c) = param_1;
    *(undefined4 *)(param_1 + 0x420) = uVar7;
    *(undefined4 *)(param_1 + 0x424) = uVar5;
    *(int *)(*piVar6 + 0x28) = param_1 + 0x418;
    func_004A7F00(*DAT_002c5898,*piVar6,2);
  }
  return;
}

