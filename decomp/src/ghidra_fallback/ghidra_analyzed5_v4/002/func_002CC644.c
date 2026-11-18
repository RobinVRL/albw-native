#include "ghidra_types.h"

extern int func_0010BEB4(int param_1,int *param_2);
extern int func_00545A08(int param_1,float *param_2);
extern int DAT_002cc784;
extern float DAT_002cc788;

// USA 002CC644 <- EU 002CC620 (Ghidra, non-matching)
// GLOBAL DAT_002cc784 int
// GLOBAL DAT_002cc788 float

void func_002CC644(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  int *piVar3;
  code *UNRECOVERED_JUMPTABLE;
  int iVar4;
  uint uVar5;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(float *)(albw_frame + 0x0))
  #define local_1c (*(int *)(albw_frame + 0x4))
  #define local_18 (*(float *)(albw_frame + 0x8))
  func_00545A08(param_1,&local_20);
  if (DAT_002cc784 < (int)ALBW_AS_U32((local_20 * local_20 + local_18 * local_18))) {
    iVar2 = (int)*(char *)(param_1 + 0x964);
    if (iVar2 != -1) {
      iVar4 = *(int *)(param_1 + 0x980);
      UNRECOVERED_JUMPTABLE = *(code **)(iVar4 + iVar2 * 8);
      if ((UNRECOVERED_JUMPTABLE != (code *)0x0) ||
         ((uVar5 = *(uint *)(iVar4 + iVar2 * 8 + 4), (uVar5 & 1) != 0 && (uVar5 != 0)))) {
        uVar5 = *(uint *)(iVar4 + iVar2 * 8 + 4);
        piVar3 = (int *)(*(int *)(param_1 + 0x974) + ((int)uVar5 >> 1));
        if ((uVar5 & 1) != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *piVar3);
        }
        (*UNRECOVERED_JUMPTABLE)(piVar3,5);
      }
    }
    uVar1 = *(undefined1 *)(param_1 + 0x964);
    *(undefined1 *)(param_1 + 0x964) = 5;
    *(undefined4 *)(param_1 + 0x960) = 0;
    *(undefined1 *)(param_1 + 0x965) = uVar1;
    if (*(int *)(param_1 + 0x970) != 0) {
      if (*(uint *)(param_1 + 0x968) < 6) {
        piVar3 = *(int **)(param_1 + 0x96c);
      }
      else {
        piVar3 = (int *)(*(int *)(param_1 + 0x96c) + 0xb4);
      }
      (**(code **)(*piVar3 + 8))(piVar3);
      local_1c = piVar3[1];
      local_20 = DAT_002cc788;
      func_0010BEB4(*(int *)(param_1 + 0x970),(int *)&local_20);
    }
    iVar4 = (int)*(char *)(param_1 + 0x964);
    iVar2 = *(int *)(param_1 + 0x978);
    UNRECOVERED_JUMPTABLE = *(code **)(iVar2 + iVar4 * 8);
    if ((UNRECOVERED_JUMPTABLE != (code *)0x0) ||
       ((uVar5 = *(uint *)(iVar2 + iVar4 * 8 + 4), (uVar5 & 1) != 0 && (uVar5 != 0)))) {
      uVar5 = *(uint *)(iVar2 + iVar4 * 8 + 4);
      if ((uVar5 & 1) != 0) {
        UNRECOVERED_JUMPTABLE =
             *(code **)(UNRECOVERED_JUMPTABLE +
                       *(int *)(*(int *)(param_1 + 0x974) + ((int)uVar5 >> 1)));
      }
                    /* WARNING: Could not recover jumptable at 0x002cc778. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  return;
}

