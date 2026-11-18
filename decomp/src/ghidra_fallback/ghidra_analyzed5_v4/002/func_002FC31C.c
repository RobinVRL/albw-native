#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_00581B9C(int param_1);
extern int func_00582250(int param_1);
extern int func_00588BF0(int param_1,int param_2);
extern int func_0058A7D4(void);
extern int func_006644B8(undefined4 *param_1,undefined1 param_2);
extern int *DAT_002fc458;

// USA 002FC31C <- EU 002FC2F8 (Ghidra, non-matching)
// GLOBAL DAT_002fc458 int *

undefined4 func_002FC31C(int param_1)

{
  bool bVar1;
  int iVar2;
  uint *puVar3;
  uint in_r2;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  
  if ((*(char *)(param_1 + 0x90c) == '\0') || (bVar1 = func_00588BF0(param_1,0), bVar1)) {
    if (*(uint *)(param_1 + 0x8f0) <= *(uint *)(param_1 + 0x8ec)) {
      uVar6 = *(uint *)(param_1 + 0x904);
      if (-1 < (int)uVar6) {
        iVar8 = *DAT_002fc458;
        iVar2 = func_00581B9C(iVar8);
        if (((iVar2 == 1) && (puVar3 = (uint *)func_00582250(iVar8), uVar6 < *puVar3)) &&
           (iVar2 = *(int *)(puVar3[2] + uVar6 * 4), iVar2 != 0)) {
          puVar3 = (uint *)func_0058A7D4();
          uVar7 = *(uint *)(iVar2 + 0x20);
          uVar6 = func_00111A64(puVar3);
          uVar6 = (uint)((ulonglong)uVar7 * (ulonglong)uVar6 >> 0x20);
          iVar8 = 0;
          do {
            if (*(uint *)(param_1 + 0x908) != uVar6) break;
            puVar3 = (uint *)func_0058A7D4();
            uVar7 = *(uint *)(iVar2 + 0x20);
            uVar6 = func_00111A64(puVar3);
            uVar6 = (uint)((ulonglong)uVar7 * (ulonglong)uVar6 >> 0x20);
            iVar8 = iVar8 + 1;
          } while (iVar8 < 10);
          *(uint *)(param_1 + 0x908) = uVar6;
          iVar8 = *(int *)(iVar2 + 0x28);
          if (iVar8 != 0) {
            in_r2 = *(uint *)(iVar2 + 0x20);
          }
          if ((iVar8 != 0 && uVar6 < in_r2) && (iVar2 = *(int *)(iVar8 + uVar6 * 4), iVar2 != 0)) {
            func_006644B8((undefined4 *)(param_1 + 0x8bc),1);
            uVar4 = *(undefined4 *)(iVar2 + 0x1c);
            uVar5 = *(undefined4 *)(iVar2 + 0x20);
            *(undefined4 *)(param_1 + 0x368) = *(undefined4 *)(iVar2 + 0x18);
            *(undefined4 *)(param_1 + 0x36c) = uVar4;
            *(undefined4 *)(param_1 + 0x370) = uVar5;
            uVar4 = *(undefined4 *)(iVar2 + 0x1c);
            uVar5 = *(undefined4 *)(iVar2 + 0x20);
            *(undefined4 *)(param_1 + 0x3d0) = *(undefined4 *)(iVar2 + 0x18);
            *(undefined4 *)(param_1 + 0x3d4) = uVar4;
            *(undefined4 *)(param_1 + 0x3d8) = uVar5;
            return 0;
          }
        }
      }
      *(undefined4 *)(param_1 + 0x368) = *(undefined4 *)(param_1 + 8);
      *(undefined4 *)(param_1 + 0x36c) = *(undefined4 *)(param_1 + 0xc);
      *(undefined4 *)(param_1 + 0x370) = *(undefined4 *)(param_1 + 0x10);
      *(undefined4 *)(param_1 + 0x3d0) = *(undefined4 *)(param_1 + 8);
      *(undefined4 *)(param_1 + 0x3d4) = *(undefined4 *)(param_1 + 0xc);
      *(undefined4 *)(param_1 + 0x3d8) = *(undefined4 *)(param_1 + 0x10);
      return func_006644B8((undefined4 *)(param_1 + 0x8bc),1);
    }
    *(uint *)(param_1 + 0x8ec) = *(uint *)(param_1 + 0x8ec) + 1;
  }
  return 0;
}

