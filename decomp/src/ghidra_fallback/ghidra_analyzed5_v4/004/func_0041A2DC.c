#include "ghidra_types.h"

extern ulonglong func_00115F34(uint param_1,uint param_2,uint param_3,uint param_4);
extern int func_003DE244(undefined4 *param_1);
extern int func_00414BD8(int param_1,int param_2);
extern int func_00415F4C(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4, uint param_5);
extern int func_0056D488(int *param_1);
extern int func_0056D49C(int *param_1);
extern int DAT_0041a558;

// USA 0041A2DC <- EU 0041A2BC (Ghidra, non-matching)
// GLOBAL DAT_0041a558 int

void func_0041A2DC(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int *unaff_r5;
  uint uVar5;
  bool bVar6;
  ulonglong uVar7;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_40 ((int *)(albw_frame + 0x0))
  if (*(char *)(param_1 + 0xd) != '\0') {
    bVar6 = *(char *)(DAT_0041a558 + param_1) != '\0';
    if (bVar6) {
      unaff_r5 = *(int **)(param_1 + 0x134);
    }
    if ((bVar6 && unaff_r5 != (int *)0x0) && (iVar2 = func_0056D49C(unaff_r5), iVar2 != 0)) {
      while (iVar2 = param_1 + *(int *)(param_1 + 0x70) * 0x18, *(char *)(iVar2 + 0x149) == '\x03')
      {
        func_003DE244((undefined4 *)(iVar2 + 0x138));
        *(int *)(param_1 + 0x58) =
             *(int *)(param_1 + *(int *)(param_1 + 0x70) * 8 + 0x1b98) + *(int *)(param_1 + 0x58);
        uVar3 = 0;
        if (*(int *)(param_1 + 0xfc) != 0) {
          do {
            local_40[uVar3] =
                 *(int *)(param_1 + 0xa0) * *(int *)(param_1 + 0x6c) +
                 *(int *)(param_1 + uVar3 * 0x340 + 0x104);
            uVar3 = uVar3 + 1;
          } while (uVar3 < *(uint *)(param_1 + 0xfc));
        }
        uVar4 = 0;
        if (*(char *)(param_1 + 0x78) == '\0') {
          uVar4 = *(undefined4 *)(param_1 + 0x7c);
        }
        else if (*(char *)(param_1 + 0x78) == '\x01') {
          uVar5 = *(uint *)(param_1 + 0x7c);
          uVar3 = *(uint *)(param_1 + 0x84);
          uVar7 = func_00115F34((uint)((ulonglong)uVar3 * (ulonglong)uVar5),
                                ((int)uVar5 >> 0x1f) * uVar3 +
                                (int)((ulonglong)uVar3 * (ulonglong)uVar5 >> 0x20),1000,0);
          if ((int)(uVar7 >> 0x20) == 0) {
            uVar7 = func_00115F34((uint)((ulonglong)uVar3 * (ulonglong)uVar5),
                                  ((int)uVar5 >> 0x1f) * uVar3 +
                                  (int)((ulonglong)uVar3 * (ulonglong)uVar5 >> 0x20),1000,0);
            uVar4 = (undefined4)uVar7;
          }
          else {
            uVar4 = 0xffffffff;
          }
        }
        *(undefined4 *)(param_1 + 0x7c) = 0;
        if (*(char *)(param_1 + 0xd) == '\0') {
          uVar3 = 1;
        }
        else {
          uVar3 = 2;
        }
        func_00415F4C(*(int *)(param_1 + 0x60),local_40,*(undefined4 *)(param_1 + 0x6c),uVar4,uVar3)
        ;
        uVar3 = *(int *)(param_1 + 0x6c) + 1;
        *(uint *)(param_1 + 0x6c) = uVar3;
        if (*(uint *)(param_1 + 0x68) <= uVar3) {
          *(undefined4 *)(param_1 + 0x6c) = 0;
        }
        uVar3 = *(int *)(param_1 + 0x70) + 1;
        *(uint *)(param_1 + 0x70) = uVar3;
        if (*(uint *)(param_1 + 0x68) <= uVar3) {
          *(undefined4 *)(param_1 + 0x70) = 0;
        }
      }
      if (((*(char *)(param_1 + 0x54) != '\0') ||
          (*(char *)(*(int *)(param_1 + 0x60) + 0x55) != '\0')) ||
         (*(int *)(*(int *)(param_1 + 0x60) + 0x88) == 0)) {
LAB_0041a528:
        iVar2 = func_0056D488(unaff_r5);
        *(int *)(param_1 + 0x74) = *(int *)(param_1 + *(int *)(param_1 + 0x70) * 8 + 0x1b94) + iVar2
        ;
        return;
      }
      uVar3 = 0;
      if (*(uint *)(param_1 + 0x68) != 0) {
        do {
          cVar1 = *(char *)(param_1 + uVar3 * 0x18 + 0x149);
          if (cVar1 == '\x02' || cVar1 == '\x01') goto LAB_0041a528;
          uVar3 = uVar3 + 1;
        } while (uVar3 < *(uint *)(param_1 + 0x68));
      }
      *(undefined1 *)(param_1 + 0x56) = 1;
      *(undefined1 *)(param_1 + 0x54) = 1;
      if (*(char *)(param_1 + 0x53) != '\x01') {
        uVar3 = 0;
        if (*(int *)(param_1 + 0xfc) != 0) {
          do {
            iVar2 = *(int *)(param_1 + uVar3 * 0x340 + 0x134);
            if (iVar2 != 0) {
              func_00414BD8(iVar2,1);
            }
            uVar3 = uVar3 + 1;
          } while (uVar3 < *(uint *)(param_1 + 0xfc));
        }
        *(undefined1 *)(param_1 + 0x53) = 1;
      }
    }
  }
  return;
}

