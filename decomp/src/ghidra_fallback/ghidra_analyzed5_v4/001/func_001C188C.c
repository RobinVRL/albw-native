#include "ghidra_types.h"

extern int func_0010BEB4(int param_1,int *param_2);
extern int func_00588BF0(int param_1,int param_2);
extern int DAT_001c19f8;

// USA 001C188C <- EU 001C188C (Ghidra, non-matching)
// GLOBAL DAT_001c19f8 int

void func_001C188C(int param_1)

{
  undefined1 uVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  code *UNRECOVERED_JUMPTABLE;
  int iVar6;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(int *)(albw_frame + 0x4))
  if ((*(short *)(param_1 + 0x36) != 0) && (bVar2 = func_00588BF0(param_1,0), bVar2)) {
    iVar3 = (int)*(char *)(param_1 + 0x410);
    if (iVar3 != 1) {
      if (iVar3 != -1) {
        iVar6 = *(int *)(param_1 + 0x42c);
        UNRECOVERED_JUMPTABLE = *(code **)(iVar6 + iVar3 * 8);
        if ((UNRECOVERED_JUMPTABLE != (code *)0x0) ||
           (uVar4 = *(uint *)(iVar6 + iVar3 * 8 + 4), (uVar4 & 1) != 0 && uVar4 != 0)) {
          uVar4 = *(uint *)(iVar6 + iVar3 * 8 + 4);
          piVar5 = (int *)(*(int *)(param_1 + 0x420) + ((int)uVar4 >> 1));
          if ((uVar4 & 1) != 0) {
            UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *piVar5);
          }
          (*UNRECOVERED_JUMPTABLE)(piVar5,1);
        }
      }
      uVar1 = *(undefined1 *)(param_1 + 0x410);
      *(undefined1 *)(param_1 + 0x410) = 1;
      *(undefined4 *)(param_1 + 0x40c) = 0;
      *(undefined1 *)(param_1 + 0x411) = uVar1;
      if (*(int *)(param_1 + 0x41c) != 0) {
        if (*(uint *)(param_1 + 0x414) < 2) {
          piVar5 = *(int **)(param_1 + 0x418);
        }
        else {
          piVar5 = (int *)(*(int *)(param_1 + 0x418) + 0x24);
        }
        (**(code **)(*piVar5 + 8))(piVar5);
        local_1c = piVar5[1];
        local_20 = DAT_001c19f8;
        func_0010BEB4(*(int *)(param_1 + 0x41c),&local_20);
      }
      iVar6 = (int)*(char *)(param_1 + 0x410);
      iVar3 = *(int *)(param_1 + 0x424);
      UNRECOVERED_JUMPTABLE = *(code **)(iVar3 + iVar6 * 8);
      if ((UNRECOVERED_JUMPTABLE != (code *)0x0) ||
         ((uVar4 = *(uint *)(iVar3 + iVar6 * 8 + 4), (uVar4 & 1) != 0 && (uVar4 != 0)))) {
        uVar4 = *(uint *)(iVar3 + iVar6 * 8 + 4);
        if ((uVar4 & 1) != 0) {
          UNRECOVERED_JUMPTABLE =
               *(code **)(UNRECOVERED_JUMPTABLE +
                         *(int *)(*(int *)(param_1 + 0x420) + ((int)uVar4 >> 1)));
        }
                    /* WARNING: Could not recover jumptable at 0x001c19ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)();
        return;
      }
    }
  }
  return;
}

