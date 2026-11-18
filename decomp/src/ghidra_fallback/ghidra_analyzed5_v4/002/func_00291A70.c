#include "ghidra_types.h"

extern int func_002D55D0(int param_1,uint param_2);
extern int func_003406B8(int param_1);
extern int func_0052E8A0(int param_1);
extern int func_00552FC0(uint param_1);
extern int DAT_00291c40;
extern int *DAT_00291c44;
extern undefined4 DAT_00291c48;
extern undefined4 DAT_00291c4c;

// USA 00291A70 <- EU 00291A98 (Ghidra, non-matching)
// GLOBAL DAT_00291c40 int
// GLOBAL DAT_00291c44 int *
// GLOBAL DAT_00291c48 undefined4
// GLOBAL DAT_00291c4c undefined4

undefined4 func_00291A70(int param_1,undefined4 *param_2,int param_3)

{
  char cVar1;
  short sVar2;
  undefined4 uVar3;
  bool bVar4;
  uint uVar5;
  undefined1 *puVar6;
  int iVar7;
  undefined4 uVar8;
  
  bVar4 = func_0052E8A0(*(int *)(param_1 + 0x10));
  if (!bVar4) {
    iVar7 = (int)*(short *)(param_1 + 0x42);
    cVar1 = *(char *)(DAT_00291c40 + iVar7 * 0x10);
    if (cVar1 != '\x16') {
      if (cVar1 == '\v') {
        if (iVar7 != 0x4c) {
          return 0;
        }
      }
      else {
        if (iVar7 == 0x46 || iVar7 == 0xa6) {
          return 0;
        }
        if (cVar1 == '\x0f' || cVar1 == '\x17') {
          return 0;
        }
      }
      if (((*(int *)(*DAT_00291c44 + 0x44) == 0) ||
          (*(int *)(*DAT_00291c44 + 0x44) != *(int *)(param_1 + 0x78))) && (cVar1 != '\x13')) {
        iVar7 = *(int *)(param_1 + 0x1c);
        *(undefined4 *)(iVar7 + 0x68) = *(undefined4 *)(iVar7 + 0x74);
        *(undefined4 *)(iVar7 + 0x6c) = *(undefined4 *)(iVar7 + 0x78);
        *(undefined4 *)(iVar7 + 0x70) = *(undefined4 *)(iVar7 + 0x7c);
        uVar3 = DAT_00291c4c;
        uVar8 = DAT_00291c48;
        sVar2 = *(short *)(param_1 + 0x42);
        if (sVar2 == 0x3c || sVar2 == 0x3b) {
          puVar6 = (undefined1 *)func_002D55D0(*(int *)(param_1 + 0x48),0x3d);
          if (puVar6 != (undefined1 *)0x0) {
            *puVar6 = (char)param_3;
          }
          iVar7 = *(int *)(param_1 + 0x1c);
          cVar1 = *(char *)(iVar7 + 0x16e);
        }
        else {
          if (sVar2 == 0x3d || sVar2 == 0x5e) {
            uVar5 = func_00552FC0(*(uint *)(param_1 + 0x1c));
            iVar7 = 0;
            if (uVar5 != 0) {
              iVar7 = *(int *)(param_1 + 0x10);
            }
            if (uVar5 != 0) {
              *(undefined4 *)(iVar7 + 0x3e0) = uVar8;
            }
            iVar7 = *(int *)(param_1 + 0x1c);
            *(undefined1 *)(iVar7 + 0x528) = 1;
            *(undefined4 *)(iVar7 + 0x510) = *param_2;
            *(undefined4 *)(iVar7 + 0x514) = param_2[1];
            *(undefined4 *)(iVar7 + 0x518) = param_2[2];
            return 1;
          }
          if (param_3 != 0) {
            *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x3dc) = DAT_00291c4c;
            *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x3e4) = uVar3;
          }
          uVar5 = func_00552FC0(*(uint *)(param_1 + 0x1c));
          iVar7 = 0;
          if (uVar5 != 0) {
            iVar7 = *(int *)(param_1 + 0x10);
          }
          if (uVar5 != 0) {
            *(undefined4 *)(iVar7 + 0x3e0) = uVar8;
          }
          puVar6 = (undefined1 *)func_002D55D0(*(int *)(param_1 + 0x48),0x3d);
          if (puVar6 != (undefined1 *)0x0) {
            *puVar6 = (char)param_3;
          }
          iVar7 = *(int *)(param_1 + 0x1c);
          cVar1 = *(char *)(iVar7 + 0x16e);
        }
        if (cVar1 != '\0') {
          func_003406B8(iVar7);
        }
        return 1;
      }
    }
  }
  return 0;
}

