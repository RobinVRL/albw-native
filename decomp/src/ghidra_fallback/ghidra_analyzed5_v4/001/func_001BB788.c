#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_001164F4(undefined4 *param_1,uint param_2);
extern int func_003C7A70(undefined4 *param_1);
extern int func_00560EF8(int *param_1,int *param_2,uint *param_3);
extern int func_00560FA0(int param_1,uint *param_2,int param_3);
extern int func_005610A8(int *param_1,int *param_2,int param_3);
extern int func_0056128C(int param_1);
extern undefined *DAT_001bb8ec;
extern uint *DAT_001bb8f0;

// USA 001BB788 <- EU 001BB788 (Ghidra, non-matching)
// GLOBAL DAT_001bb8ec undefined *
// GLOBAL DAT_001bb8f0 uint *

void func_001BB788(int param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 ((uint *)(albw_frame + 0x8))
  #define local_30 ((uint *)(albw_frame + 0x10))
  #define aiStack_28 ((int *)(albw_frame + 0x18))
  #define aiStack_20 ((int *)(albw_frame + 0x20))
  iVar2 = func_0010CEE0(0x24,(int *)0x0,4);
  if ((iVar2 != 0) && (iVar2 = func_00100118(iVar2,DAT_001bb8ec,4,9), iVar2 != 0)) {
    *(int *)(param_1 + 0x18) = iVar2;
    *(undefined4 *)(param_1 + 0x14) = 9;
  }
  func_001164F4(*(undefined4 **)(param_1 + 0x18),*(int *)(param_1 + 0x14) << 2);
  func_003C7A70(aiStack_28);
  bVar1 = func_00560EF8(param_2,aiStack_28,DAT_001bb8f0);
  if (bVar1) {
    uVar3 = func_0056128C((int)aiStack_28);
    iVar2 = 0;
    if (0 < (int)uVar3) {
      do {
        func_003C7A70(aiStack_20);
        bVar1 = func_005610A8(aiStack_28,aiStack_20,iVar2);
        if (!bVar1) {
          return;
        }
        local_30[0] = 0;
        iVar4 = func_00560FA0((int)aiStack_20,local_30,0);
        if (iVar4 != 0) {
          local_38[0] = 0;
          iVar4 = func_00560FA0((int)aiStack_20,local_38,1);
          if ((iVar4 != 0) &&
             ((*(uint *)(param_1 + 0x15c + (local_30[0] >> 5) * 4) & 1 << (local_30[0] & 0x1f)) == 0
             )) {
            piVar5 = *(int **)(param_1 + 0x18);
            if (local_38[0] < *(uint *)(param_1 + 0x14)) {
              piVar5 = piVar5 + local_38[0];
            }
            *piVar5 = *piVar5 + 1;
            *(short *)(param_1 + 0x1c + local_30[0] * 2) = (short)local_38[0];
          }
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < (int)uVar3);
    }
  }
  return;
}

