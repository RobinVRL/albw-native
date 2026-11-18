#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00170558(int param_1,int *param_2,undefined4 param_3,int param_4);
extern int func_001708A0(int param_1,int *param_2,int param_3);
extern int func_003CC1E4(undefined4 *param_1,uint param_2);
extern int func_003CC230(uint *param_1,undefined4 *param_2,int param_3,uint param_4);
extern int func_005234B8(int param_1,uint param_2);
extern float DAT_00330afc;
extern int *DAT_00330b00;
extern uint *DAT_00330b04;
extern undefined4 *DAT_00330b08;
extern undefined4 DAT_00330b0c;
extern uint DAT_00330b10;
extern float DAT_00330b14;
extern int DAT_00330b18;

// USA 003308E0 <- EU 003308BC (Ghidra, non-matching)
// GLOBAL DAT_00330afc float
// GLOBAL DAT_00330b00 int *
// GLOBAL DAT_00330b04 uint *
// GLOBAL DAT_00330b08 undefined4 *
// GLOBAL DAT_00330b0c undefined4
// GLOBAL DAT_00330b10 uint
// GLOBAL DAT_00330b14 float
// GLOBAL DAT_00330b18 int

undefined4 func_003308E0(int param_1,uint param_2,int *param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  undefined4 *puVar7;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(uint *)(albw_frame + 0x0))
  local_20 = param_4;
  if ((param_2 != 0) &&
     (((iVar1 = func_005234B8(param_1,param_2), iVar1 == 0 ||
       (*(float *)(*(int *)(param_1 + 0x8c) + 0x154) <= DAT_00330afc)) ||
      ((*(char *)(param_1 + 0xb0) == '\0' &&
       (0x3f7fffff < *(int *)(*(int *)(param_1 + 0x8c) + 0x154))))))) {
    return 0;
  }
  piVar6 = DAT_00330b00;
  iVar1 = *DAT_00330b00;
  puVar7 = *(undefined4 **)(iVar1 + 0x1c);
  if (puVar7 != (undefined4 *)0x0) {
    if (puVar7 != *(undefined4 **)(param_1 + 0xac)) {
      if (((*DAT_00330b04 & 1) == 0) && (iVar2 = func_00100174((int *)DAT_00330b04), iVar2 != 0)) {
        *DAT_00330b08 = DAT_00330b0c;
      }
      iVar2 = (**(code **)*puVar7)(puVar7,DAT_00330b08);
      if (iVar2 == 0) {
        puVar7 = (undefined4 *)0x0;
      }
      if ((puVar7 == (undefined4 *)0x0) ||
         (**(int **)(puVar7[0x23] + 0x20) + (uint)*(ushort *)puVar7[0x24] * 0x154 !=
          **(int **)(*(int *)(param_1 + 0x8c) + 0x20) + (uint)**(ushort **)(param_1 + 0x90) * 0x154)
         ) goto LAB_003309e8;
    }
    *(undefined4 *)(iVar1 + 0x1c) = 0;
  }
LAB_003309e8:
  uVar4 = 1;
  func_001708A0(param_1,param_3,1);
  uVar5 = DAT_00330b10;
  if (*(char *)(param_1 + 0xb0) == '\0') {
    iVar1 = *piVar6;
    if (*(char *)(param_1 + 0xb1) != '\0') {
      puVar7 = (undefined4 *)*param_3;
      *puVar7 = 0;
      puVar7[1] = uVar5;
      *param_3 = (int)(puVar7 + 2);
      uVar4 = uVar5;
    }
    iVar2 = *(int *)(iVar1 + 0x2be8);
    uVar5 = *(int *)(iVar1 + 0x2bec) << 2;
    if (iVar2 != 0) {
      puVar3 = func_003CC1E4((undefined4 *)*param_3,(*param_3 - param_3[2] & 0xfffffffcU) + 0x18);
      *param_3 = (int)puVar3;
      puVar3 = func_003CC230(puVar3,&local_20,iVar2,uVar5);
      *param_3 = (int)puVar3;
      if ((uint *)param_3[3] != (uint *)0x0) {
        *(uint *)param_3[3] = (uint)((int)puVar3 - param_3[2]) >> 3;
      }
      param_3[2] = *param_3;
      param_3[3] = local_20;
      uVar4 = local_20;
      param_4 = uVar5;
      if (param_3[4] == 0) {
        param_3[4] = *param_3 - param_3[1] & 0xfffffffc;
      }
    }
    iVar1 = DAT_00330b18;
    piVar6 = (int *)*param_3;
    iVar2 = VectorFloatToUnsigned(*(float *)(*(int *)(param_1 + 0x8c) + 0x154) * DAT_00330b14,3);
    *piVar6 = iVar2 << 0x18;
    piVar6[1] = iVar1;
    *param_3 = (int)(piVar6 + 2);
  }
  func_00170558(param_1,param_3,uVar4,param_4);
  return 1;
}

