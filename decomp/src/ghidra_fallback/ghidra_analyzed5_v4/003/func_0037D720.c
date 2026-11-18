#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_001507A8(int param_1,int param_2);
extern int func_00520ED8(int param_1);
extern int func_00520F54(int param_1,float *param_2,undefined4 param_3);
extern int func_00520FF8(int param_1);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_00588BE4(int param_1);
extern float DAT_0037d828;
extern uint DAT_0037d82c;
extern int *DAT_0037d830;
extern int *DAT_0037d834;
extern int *DAT_0037d838;
extern int *DAT_0037d83c;
extern int *DAT_0037d840;
extern int DAT_0037d844;

// USA 0037D720 <- EU 0037D6FC (Ghidra, non-matching)
// GLOBAL DAT_0037d828 float
// GLOBAL DAT_0037d82c uint
// GLOBAL DAT_0037d830 int *
// GLOBAL DAT_0037d834 int *
// GLOBAL DAT_0037d838 int *
// GLOBAL DAT_0037d83c int *
// GLOBAL DAT_0037d840 int *
// GLOBAL DAT_0037d844 int

undefined4 func_0037D720(int param_1,int param_2)

{
  float fVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  
  fVar1 = DAT_0037d828;
  *(float *)(param_1 + 0x4c8) = DAT_0037d828;
  *(float *)(param_1 + 0x4cc) = fVar1;
  *(float *)(param_1 + 0x4d0) = fVar1;
  piVar2 = DAT_0037d830;
  if (DAT_0037d82c < *(uint *)(param_2 + 8)) {
    *(undefined1 *)(param_1 + 0x424) = 1;
  }
  iVar4 = func_0052FBA0(*piVar2 + 0x3dbbc,*(uint *)(param_2 + 0x28));
  bVar3 = func_001507A8(param_1,param_2);
  if ((bVar3) || (iVar5 = func_00520ED8(param_1), iVar5 != 0)) {
    uVar6 = 1;
  }
  else {
    uVar6 = 0;
  }
  iVar5 = func_00520FF8(param_1);
  if (iVar5 != 0) {
    *(undefined1 *)(param_1 + 0x429) = 1;
  }
  if (((iVar4 != 0) &&
      ((((iVar5 = func_00588BE4(iVar4), iVar5 == *DAT_0037d834 || (iVar5 == *DAT_0037d838)) ||
        (iVar5 == *DAT_0037d83c)) || (iVar5 == *DAT_0037d840)))) &&
     (DAT_0037d844 <= *(int *)(param_2 + 8))) {
    func_00520F54(iVar4,(float *)(param_1 + 0x4c8),param_1 + 0x3d0);
  }
  func_00115C54((float *)(param_1 + 0x4bc),(float *)(param_1 + 0x4bc),(float *)(param_2 + 4));
  if ((*(ushort *)(param_2 + 0x20) & 0x1f) == 6) {
    uVar6 = 0;
  }
  return uVar6;
}

