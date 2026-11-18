#include "ghidra_types.h"

extern undefined4 DAT_0052a188;

// USA 0052A0A0 <- EU 0052A078 (Ghidra, non-matching)
// GLOBAL DAT_0052a188 undefined4

void func_0052A0A0(int param_1,undefined4 *param_2,int *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  uint in_r12;
  
  if (param_2 == (undefined4 *)0x0) {
    return;
  }
  puVar6 = (undefined4 *)0x0;
  iVar4 = *(int *)(param_1 + 0xf0);
joined_r0x0052a098:
  if (iVar4 != 0) {
    (**(code **)(*param_3 + 8))(param_3);
    (**(code **)(*param_3 + 8))(param_3);
    iVar5 = param_3[1];
    (**(code **)(*(int *)(iVar4 + 0x10) + 8))((int *)(iVar4 + 0x10));
    iVar2 = *(int *)(iVar4 + 0x14);
    if (iVar5 != iVar2) {
      iVar5 = 0;
      do {
        iVar3 = (int)*(char *)(param_3[1] + iVar5);
        if (iVar3 == 0) {
          in_r12 = (uint)*(byte *)(iVar2 + iVar5);
        }
        if (iVar3 == 0 && in_r12 == 0) break;
        if (iVar3 == 0) {
LAB_0052a15c:
          iVar4 = *(int *)(iVar4 + 4);
          goto joined_r0x0052a098;
        }
        in_r12 = (uint)*(char *)(iVar2 + iVar5);
        if (in_r12 == 0) goto LAB_0052a164;
        if (iVar3 < (int)in_r12) goto LAB_0052a15c;
        if ((int)in_r12 < iVar3) goto LAB_0052a164;
        iVar5 = iVar5 + 1;
        if (0x3ffff < iVar5) break;
      } while( true );
    }
    if (iVar4 == 0) goto LAB_0052a174;
    puVar6 = (undefined4 *)(iVar4 + 0x18);
  }
  if (puVar6 != (undefined4 *)0x0) {
    *param_2 = *puVar6;
    param_2[1] = puVar6[1];
    param_2[2] = puVar6[2];
    return;
  }
LAB_0052a174:
  uVar1 = DAT_0052a188;
  *param_2 = DAT_0052a188;
  param_2[1] = uVar1;
  param_2[2] = uVar1;
  return;
LAB_0052a164:
  iVar4 = *(int *)(iVar4 + 8);
  goto joined_r0x0052a098;
}

