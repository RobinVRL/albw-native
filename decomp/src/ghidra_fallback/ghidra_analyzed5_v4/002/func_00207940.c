#include "ghidra_types.h"

extern int func_001501C8(int param_1,int param_2);
extern int func_004F5174(int param_1,int param_2);
extern int func_004F5BD8(int param_1,uint *param_2,int **param_3,float *param_4);
extern int func_0058A6B0(int *param_1,int param_2);
extern int *DAT_004f511c;
extern float DAT_004f5120;
extern int *DAT_004f5124;

// USA 00207940 <- EU 00207940 (Ghidra, non-matching)
// GLOBAL DAT_004f511c int *
// GLOBAL DAT_004f5120 float
// GLOBAL DAT_004f5124 int *

void func_004F500C(int *param_1,undefined4 param_2,undefined4 param_3,float *param_4)

{
  char cVar1;
  int *piVar2;
  float fVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  bool bVar7;
  bool bVar8;
  
  *(undefined1 *)((int)param_1 + 0x84a) = 1;
  func_0058A6B0(param_1,param_1[0x108]);
  func_0058A6B0(param_1,param_1[0x10a]);
  piVar2 = DAT_004f511c;
  if ((*DAT_004f511c != 0) && ((int)*(char *)(*DAT_004f511c + 0x18) - 0x18U < 3)) {
    cVar1 = (char)param_1[0x1ff];
    if (cVar1 == '\0' || cVar1 == '\x05') {
      uVar4 = param_1[0x167] | 0x8000;
    }
    else {
      if (cVar1 != '\x01') goto LAB_004f505c;
      uVar4 = param_1[0x167] & 0xffff7fff;
    }
    param_1[0x167] = uVar4;
  }
LAB_004f505c:
  fVar3 = DAT_004f5120;
  *(short *)(param_1 + 0x143) = (short)param_1[0x142];
  *(short *)((int)param_1 + 0x50a) = (short)param_1[0x142];
  param_1[0x13d] = (int)ALBW_AS_U32((fVar3 + *(float *)(*DAT_004f5124 + 0x20) * (ALBW_AS_F32(param_1[0x13c]) - fVar3)))
  ;
  puVar5 = (undefined4 *)param_1[0x201];
  if (puVar5 == (undefined4 *)0x0) {
    func_004F5BD8((int)param_1,(uint *)0x0,(int **)0x0,param_4);
  }
  else {
    (**(code **)*puVar5)(puVar5);
  }
  func_004F5174((int)param_1,1);
  uVar4 = (uint)*(char *)(*piVar2 + 0x18);
  bVar8 = 4 < uVar4;
  bVar7 = uVar4 == 5;
  if (5 < uVar4) {
    bVar8 = 3 < uVar4 - 0x16;
    bVar7 = uVar4 - 0x16 == 4;
  }
  uVar4 = (uint)(!bVar8 || bVar7);
  *(bool *)((int)param_1 + 0x8b6) = !bVar8 || bVar7;
  iVar6 = param_1[0x103];
  if (iVar6 != 0) {
    uVar4 = param_1[0xb4];
  }
  if ((iVar6 != 0 && uVar4 != 0) && (*(char *)(uVar4 + 0x23) != '\x02')) {
    func_001501C8((int)param_1,iVar6);
    return;
  }
  return;
}

