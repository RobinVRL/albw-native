#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int *DAT_00323530;
extern int DAT_00323534;

// USA 0032337C <- EU 00323358 (Ghidra, non-matching)
// GLOBAL DAT_00323530 int *
// GLOBAL DAT_00323534 int

void func_0032337C(int param_1)

{
  int *piVar1;
  undefined1 uVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  
  piVar1 = DAT_00323530;
  iVar8 = *(int *)(param_1 + 0x33c);
  iVar9 = *(int *)(param_1 + 0x340);
  uVar4 = func_00111A64((uint *)(*DAT_00323530 + 0x660));
  iVar12 = DAT_00323534;
  *(int *)(param_1 + 0x330) =
       (int)((ulonglong)(uint)(iVar9 - iVar8) * (ulonglong)uVar4 >> 0x20) +
       *(int *)(param_1 + 0x33c);
  uVar4 = 0;
  *(undefined2 *)(iVar12 + param_1) = 0;
  do {
    if (uVar4 < *(uint *)(param_1 + 0x368)) {
      *(undefined1 *)(param_1 + uVar4 + 0x380) = 0;
    }
    else {
      uVar5 = *(uint *)(param_1 + 0x368) + *(int *)(param_1 + 0x36c);
      if (uVar4 < uVar5) {
        *(undefined1 *)(param_1 + uVar4 + 0x380) = 1;
      }
      else if (uVar4 < uVar5 + *(int *)(param_1 + 0x370)) {
        *(undefined1 *)(param_1 + uVar4 + 0x380) = 2;
      }
      else {
        uVar5 = uVar5 + *(int *)(param_1 + 0x370) + *(int *)(param_1 + 0x374);
        if (uVar4 < uVar5) {
          *(undefined1 *)(param_1 + uVar4 + 0x380) = 3;
        }
        else if (uVar4 < uVar5 + *(int *)(param_1 + 0x378)) {
          *(undefined1 *)(param_1 + uVar4 + 0x380) = 4;
        }
        else {
          uVar10 = *(uint *)(param_1 + 0x354);
          iVar12 = *(int *)(param_1 + 0x364);
          uVar5 = *(int *)(param_1 + 0x358) + uVar10;
          uVar11 = uVar5 + *(int *)(param_1 + 0x35c);
          uVar6 = uVar11 + *(int *)(param_1 + 0x360);
          uVar7 = func_00111A64((uint *)(*piVar1 + 0x660));
          uVar7 = (uint)((ulonglong)(uVar6 + iVar12) * (ulonglong)uVar7 >> 0x20);
          if (uVar7 < uVar6) {
            if (uVar7 < uVar11) {
              if (uVar7 < uVar5) {
                if (uVar7 < uVar10) {
                  uVar2 = 0;
                }
                else {
                  uVar2 = 1;
                }
              }
              else {
                uVar2 = 2;
              }
            }
            else {
              uVar2 = 3;
            }
          }
          else {
            uVar2 = 4;
          }
          *(undefined1 *)(param_1 + uVar4 + 0x380) = uVar2;
        }
      }
    }
    uVar4 = uVar4 + 1 & 0xffff;
  } while (uVar4 < 200);
  uVar3 = 0;
  do {
    uVar5 = *(uint *)(param_1 + 0x37c);
    uVar4 = func_00111A64((uint *)(*piVar1 + 0x660));
    uVar6 = (uint)((ulonglong)uVar5 * (ulonglong)uVar4 >> 0x20);
    uVar5 = *(uint *)(param_1 + 0x37c);
    uVar4 = func_00111A64((uint *)(*piVar1 + 0x660));
    uVar4 = (uint)((ulonglong)uVar5 * (ulonglong)uVar4 >> 0x20);
    uVar2 = *(undefined1 *)(param_1 + (uVar6 & 0xffff) + 0x380);
    *(undefined1 *)(param_1 + (uVar6 & 0xffff) + 0x380) =
         *(undefined1 *)(param_1 + (uVar4 & 0xffff) + 0x380);
    *(undefined1 *)(param_1 + (uVar4 & 0xffff) + 0x380) = uVar2;
    uVar3 = uVar3 + 1;
  } while (uVar3 < 500);
  return;
}

