#include "ghidra_types.h"

extern ulonglong func_00115F34(uint param_1,uint param_2,uint param_3,uint param_4);
extern int func_003DE244(undefined4 *param_1);
extern int func_00414BD8(int param_1,int param_2);
extern int func_00415F4C(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4, uint param_5);
extern int func_0056D488(int *param_1);
extern int func_0056D49C(int *param_1);
extern int DAT_0041a558;

// USA 0041A2D4 <- EU 0041A2B4 (Ghidra, non-matching)
// GLOBAL DAT_0041a558 int

void func_0041A2D4(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int *unaff_r5;
  uint uVar6;
  bool bVar7;
  ulonglong uVar8;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define aiStack_40 ((int *)(albw_frame + 0x0))
  iVar2 = param_1 + -0x44;
  if (*(char *)(param_1 + -0x37) != '\0') {
    bVar7 = *(char *)(DAT_0041a558 + iVar2) != '\0';
    if (bVar7) {
      unaff_r5 = *(int **)(param_1 + 0xf0);
    }
    if ((bVar7 && unaff_r5 != (int *)0x0) && (iVar3 = func_0056D49C(unaff_r5), iVar3 != 0)) {
      while (iVar3 = iVar2 + *(int *)(param_1 + 0x2c) * 0x18, *(char *)(iVar3 + 0x149) == '\x03') {
        func_003DE244((undefined4 *)(iVar3 + 0x138));
        *(int *)(param_1 + 0x14) =
             *(int *)(iVar2 + *(int *)(param_1 + 0x2c) * 8 + 0x1b98) + *(int *)(param_1 + 0x14);
        uVar4 = 0;
        if (*(int *)(param_1 + 0xb8) != 0) {
          do {
            aiStack_40[uVar4] =
                 *(int *)(param_1 + 0x5c) * *(int *)(param_1 + 0x28) +
                 *(int *)(iVar2 + uVar4 * 0x340 + 0x104);
            uVar4 = uVar4 + 1;
          } while (uVar4 < *(uint *)(param_1 + 0xb8));
        }
        uVar5 = 0;
        if (*(char *)(param_1 + 0x34) == '\0') {
          uVar5 = *(undefined4 *)(param_1 + 0x38);
        }
        else if (*(char *)(param_1 + 0x34) == '\x01') {
          uVar6 = *(uint *)(param_1 + 0x38);
          uVar4 = *(uint *)(param_1 + 0x40);
          uVar8 = func_00115F34((uint)((ulonglong)uVar4 * (ulonglong)uVar6),
                                ((int)uVar6 >> 0x1f) * uVar4 +
                                (int)((ulonglong)uVar4 * (ulonglong)uVar6 >> 0x20),1000,0);
          if ((int)(uVar8 >> 0x20) == 0) {
            uVar8 = func_00115F34((uint)((ulonglong)uVar4 * (ulonglong)uVar6),
                                  ((int)uVar6 >> 0x1f) * uVar4 +
                                  (int)((ulonglong)uVar4 * (ulonglong)uVar6 >> 0x20),1000,0);
            uVar5 = (undefined4)uVar8;
          }
          else {
            uVar5 = 0xffffffff;
          }
        }
        *(undefined4 *)(param_1 + 0x38) = 0;
        if (*(char *)(param_1 + -0x37) == '\0') {
          uVar4 = 1;
        }
        else {
          uVar4 = 2;
        }
        func_00415F4C(*(int *)(param_1 + 0x1c),aiStack_40,*(undefined4 *)(param_1 + 0x28),uVar5,
                      uVar4);
        uVar4 = *(int *)(param_1 + 0x28) + 1;
        *(uint *)(param_1 + 0x28) = uVar4;
        if (*(uint *)(param_1 + 0x24) <= uVar4) {
          *(undefined4 *)(param_1 + 0x28) = 0;
        }
        uVar4 = *(int *)(param_1 + 0x2c) + 1;
        *(uint *)(param_1 + 0x2c) = uVar4;
        if (*(uint *)(param_1 + 0x24) <= uVar4) {
          *(undefined4 *)(param_1 + 0x2c) = 0;
        }
      }
      if (((*(char *)(param_1 + 0x10) != '\0') ||
          (*(char *)(*(int *)(param_1 + 0x1c) + 0x55) != '\0')) ||
         (*(int *)(*(int *)(param_1 + 0x1c) + 0x88) == 0)) {
LAB_0041a528:
        iVar3 = func_0056D488(unaff_r5);
        *(int *)(param_1 + 0x30) = *(int *)(iVar2 + *(int *)(param_1 + 0x2c) * 8 + 0x1b94) + iVar3;
        return;
      }
      uVar4 = 0;
      if (*(uint *)(param_1 + 0x24) != 0) {
        do {
          cVar1 = *(char *)(iVar2 + uVar4 * 0x18 + 0x149);
          if (cVar1 == '\x02' || cVar1 == '\x01') goto LAB_0041a528;
          uVar4 = uVar4 + 1;
        } while (uVar4 < *(uint *)(param_1 + 0x24));
      }
      *(undefined1 *)(param_1 + 0x12) = 1;
      *(undefined1 *)(param_1 + 0x10) = 1;
      if (*(char *)(param_1 + 0xf) != '\x01') {
        uVar4 = 0;
        if (*(int *)(param_1 + 0xb8) != 0) {
          do {
            iVar3 = *(int *)(iVar2 + uVar4 * 0x340 + 0x134);
            if (iVar3 != 0) {
              func_00414BD8(iVar3,1);
            }
            uVar4 = uVar4 + 1;
          } while (uVar4 < *(uint *)(param_1 + 0xb8));
        }
        *(undefined1 *)(param_1 + 0xf) = 1;
      }
    }
  }
  return;
}

