#include "ghidra_types.h"

extern int func_00120024(undefined4 *param_1,int param_2);
extern int *DAT_00581f28;

// USA 00581E5C <- EU 00581E34 (Ghidra, non-matching)
// GLOBAL DAT_00581f28 int *

int func_00581E5C(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint in_r12;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(int *)(albw_frame + 0x8))
  #define local_24 (*(int *)(albw_frame + 0xc))
  func_00120024(&local_28,(int)*(char *)(*DAT_00581f28 + 0x18));
  iVar4 = *(int *)(param_1 + 0x5b70);
  iVar5 = 0;
joined_r0x00581e68:
  if (iVar4 != 0) {
    (**(code **)(local_28 + 8))(&local_28);
    (**(code **)(local_28 + 8))(&local_28);
    iVar1 = local_24;
    (**(code **)(*(int *)(iVar4 + 0x10) + 8))((int *)(iVar4 + 0x10));
    iVar2 = *(int *)(iVar4 + 0x14);
    if (iVar1 != iVar2) {
      iVar1 = 0;
      do {
        iVar3 = (int)*(char *)(local_24 + iVar1);
        if (iVar3 == 0) {
          in_r12 = (uint)*(byte *)(iVar2 + iVar1);
        }
        if (iVar3 == 0 && in_r12 == 0) break;
        if (iVar3 == 0) {
LAB_00581f10:
          iVar4 = *(int *)(iVar4 + 4);
          goto joined_r0x00581e68;
        }
        in_r12 = (uint)*(char *)(iVar2 + iVar1);
        if (in_r12 == 0) goto LAB_00581f18;
        if (iVar3 < (int)in_r12) goto LAB_00581f10;
        if ((int)in_r12 < iVar3) goto LAB_00581f18;
        iVar1 = iVar1 + 1;
        if (0x3ffff < iVar1) break;
      } while( true );
    }
    if (iVar4 != 0) {
      iVar5 = iVar4 + 0x18;
    }
  }
  return iVar5;
LAB_00581f18:
  iVar4 = *(int *)(iVar4 + 8);
  goto joined_r0x00581e68;
}

