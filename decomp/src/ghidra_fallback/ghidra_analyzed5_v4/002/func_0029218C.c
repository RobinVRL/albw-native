#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_002D55D0(int param_1,uint param_2);
extern int func_0052E8A0(int param_1);
extern int func_00584A38(int param_1,int param_2);
extern int *DAT_00292390;
extern uint *DAT_00292394;
extern undefined4 *DAT_00292398;
extern undefined4 DAT_0029239c;
extern int DAT_002923a0;

// USA 0029218C <- EU 002921B4 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 undefined4
// GLOBAL DAT_00292390 int *
// GLOBAL DAT_00292394 uint *
// GLOBAL DAT_00292398 undefined4 *
// GLOBAL DAT_0029239c undefined4
// GLOBAL DAT_002923a0 int

undefined4 func_0029218C(int param_1,int param_2,int param_3,undefined1 param_4,undefined4 param_5)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  
  piVar4 = DAT_00292390;
  piVar6 = *(int **)(*DAT_00292390 + 0x44);
  if (((*DAT_00292394 & 1) == 0) && (iVar2 = func_00100174((int *)DAT_00292394), iVar2 != 0)) {
    *DAT_00292398 = DAT_0029239c;
  }
  if ((piVar6 == (int *)0x0) ||
     (iVar2 = (**(code **)(*piVar6 + 8))(piVar6,DAT_00292398), iVar2 == 0)) {
    piVar6 = (int *)0x0;
  }
  bVar1 = func_0052E8A0(*(int *)(param_1 + 0x10));
  if (((!bVar1) || (piVar6 != (int *)0x0)) &&
     (*(int *)(*(int *)(param_1 + 0x10) + 0x5b0) == 0x3f800000)) {
    iVar2 = *(int *)(*piVar4 + 0x44);
    if (((iVar2 == 0) || (iVar2 != *(int *)(param_1 + 0x70))) &&
       ((iVar2 = (int)*(short *)(*(int *)(param_1 + 0x48) + 4), iVar2 < 0 ||
        (*(char *)(DAT_002923a0 + iVar2 * 0x10) != '\x0e')))) {
      pcVar5 = (char *)(DAT_002923a0 + *(short *)(param_1 + 0x42) * 0x10);
      if ((*pcVar5 != '\x0e') &&
         ((*(short *)(param_1 + 0x42) != 0 || (2 < *(uint *)(param_1 + 0x44))))) {
        if (param_2 == 0x3f || param_2 == 0x40) {
          uVar3 = *(uint *)(*(int *)(param_1 + 0x10) + 0x4b0);
          if (uVar3 < 3) {
            param_2 = 0x3f;
          }
          else if (uVar3 == 3) {
            param_2 = 0x40;
          }
        }
        if ((((*(uint *)(pcVar5 + 4) & 0x2000) != 0) &&
            (iVar2 = func_00584A38(*piVar4,*(int *)(param_1 + 0x6c)), iVar2 != 0)) &&
           (iVar2 = (**(code **)(**(int **)(param_1 + 0x6c) + 0x38))(*(int **)(param_1 + 0x6c),0),
           iVar2 != 0)) {
          *(undefined4 *)(*(int *)(param_1 + 0x6c) + 0x14) = param_5;
          piVar4 = (int *)func_002D55D0(*(int *)(param_1 + 0x48),0x7b);
          if (piVar4 != (int *)0x0) {
            piVar4[2] = 0;
            *piVar4 = param_2;
            piVar4[1] = param_3;
            *(undefined1 *)(piVar4 + 3) = param_4;
            if ((*(short *)(param_1 + 0x42) == 0x91) && (*(int *)(param_1 + 0x48) != 0)) {
              piVar4[2] = *(int *)(*(int *)(param_1 + 0x48) + 0x74);
            }
            return 1;
          }
        }
      }
    }
  }
  return 0;
}

