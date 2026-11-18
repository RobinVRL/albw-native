#include "ghidra_types.h"

extern int func_001151EC(undefined4 *param_1,undefined4 *param_2);
extern int func_0011593C(undefined4 *param_1);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_001FF08C(int param_1,undefined4 param_2,int param_3,int *param_4);
extern int func_001FF174(int *param_1,undefined4 param_2,int param_3,undefined *param_4);
extern int func_004CEAF0(int param_1);
extern void func_00582C90(int param_1,uint param_2);
extern int func_00582DA4(int param_1,uint param_2,int param_3);
extern int *DAT_004c7b50;

// USA 004C7A54 <- EU 004C7A2C (Ghidra, non-matching)
// GLOBAL DAT_004c7b50 int *

undefined4 func_004C7A54(int *param_1,undefined4 param_2,undefined *param_3,int *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint extraout_r1;
  uint uVar4;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 uVar5;
  int *piVar6;
  bool bVar7;
  float fVar8;
  float fVar9;
  
  piVar3 = DAT_004c7b50;
  iVar1 = param_1[2];
  if (iVar1 == 0) {
    return 0;
  }
  if ((char)param_1[0x12] == '\0') {
    uVar4 = 0;
    if (*(char *)((int)param_1 + 0x49) != '\0') {
      *(uint *)(iVar1 + 0x164) = *(uint *)(iVar1 + 0x164) | 0x40000000;
      func_0011593C((undefined4 *)(iVar1 + 0x80));
      iVar1 = param_1[2];
      uVar4 = *(uint *)(iVar1 + 0x164) | 0x40000000;
      *(uint *)(iVar1 + 0x164) = uVar4;
      fVar9 = ALBW_AS_F32(param_1[0xe]);
      fVar8 = ALBW_AS_F32(param_1[0xf]);
      *(float *)(iVar1 + 0x8c) = *(float *)(iVar1 + 0x8c) + ALBW_AS_F32(param_1[0xd]);
      *(float *)(iVar1 + 0x9c) = *(float *)(iVar1 + 0x9c) + fVar9;
      *(float *)(iVar1 + 0xac) = *(float *)(iVar1 + 0xac) + fVar8;
    }
  }
  else {
    *(uint *)(iVar1 + 0x164) = *(uint *)(iVar1 + 0x164) | 0x40000000;
    puVar2 = (undefined4 *)func_00582DA4(*piVar3,param_1[0x10],param_1[0x11]);
    func_001151EC((undefined4 *)(iVar1 + 0x80),puVar2);
    piVar6 = (int *)param_1[2];
    func_00582C90(*piVar3,param_1[0x10]);
    param_3 = *(undefined **)(*piVar6 + 0x18);
    (*(code *)param_3)(piVar6,0);
    uVar4 = extraout_r1;
  }
  func_001FF174(param_1,uVar4,(int)param_3,(undefined *)param_4);
  bVar7 = *(char *)((int)param_1 + 0x31) != '\0';
  piVar3 = (int *)0x0;
  if (bVar7) {
    piVar3 = (int *)param_1[4];
  }
  uVar5 = extraout_r1_00;
  if (bVar7 && piVar3 != (int *)0x0) {
    func_00169A80(piVar3,extraout_r1_00,param_3,param_4);
    param_3 = (code *)0x0;
    func_00168E9C((int *)param_1[4],param_1[2],(int *)0x0);
    uVar5 = extraout_r1_01;
  }
  func_001FF08C((int)param_1,uVar5,(int)param_3,param_4);
  return func_004CEAF0(param_1[2]);
}

