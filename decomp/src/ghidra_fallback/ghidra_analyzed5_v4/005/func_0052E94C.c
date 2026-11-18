#include "ghidra_types.h"

extern int func_00546244(int param_1,undefined1 *param_2);
extern int func_0054C998(int param_1,int param_2);
extern int func_00556AD0(int param_1);
extern float func_00581F68(int param_1);
extern undefined4 *DAT_0052ea4c;
extern int *DAT_0052ea50;
extern float DAT_0052ea54;

// USA 0052E94C <- EU 0052E924 (Ghidra, non-matching)
// GLOBAL DAT_0052ea4c undefined4 *
// GLOBAL DAT_0052ea50 int *
// GLOBAL DAT_0052ea54 float

undefined4 func_0052E94C(int param_1,int param_2)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  ushort *puVar6;
  ushort uVar7;
  bool bVar8;
  float fVar9;
  
  iVar3 = *(int *)(param_1 + 0x10);
  *(undefined4 *)(param_2 + 8) = *(undefined4 *)(*(int *)(iVar3 + 0x5fc) + 0x24);
  sVar1 = *(short *)(*(int *)(iVar3 + 0x614) + 0x42);
  if ((sVar1 == 0x35 || sVar1 == 0x37) || (sVar1 == 0x33 || sVar1 == 0x2c)) {
    iVar4 = *(int *)(iVar3 + 1000);
  }
  else {
    iVar4 = func_0054C998(*(int *)(iVar3 + 0x5fc),*(int *)(iVar3 + 1000));
  }
  *(int *)(param_2 + 0xc) = iVar4;
  *(short *)(param_2 + 0x1e) = (short)*(undefined4 *)(*(int *)(iVar3 + 0x604) + 0x328);
  *(int *)(param_2 + 0x20) = iVar3 + 0x5ac;
  *(undefined4 *)(param_2 + 0x24) = *(undefined4 *)(*(int *)(iVar3 + 0x604) + 0x5c);
  fVar9 = func_00581F68(*DAT_0052ea4c);
  piVar2 = DAT_0052ea50;
  *(float *)(param_2 + 0x28) = fVar9;
  puVar5 = (undefined4 *)func_00556AD0(*piVar2);
  fVar9 = DAT_0052ea54;
  *(undefined4 *)(param_2 + 0x10) = *puVar5;
  *(undefined4 *)(param_2 + 0x14) = puVar5[1];
  *(undefined4 *)(param_2 + 0x18) = puVar5[2];
  *(bool *)(param_2 + 0x2c) = *(short *)(*(int *)(iVar3 + 0x614) + 0x42) == 0x67;
  *(undefined2 *)(param_2 + 0x1c) = 0;
  puVar6 = (ushort *)(param_2 + 0x1c);
  bVar8 = false;
  if (*(float *)(iVar3 + 0x3dc) == fVar9) {
    bVar8 = *(float *)(iVar3 + 0x3e4) == fVar9;
  }
  if (bVar8) {
    *puVar6 = 1;
  }
  if ((*(byte *)(*(int *)(iVar3 + 0x604) + 0x324) & 8) == 0) {
    uVar7 = *puVar6 & 0xfffd;
  }
  else {
    uVar7 = *puVar6 | 2;
  }
  *puVar6 = uVar7;
  return func_00546244(*(int *)(iVar3 + 0x618),(undefined1 *)param_2);
}

