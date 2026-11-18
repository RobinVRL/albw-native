#include "ghidra_types.h"

extern int func_0052FBA0(int param_1,uint param_2);
extern int func_00588BE4(int param_1);
extern int *DAT_0051225c;
extern int *DAT_00512260;

// USA 005120FC <- EU 005120D4 (Ghidra, non-matching)
// GLOBAL DAT_0051225c int *
// GLOBAL DAT_00512260 int *

undefined4 func_005120FC(int param_1,int param_2)

{
  uint uVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  float fVar7;
  
  piVar3 = DAT_0051225c;
  uVar5 = (uint)*(ushort *)(param_2 + 0x20);
  uVar1 = 1 << (uVar5 & 0x1f);
  if ((uVar1 & 0x80) == 0) {
    if ((uVar1 & 2) != 0) {
      if ((uVar5 & 0x7e0) != 0x2c0) {
        *(undefined1 *)(param_1 + 0x47a) = 1;
        return 1;
      }
      return 0;
    }
    if (((uVar1 & 0x10) != 0) && ((uVar5 & 0x7e0) == 0x160)) {
      return 0;
    }
    if (((uVar1 & 0x18) == 0) && ((uVar1 & 0xd80) != 0)) {
      return 0;
    }
  }
  else {
    uVar1 = (uVar5 & 0x7e0) >> 5;
    if (uVar1 != 6) {
      if (uVar1 != 0xb) {
        if (uVar1 == 0xc) {
          *(undefined1 *)(param_1 + 0x47a) = 1;
          if (*(char *)(param_1 + 0x47b) == '\0') {
            *(undefined4 *)(param_1 + 0x480) = *(undefined4 *)(param_1 + 0x3d0);
            *(undefined4 *)(param_1 + 0x484) = *(undefined4 *)(param_1 + 0x3d4);
            *(undefined4 *)(param_1 + 0x488) = *(undefined4 *)(param_1 + 0x3d8);
            *(undefined4 *)(param_1 + 0x484) = *(undefined4 *)(param_2 + 0x14);
          }
          else {
            fVar7 = *(float *)(param_1 + 0x484);
            if (*(float *)(param_2 + 0x14) < *(float *)(param_1 + 0x484)) {
              fVar7 = *(float *)(param_2 + 0x14);
            }
            *(float *)(param_1 + 0x484) = fVar7;
          }
          *(undefined1 *)(param_1 + 0x47b) = 1;
          return 0;
        }
        if (uVar1 != 0xd) {
          return 0;
        }
      }
      *(undefined1 *)(param_1 + 0x47a) = 1;
      iVar4 = func_0052FBA0(*piVar3 + 0x3dbbc,*(uint *)(param_2 + 0x28));
      if ((iVar4 == 0) || (iVar4 = func_00588BE4(iVar4), iVar4 != *DAT_00512260)) {
        bVar6 = *(char *)(param_1 + 0x47a) == '\0';
        cVar2 = '\0';
        if (!bVar6) {
          cVar2 = *(char *)(param_1 + 0x47c);
        }
        if ((bVar6 || cVar2 == '\0') || (*(float *)(param_1 + 0x484) < *(float *)(param_2 + 0x14)))
        {
          *(undefined4 *)(param_1 + 0x480) = *(undefined4 *)(param_2 + 0x10);
          *(undefined4 *)(param_1 + 0x484) = *(undefined4 *)(param_2 + 0x14);
          *(undefined4 *)(param_1 + 0x488) = *(undefined4 *)(param_2 + 0x18);
        }
        *(undefined1 *)(param_1 + 0x47c) = 1;
      }
      return 1;
    }
  }
  *(undefined1 *)(param_1 + 0x47a) = 1;
  return 0;
}

