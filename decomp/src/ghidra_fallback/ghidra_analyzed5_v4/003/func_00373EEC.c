// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_004BF7DC(void);
extern int func_004C0C80(void);
extern int func_00556A38(int param_1);
extern int func_00556AE0(int param_1);
extern int func_00556AEC(int param_1);
extern int func_0058D794(int param_1,byte *param_2,byte *param_3,byte *param_4);
extern int func_00653388(int param_1,int param_2);
extern int *DAT_00374058;
extern int *DAT_0037405c;

// USA 00373EEC <- EU 00373EC8 (Ghidra, non-matching)
// GLOBAL DAT_00374058 int *
// GLOBAL DAT_0037405c int *

/* WARNING: Type propagation algorithm not settling */

byte func_00373EEC(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  int iVar6;
  
  iVar6 = *DAT_00374058;
  if (iVar6 != 0) {
    if (*(char *)(param_1 + 0x9d1) == '\0') {
      if (param_4 != 1) {
        if (param_4 != 2) {
          return 1;
        }
        bVar5 = func_0058D794(*DAT_0037405c,(byte *)(param_1 + 0x9e7),(byte *)(param_1 + 0x9e8),
                              (byte *)(param_1 + 0x9e9));
        if (!bVar5) {
          return 0;
        }
        return 1;
      }
      bVar2 = func_00556A38(iVar6);
      bVar3 = func_00556AEC(iVar6);
      bVar4 = func_00556AE0(iVar6);
      iVar6 = (uint)bVar4 + (uint)bVar2 + (uint)bVar3;
    }
    else {
      switch(param_4) {
      case 0:
        iVar6 = func_004BF7DC();
        break;
      case 1:
        iVar6 = func_004C0C80();
        break;
      case 2:
        iVar6 = func_00653388(param_1,0);
        break;
      case 3:
        bVar2 = *(byte *)(param_1 + 0x9d0);
        if (bVar2 < 2) {
          return bVar2;
        }
        if (bVar2 != 2 && bVar2 != 3) {
          return 1;
        }
        return bVar2;
      case 4:
        cVar1 = *(char *)(param_1 + 0x9d0);
        if (cVar1 == '\x01') {
          bVar2 = func_00556A38(iVar6);
        }
        else if (cVar1 == '\x02') {
          bVar2 = func_00556AEC(iVar6);
        }
        else {
          if (cVar1 != '\x03') {
            return 1;
          }
          bVar2 = func_00556AE0(iVar6);
        }
        if (9 < bVar2) {
          return 0;
        }
        return 1;
      default:
        goto switchD_00373eec_default;
      }
    }
    if (iVar6 == 0) {
switchD_00373eec_default:
      return 1;
    }
  }
  return 0;
}

