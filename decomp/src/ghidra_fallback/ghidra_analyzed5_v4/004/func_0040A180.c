#include "ghidra_types.h"

extern int func_00407C6C(int *param_1,int param_2);
extern int func_00407D18(int param_1,int param_2);
extern int func_00407FA4(undefined4 *param_1);
extern int func_0040E800(int param_1,int param_2,int param_3);
extern int func_0040E82C(undefined4 *param_1);
extern int func_00569764(int param_1,uint param_2,undefined4 *param_3);
extern int func_0056CD08(int param_1);

// USA 0040A180 <- EU 0040A160 (Ghidra, non-matching)

undefined4 func_0040A180(int param_1,int param_2,uint *param_3,uint param_4)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 *unaff_r9;
  int iVar10;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_40 (*(int *)(albw_frame + 0x0))
  #define local_3c (*(int *)(albw_frame + 0x4))
  #define iStack_34 (*(int *)(albw_frame + 0xc))
  #define local_30 (*(int *)(albw_frame + 0x10))
  #define puStack_2c (*(uint * *)(albw_frame + 0x14))
  #define uStack_28 (*(uint *)(albw_frame + 0x18))
  if ((*param_3 & 0x1f) == 0) {
    iStack_34 = param_1;
    local_30 = param_2;
    puStack_2c = param_3;
    uStack_28 = param_4;
    uVar3 = func_0056CD08(param_2);
    puVar9 = (undefined4 *)*param_3;
    uVar4 = (uVar3 * 0x5c + 0x1f & 0xffffffe0) + (int)puVar9;
    if ((int)(uVar4 - param_4) < 1) {
      *param_3 = uVar4;
      *(uint *)(param_1 + 0x18) = uVar3;
      uVar4 = 0;
      *(undefined4 **)(param_1 + 0x1c) = puVar9;
      if (uVar3 != 0) {
        do {
          if (puVar9 == (undefined4 *)0x0) {
            piVar6 = (int *)0x0;
          }
          else {
            piVar6 = (int *)func_00407FA4(puVar9);
          }
          local_40 = 0;
          local_3c = 0;
          bVar2 = func_00569764(local_30,uVar4 | 0x4000000,&local_40);
          if ((bVar2) && (func_00407C6C(piVar6,local_40), local_3c != 0)) {
            iVar10 = 0;
            if (0 < local_40) {
              do {
                iVar1 = local_3c;
                puVar5 = (undefined4 *)*param_3;
                if (((uint)puVar5 & 0x1f) != 0) {
                  return 0;
                }
                uVar7 = (int)puVar5 + 0x43U & 0xffffffe0;
                if (0 < (int)(uVar7 - param_4)) {
                  return 0;
                }
                if (puVar5 == (undefined4 *)0x0) {
                  unaff_r9 = (undefined4 *)0x0;
                }
                *param_3 = uVar7;
                if (puVar5 != (undefined4 *)0x0) {
                  unaff_r9 = func_0040E82C(puVar5);
                }
                uVar7 = *param_3 + 0x1f & 0xffffffe0;
                uVar8 = uVar7 + iVar1 + 0x1f & 0xffffffe0;
                *param_3 = uVar7;
                if (0 < (int)(uVar8 - param_4)) {
                  return 0;
                }
                *param_3 = uVar8;
                bVar2 = func_0040E800((int)unaff_r9,uVar7,iVar1);
                if (!bVar2) {
                  return 0;
                }
                if (unaff_r9 == (undefined4 *)0x0) {
                  return 0;
                }
                func_00407D18((int)piVar6,(int)unaff_r9);
                iVar10 = iVar10 + 1;
              } while (iVar10 < local_40);
            }
            piVar6[0xd] = local_40;
          }
          uVar4 = uVar4 + 1;
          puVar9 = puVar9 + 0x17;
        } while (uVar4 < uVar3);
      }
      return 1;
    }
  }
  return 0;
}

