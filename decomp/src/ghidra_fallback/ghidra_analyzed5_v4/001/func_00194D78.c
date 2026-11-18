#include "ghidra_types.h"

extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_003521F0(int param_1,undefined4 param_2);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_004356B4(int *param_1);
extern int func_00520FC0(void);
extern int func_00659910(undefined4 *param_1,undefined1 param_2);
extern float DAT_00194ee4;
extern float DAT_00194ee8;
extern float DAT_00194eec;

// USA 00194D78 <- EU 00194D78 (Ghidra, non-matching)
// GLOBAL DAT_00194ee4 float
// GLOBAL DAT_00194ee8 float
// GLOBAL DAT_00194eec float

void func_00194D78(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  bool bVar8;
  uint in_fpscr;
  float fVar9;
  float fVar10;
  
  cVar1 = *(char *)(param_1 + 0x4cd);
  if (cVar1 == '\x01') {
    func_00659910((undefined4 *)(param_1 + 0x490),1);
  }
  else if (cVar1 == '\x02' || cVar1 == '\x03') {
    func_003521F0(param_1 + 0x324,1);
    func_00659910((undefined4 *)(param_1 + 0x490),2);
  }
  piVar7 = *(int **)(param_1 + 0x4a4);
  piVar4 = (int *)(*(int *)(param_1 + 0x4ac) + *(char *)(param_1 + 0x494) * 8);
  uVar2 = *(uint *)(*(int *)(param_1 + 0x4ac) + *(char *)(param_1 + 0x494) * 8 + 4);
  if ((uVar2 & 1) != 0) {
    piVar4 = (int *)(*piVar4 + *(int *)((int)piVar7 + ((int)uVar2 >> 1)));
  }
  (*(code *)*piVar4)();
  iVar6 = *(int *)(param_1 + 0x4a0);
  iVar3 = *(int *)(param_1 + 0x490) + 1;
  *(int *)(param_1 + 0x490) = iVar3;
  uVar5 = extraout_r1;
  if (iVar6 != 0) {
    fVar9 = (float)VectorUnsignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210(iVar6,1,fVar9);
    uVar5 = extraout_r1_00;
  }
  cVar1 = *(char *)(param_1 + 0x4cb);
  bVar8 = cVar1 == '\x03';
  if (bVar8) {
    cVar1 = *(char *)(param_1 + 0x4ca);
  }
  if (bVar8 && cVar1 == '\0') {
    if (*(int **)(param_1 + 0x4b4) != (int *)0x0) {
      func_00169A80(*(int **)(param_1 + 0x4b4),uVar5,iVar6,piVar7);
      func_00168E9C(*(int **)(param_1 + 0x4b4),*(int *)(param_1 + 0x480),(int *)0x0);
    }
  }
  iVar3 = func_00520FC0();
  fVar10 = *(float *)(iVar3 + 4);
  fVar9 = *(float *)(param_1 + 0x4c4) - fVar10;
  if ((fVar9 < DAT_00194ee4) || (DAT_00194ee8 < fVar9)) {
    piVar4 = *(int **)(param_1 + 0x40c);
    iVar3 = *(int *)(param_1 + 0x3d8);
    fVar9 = fVar10 + DAT_00194eec;
    piVar4[1] = *(int *)(param_1 + 0x3d0);
    piVar4[2] = (int)ALBW_AS_U32(fVar9);
    piVar4[3] = iVar3;
    func_004356B4(piVar4);
    *(float *)(param_1 + 0x4c4) = fVar10;
  }
  return;
}

