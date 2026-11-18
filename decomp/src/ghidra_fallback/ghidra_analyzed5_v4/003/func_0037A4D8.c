#include "ghidra_types.h"

extern void func_0010F1F8(int *param_1,float fparam_0);
extern int func_00361610(int param_1,undefined1 param_2);
extern int func_0037A634(int param_1);
extern void func_004AD9E8(int param_1,uint param_2,uint param_3,uint param_4,float fparam_0);
extern int func_004EB194(int param_1);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_005406C4(int param_1);
extern int *DAT_0037a600;
extern int *DAT_0037a604;
extern int *DAT_0037a608;
extern int *DAT_0037a60c;

// USA 0037A4D8 <- EU 0037A4B4 (Ghidra, non-matching)
// GLOBAL DAT_0037a600 int *
// GLOBAL DAT_0037a604 int *
// GLOBAL DAT_0037a608 int *
// GLOBAL DAT_0037a60c int *

void func_0037A4D8(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  float in_s0;
  
  func_0037A634(param_1);
  piVar2 = DAT_0037a60c;
  piVar1 = DAT_0037a600;
  if ((int)*(short *)(param_1 + 0x7b8) < *(int *)(param_1 + 0x328)) {
    puVar5 = (uint *)(*(int *)(param_1 + 0x324) + -4);
    iVar3 = *(int *)(*(int *)(param_1 + 0x324) + 4);
    if (puVar5 != (uint *)(param_1 + 0x31c)) {
      do {
        iVar4 = func_0052FBA0(*piVar2 + 0x3dbbc,*puVar5);
        if (iVar4 == 0) {
          func_0010F1F8((int *)(puVar5 + 1),in_s0);
          *(int *)(param_1 + 0x328) = *(int *)(param_1 + 0x328) + -1;
          *puVar5 = *(uint *)(param_1 + 0x32c);
          *(uint **)(param_1 + 0x32c) = puVar5;
        }
        puVar5 = (uint *)(iVar3 + -4);
        iVar3 = *(int *)(iVar3 + 4);
      } while (puVar5 != (uint *)(param_1 + 0x31c));
      return;
    }
  }
  else {
    func_00361610(*DAT_0037a600,1);
    piVar2 = DAT_0037a604;
    if (*(short *)(param_1 + 0x7ba) < 1) {
      if (*(char *)(param_1 + 0x7c1) == '\0') {
        if (*(char *)(param_1 + 0x7c2) == '\0') {
          func_004EB194(*DAT_0037a604);
          *(undefined1 *)(param_1 + 0x7c2) = 1;
        }
        iVar3 = func_005406C4(*piVar2);
        if (iVar3 == 0) {
          return;
        }
      }
      func_004AD9E8(*DAT_0037a608,(uint)*(ushort *)(param_1 + 0x36),(uint)*(byte *)(param_1 + 0x34),
                    1,in_s0);
      if (*(int *)(param_1 + 0x7bc) < 1) {
        if (*(short *)(param_1 + 0x30) == 0) {
          func_00361610(*piVar1,0);
        }
        *(undefined1 *)(param_1 + 0x2d7) = 1;
      }
      else {
        *(int *)(param_1 + 0x7bc) = *(int *)(param_1 + 0x7bc) + -1;
      }
    }
    else {
      *(short *)(param_1 + 0x7ba) = *(short *)(param_1 + 0x7ba) + -1;
    }
  }
  return;
}

