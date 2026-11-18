#include "ghidra_types.h"

extern int func_00546244(int param_1,undefined1 *param_2);
extern int func_0054C998(int param_1,int param_2);
extern int func_00556AD0(int param_1);
extern float func_00581F68(int param_1);
extern undefined4 *DAT_0052ea4c;
extern int *DAT_0052ea50;
extern float DAT_0052ea54;

// USA 0052E954 <- EU 0052E92C (Ghidra, non-matching)
// GLOBAL DAT_0052ea4c undefined4 *
// GLOBAL DAT_0052ea50 int *
// GLOBAL DAT_0052ea54 float

undefined4 func_0052E954(int param_1,undefined1 *param_2)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  ushort *puVar5;
  ushort uVar6;
  bool bVar7;
  float fVar8;
  
  *(undefined4 *)(param_2 + 8) = *(undefined4 *)(*(int *)(param_1 + 0x5fc) + 0x24);
  sVar1 = *(short *)(*(int *)(param_1 + 0x614) + 0x42);
  if ((sVar1 == 0x35 || sVar1 == 0x37) || (sVar1 == 0x33 || sVar1 == 0x2c)) {
    iVar3 = *(int *)(param_1 + 1000);
  }
  else {
    iVar3 = func_0054C998(*(int *)(param_1 + 0x5fc),*(int *)(param_1 + 1000));
  }
  *(int *)(param_2 + 0xc) = iVar3;
  *(short *)(param_2 + 0x1e) = (short)*(undefined4 *)(*(int *)(param_1 + 0x604) + 0x328);
  *(int *)(param_2 + 0x20) = param_1 + 0x5ac;
  *(undefined4 *)(param_2 + 0x24) = *(undefined4 *)(*(int *)(param_1 + 0x604) + 0x5c);
  fVar8 = func_00581F68(*DAT_0052ea4c);
  piVar2 = DAT_0052ea50;
  *(float *)(param_2 + 0x28) = fVar8;
  puVar4 = (undefined4 *)func_00556AD0(*piVar2);
  fVar8 = DAT_0052ea54;
  *(undefined4 *)(param_2 + 0x10) = *puVar4;
  *(undefined4 *)(param_2 + 0x14) = puVar4[1];
  *(undefined4 *)(param_2 + 0x18) = puVar4[2];
  param_2[0x2c] = *(short *)(*(int *)(param_1 + 0x614) + 0x42) == 0x67;
  *(undefined2 *)(param_2 + 0x1c) = 0;
  puVar5 = (ushort *)(param_2 + 0x1c);
  bVar7 = false;
  if (*(float *)(param_1 + 0x3dc) == fVar8) {
    bVar7 = *(float *)(param_1 + 0x3e4) == fVar8;
  }
  if (bVar7) {
    *puVar5 = 1;
  }
  if ((*(byte *)(*(int *)(param_1 + 0x604) + 0x324) & 8) == 0) {
    uVar6 = *puVar5 & 0xfffd;
  }
  else {
    uVar6 = *puVar5 | 2;
  }
  *puVar5 = uVar6;
  return func_00546244(*(int *)(param_1 + 0x618),param_2);
}

