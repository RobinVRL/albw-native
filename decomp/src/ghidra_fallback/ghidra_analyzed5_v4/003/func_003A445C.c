#include "ghidra_types.h"

extern int func_001E518C(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, uint param_5);
extern int func_001E56CC(undefined4 *param_1,uint *param_2);
extern int func_003AC86C(int param_1);
extern int func_003ACAB4(int param_1,float fparam_0);
extern float func_0054DE3C(int param_1,uint param_2,int param_3);
extern int func_00584CC8(int param_1,int *param_2);
extern int func_00588BF0(int param_1,int param_2);
extern int DAT_003a45e4;
extern uint DAT_003a45e8;
extern int DAT_003a45ec;
extern int DAT_003a45f0;
extern int DAT_003a45f4;
extern undefined4 DAT_003a45f8;
extern int DAT_003a45fc;
extern float DAT_003a4600;

// USA 003A445C <- EU 003A4438 (Ghidra, non-matching)
// GLOBAL DAT_003a45e4 int
// GLOBAL DAT_003a45e8 uint
// GLOBAL DAT_003a45ec int
// GLOBAL DAT_003a45f0 int
// GLOBAL DAT_003a45f4 int
// GLOBAL DAT_003a45f8 undefined4
// GLOBAL DAT_003a45fc int
// GLOBAL DAT_003a4600 float

int * func_003A445C(undefined4 *param_1,uint *param_2)

{
  int iVar1;
  float fparam_0;
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
  iVar4 = DAT_003a45e4 + 0x74;
  *piVar3 = DAT_003a45e4;
  piVar3[200] = iVar4;
  fVar9 = func_0054DE3C(piVar3,0,1);
  iVar1 = DAT_003a45f0;
  iVar4 = DAT_003a45ec;
  uVar5 = DAT_003a45e8;
  uVar10 = (ulonglong)DAT_003a45e8;
  piVar3[0x187] = (int)ALBW_AS_U32(fVar9);
  piVar3[0x188] = uVar5;
  piVar3[0x189] = iVar4;
  piVar3[0x18a] = iVar1;
  iVar4 = DAT_003a45f4;
  piVar3[0x18b] = 0;
  *(undefined1 *)(piVar3 + 0x18d) = 0;
  piVar3[0x18e] = 0;
  piVar3[200] = iVar4 + 0x74;
  *piVar3 = iVar4;
  piVar3[399] = 0;
  func_001E518C(piVar3,param_2,1,0,1);
  local_24 = DAT_003a45f8;
  local_28 = DAT_003a45fc;
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
  *(undefined1 *)(piVar3 + 0x18d) = 2;
  *(undefined1 *)(piVar3 + 400) = 0;
  bVar2 = func_00588BF0((int)piVar3,0);
  fparam_0 = DAT_003a4600;
  if (bVar2) {
    *(undefined1 *)(piVar3 + 0x18d) = 0;
    func_003ACAB4((int)piVar3,fparam_0);
  }
  else {
    func_003ACAB4((int)piVar3,fVar9);
  }
  func_003AC86C((int)piVar3);
  return piVar3;
}

