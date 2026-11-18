#include "ghidra_types.h"

extern int func_001E518C(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, uint param_5);
extern int func_001E56CC(undefined4 *param_1,uint *param_2);
extern int func_003AC86C(int param_1);
extern int func_003ACAB4(int param_1,float fparam_0);
extern float func_0054DE3C(int param_1,uint param_2,int param_3);
extern int func_00584CC8(int param_1,int *param_2);
extern int func_00588BF0(int param_1,int param_2);
extern int DAT_003acd68;
extern uint DAT_003acd6c;
extern int DAT_003acd70;
extern int DAT_003acd74;
extern int DAT_003acd78;
extern undefined4 DAT_003acd7c;
extern int DAT_003acd80;
extern float DAT_003acd84;

// USA 003ACBE0 <- EU 003ACBBC (Ghidra, non-matching)
// GLOBAL DAT_003acd68 int
// GLOBAL DAT_003acd6c uint
// GLOBAL DAT_003acd70 int
// GLOBAL DAT_003acd74 int
// GLOBAL DAT_003acd78 int
// GLOBAL DAT_003acd7c undefined4
// GLOBAL DAT_003acd80 int
// GLOBAL DAT_003acd84 float

int * func_003ACBE0(undefined4 *param_1,uint *param_2)

{
  int iVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  ushort *puVar7;
  uint uVar8;
  float fVar9;
  ulonglong uVar10;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(int *)(albw_frame + 0x8))
  #define local_24 (*(undefined4 *)(albw_frame + 0xc))
  piVar3 = func_001E56CC(param_1,param_2);
  iVar4 = DAT_003acd68 + 0x74;
  *piVar3 = DAT_003acd68;
  piVar3[200] = iVar4;
  fVar9 = func_0054DE3C(piVar3,0,1);
  uVar5 = DAT_003acd6c;
  uVar10 = (ulonglong)DAT_003acd6c;
  piVar3[0x187] = (int)ALBW_AS_U32(fVar9);
  piVar3[0x188] = uVar5;
  iVar1 = DAT_003acd78;
  iVar4 = DAT_003acd74;
  piVar3[0x189] = DAT_003acd70;
  piVar3[0x18a] = iVar4;
  piVar3[0x18b] = 0;
  *(undefined1 *)(piVar3 + 0x18d) = 0;
  piVar3[0x18e] = 0;
  piVar3[200] = iVar1 + 0x74;
  *piVar3 = iVar1;
  piVar3[399] = 0;
  func_001E518C(piVar3,param_2,1,0,2);
  local_24 = DAT_003acd7c;
  local_28 = DAT_003acd80;
  if (piVar3[0x181] == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)piVar3[0x183];
  }
  iVar4 = func_00584CC8(iVar4,&local_28);
  fVar9 = ALBW_AS_F32(uVar10);
  piVar3[0x18c] = iVar4;
  uVar5 = piVar3[0x181];
  uVar8 = 0;
  if (0 < (int)uVar5) {
    do {
      if (uVar8 < uVar5) {
        piVar6 = *(int **)(piVar3[0x183] + uVar8 * 4);
      }
      else {
        piVar6 = (int *)0x0;
      }
      (**(code **)(*piVar6 + 0x10))(piVar6,0x24);
      fVar9 = ALBW_AS_F32(uVar10);
      if (uVar8 < (uint)piVar3[0x181]) {
        iVar4 = *(int *)(piVar3[0x183] + uVar8 * 4);
      }
      else {
        iVar4 = 0;
      }
      uVar8 = uVar8 + 1;
      puVar7 = (ushort *)(**(int **)(iVar4 + 0x20) + piVar3[0x18c] * 0x154);
      *puVar7 = *puVar7 | 0x2400;
      uVar5 = piVar3[0x181];
    } while ((int)uVar8 < (int)uVar5);
  }
  *(undefined1 *)(piVar3 + 0x18d) = 0;
  *(undefined1 *)(piVar3 + 400) = 1;
  bVar2 = func_00588BF0((int)piVar3,0);
  if (bVar2) {
    *(undefined1 *)(piVar3 + 0x18d) = 2;
    func_003ACAB4((int)piVar3,fVar9);
  }
  else {
    func_003ACAB4((int)piVar3,DAT_003acd84);
  }
  func_003AC86C((int)piVar3);
  return piVar3;
}

