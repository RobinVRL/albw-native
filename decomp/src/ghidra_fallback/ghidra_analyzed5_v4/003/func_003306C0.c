#include "ghidra_types.h"

extern int func_001E518C(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, uint param_5);
extern int func_001E56CC(undefined4 *param_1,uint *param_2);
extern int func_00359D98(int param_1);
extern int func_00359F80(int param_1,float fparam_0);
extern float func_0054DE3C(int param_1,uint param_2,int param_3);
extern int func_00584CC8(int param_1,int *param_2);
extern int func_00588BF0(int param_1,int param_2);
extern int DAT_0033084c;
extern uint DAT_00330850;
extern int DAT_00330854;
extern int DAT_00330858;
extern int DAT_0033085c;
extern undefined4 DAT_00330860;
extern int DAT_00330864;
extern float DAT_00330868;

// USA 003306C0 <- EU 0033069C (Ghidra, non-matching)
// GLOBAL DAT_0033084c int
// GLOBAL DAT_00330850 uint
// GLOBAL DAT_00330854 int
// GLOBAL DAT_00330858 int
// GLOBAL DAT_0033085c int
// GLOBAL DAT_00330860 undefined4
// GLOBAL DAT_00330864 int
// GLOBAL DAT_00330868 float

int * func_003306C0(undefined4 *param_1,uint *param_2)

{
  float fparam_0;
  bool bVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  ushort *puVar6;
  uint uVar7;
  float fVar8;
  ulonglong uVar9;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(int *)(albw_frame + 0x8))
  #define local_24 (*(undefined4 *)(albw_frame + 0xc))
  piVar2 = func_001E56CC(param_1,param_2);
  iVar3 = DAT_0033084c + 0x74;
  *piVar2 = DAT_0033084c;
  piVar2[200] = iVar3;
  fVar8 = func_0054DE3C(piVar2,0,1);
  uVar4 = DAT_00330850;
  uVar9 = (ulonglong)DAT_00330850;
  piVar2[0x187] = (int)ALBW_AS_U32(fVar8);
  piVar2[0x188] = uVar4;
  piVar2[0x189] = uVar4;
  iVar3 = DAT_00330858;
  piVar2[0x18a] = DAT_00330854;
  piVar2[0x18b] = iVar3;
  piVar2[0x18c] = 0;
  iVar3 = DAT_0033085c;
  *(undefined1 *)(piVar2 + 0x18e) = 0;
  piVar2[399] = 0;
  piVar2[400] = 0;
  *(undefined1 *)((int)piVar2 + 0x645) = 0;
  piVar2[200] = iVar3 + 0x74;
  *piVar2 = iVar3;
  func_001E518C(piVar2,param_2,1,0,0);
  local_24 = DAT_00330860;
  local_28 = DAT_00330864;
  if (piVar2[0x181] == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)piVar2[0x183];
  }
  iVar3 = func_00584CC8(iVar3,&local_28);
  fVar8 = ALBW_AS_F32(uVar9);
  piVar2[0x18d] = iVar3;
  uVar4 = piVar2[0x181];
  uVar7 = 0;
  if (0 < (int)uVar4) {
    do {
      if (uVar7 < uVar4) {
        piVar5 = *(int **)(piVar2[0x183] + uVar7 * 4);
      }
      else {
        piVar5 = (int *)0x0;
      }
      (**(code **)(*piVar5 + 0x10))(piVar5,0x24);
      fVar8 = ALBW_AS_F32(uVar9);
      if (uVar7 < (uint)piVar2[0x181]) {
        iVar3 = *(int *)(piVar2[0x183] + uVar7 * 4);
      }
      else {
        iVar3 = 0;
      }
      uVar7 = uVar7 + 1;
      puVar6 = (ushort *)(**(int **)(iVar3 + 0x20) + piVar2[0x18d] * 0x154);
      *puVar6 = *puVar6 | 0x2400;
      uVar4 = piVar2[0x181];
    } while ((int)uVar7 < (int)uVar4);
  }
  *(undefined1 *)(piVar2 + 0x18e) = 2;
  *(undefined1 *)(piVar2 + 0x191) = 0;
  bVar1 = func_00588BF0((int)piVar2,0);
  fparam_0 = DAT_00330868;
  if (bVar1) {
    *(undefined1 *)(piVar2 + 0x18e) = 0;
    func_00359F80((int)piVar2,fparam_0);
  }
  else {
    func_00359F80((int)piVar2,fVar8);
  }
  func_00359D98((int)piVar2);
  return piVar2;
}

