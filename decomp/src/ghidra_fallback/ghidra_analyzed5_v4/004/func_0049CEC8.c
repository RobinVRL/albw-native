#include "ghidra_types.h"

extern int func_0010B954(int param_1,int param_2,int *param_3,int param_4,int param_5);
extern int func_0010C0B8(int param_1);
extern int func_0010EEE0(int param_1);
extern uint *DAT_0049d024;
extern undefined4 DAT_0049d028;
extern char s_TaskHeap_0049d02c[];

// USA 0049CEC8 <- EU 0049CEA0 (Ghidra, non-matching)
// GLOBAL DAT_0049d024 uint *
// GLOBAL DAT_0049d028 undefined4
// GLOBAL s_TaskHeap_0049d02c string

undefined4 func_0049CEC8(int param_1,int param_2,int param_3)

{
  uint *puVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(undefined4 *)(albw_frame + 0x8))
  #define local_34 (*(char * *)(albw_frame + 0xc))
  #define local_30 (*(int *)(albw_frame + 0x10))
  #define iStack_2c (*(int *)(albw_frame + 0x14))
  #define iStack_28 (*(int *)(albw_frame + 0x18))
  puVar1 = DAT_0049d024;
  *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(param_3 + 0x58);
  uVar7 = *puVar1;
  local_30 = param_1;
  iStack_2c = param_2;
  iStack_28 = param_3;
  func_0010C0B8(param_1 + 4);
  uVar2 = DAT_0049d028;
  uVar4 = 0;
  if (0 < (int)uVar7) {
    do {
      piVar5 = (int *)(param_3 + 8);
      if (uVar4 < *DAT_0049d024) {
        piVar5 = piVar5 + uVar4 * 5;
      }
      if (*(char *)((int)piVar5 + 0x12) == '\0') {
        piVar6 = (int *)*piVar5;
        if (piVar6 == (int *)0x0) {
          if (*(int *)(param_3 + 0x5c) == 0) {
            piVar6 = *(int **)(local_30 + uVar4 * 4 + 0x74);
          }
          else {
            piVar6 = *(int **)(*(int *)(param_3 + 0x5c) + uVar4 * 4 + 0x44);
          }
        }
        if (piVar6 == (int *)0x0) goto LAB_0049cfa8;
        piVar8 = (int *)0x0;
        if (*(char *)((int)piVar5 + 0x11) == '\0') {
          iVar9 = 1;
        }
        else {
          iVar9 = -1;
        }
        if ((piVar5[2] == 0) || (piVar5[1] != 0)) {
          local_38 = uVar2;
          local_34 = s_TaskHeap_0049d02c;
          piVar8 = func_0010B954(piVar5[1],(int)&local_38,piVar6,iVar9,0);
        }
        else {
          uVar3 = (**(code **)(*piVar6 + 0x3c))(piVar6,4);
          if ((uint)piVar5[2] < uVar3) {
            local_38 = uVar2;
            local_34 = s_TaskHeap_0049d02c;
            piVar8 = func_0010B954(uVar3 - piVar5[2],(int)&local_38,piVar6,iVar9,0);
          }
        }
        *(int **)(param_2 + uVar4 * 4) = piVar8;
      }
      else {
LAB_0049cfa8:
        *(undefined4 *)(param_2 + uVar4 * 4) = 0;
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < (int)uVar7);
  }
  return func_0010EEE0(param_1 + 4);
}

