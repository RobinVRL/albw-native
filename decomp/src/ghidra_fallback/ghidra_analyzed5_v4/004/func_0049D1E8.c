#include "ghidra_types.h"

extern int func_0010EEE0(int param_1);
extern void func_0010F1F8(int *param_1,float fparam_0);
extern int func_003CD8E0(int param_1);
extern int func_0049CEC8(int param_1,int param_2,int param_3);
extern int func_0049D3D8(int param_1,undefined4 *param_2,int param_3);
extern int func_0049DA04(int param_1,int *param_2,uint param_3);
extern int *DAT_0049d3a8;
extern undefined4 DAT_0049d3ac;

// USA 0049D1E8 <- EU 0049D1C0 (Ghidra, non-matching)
// GLOBAL DAT_0049d3a8 int *
// GLOBAL DAT_0049d3ac undefined4

undefined4 func_0049D1E8(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 *puVar7;
  int iVar8;
  float in_s0;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define auStack_40 ((undefined1 *)(albw_frame + 0x0))
  #define uStack_30 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x14))
  iVar1 = func_003CD8E0(param_1 + 4);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0x8c) + 8);
  if (iVar1 != 0) {
    if ((iVar1 < 1) || (iVar1 = *(int *)(*(int *)(param_1 + 0x8c) + 4), iVar1 == 0)) {
      puVar7 = (undefined4 *)0x0;
    }
    else {
      puVar7 = (undefined4 *)(iVar1 + -0x94);
    }
    if (puVar7 != (undefined4 *)0x0) {
      piVar6 = (int *)*puVar7;
      if (piVar6 == (int *)0x0) {
        uStack_2c = 0;
        uStack_30 = 0;
        func_0049CEC8(param_1,(int)auStack_40,(int)(puVar7 + 1));
        piVar6 = (int *)func_0049D3D8(param_1,puVar7 + 1,(int)auStack_40);
        iVar1 = 0;
        iVar4 = *DAT_0049d3a8;
        if (0 < iVar4) {
          do {
            if (piVar6[iVar1 + 0x11] != 0) {
              *(int *)(piVar6[iVar1 + 0x11] + 0x14) = piVar6[10];
            }
            iVar1 = iVar1 + 1;
          } while (iVar1 < iVar4);
        }
        *puVar7 = piVar6;
        func_0049DA04(param_1,piVar6,1);
      }
      else if ((char)piVar6[0x18] == '\x02') {
        func_0049DA04(param_1,piVar6,4);
        if ((undefined4 *)puVar7[0x1c] != (undefined4 *)0x0) {
          *(undefined4 *)puVar7[0x1c] = piVar6;
        }
        puVar5 = (undefined4 *)puVar7[0x23];
        while (puVar3 = (undefined4 *)puVar5[1], puVar5 != puVar7 + 0x22) {
          puVar2 = *(undefined4 **)(puVar5[2] + 0x20);
          puVar5 = puVar3;
          if (puVar2 != (undefined4 *)0x0) {
            (**(code **)*puVar2)(puVar2,piVar6);
          }
        }
        iVar1 = *(int *)(param_1 + 0x8c);
        func_0010F1F8(puVar7 + 0x25,in_s0);
        fparam_0 = in_s0;
        *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + -1;
        puVar7[0x21] = DAT_0049d3ac;
        puVar5 = (undefined4 *)puVar7[0x23];
        while (puVar5 != puVar7 + 0x22) {
          iVar4 = puVar5[2];
          puVar5 = (undefined4 *)puVar5[1];
          if (*(char *)(iVar4 + 0x38) != '\0') {
            iVar8 = *(int *)(iVar4 + 0x1c);
            if (iVar8 != 0) {
              *(undefined4 *)(iVar4 + 0x1c) = 0;
              func_0010F1F8((int *)(iVar4 + 0x10),fparam_0);
              *(int *)(iVar8 + 8) = *(int *)(iVar8 + 8) + -1;
            }
            *(undefined1 *)(iVar4 + 0x38) = 0;
          }
        }
        *puVar7 = *(undefined4 *)(iVar1 + 0xc);
        *(undefined4 **)(iVar1 + 0xc) = puVar7;
      }
    }
  }
  return func_0010EEE0(param_1 + 4);
}

