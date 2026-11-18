#include "ghidra_types.h"

extern int func_003E6AA8(int param_1,uint param_2,int param_3,undefined4 param_4,...);
extern undefined DAT_003fdd1c;

// USA 003FDC34 <- EU 003FDC14 (Ghidra, non-matching)
// GLOBAL DAT_003fdd1c undefined

uint func_003FDC34(int param_1,int *param_2,int param_3,uint param_4)

{
  char *pcVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  uint uVar7;
  
  uVar7 = 0;
  do {
    uVar2 = *param_2 + uVar7;
    if (*(ushort *)(*(int *)(param_1 + 4) + 6) <= uVar2 || param_4 <= uVar7) {
      *param_2 = *param_2 + uVar7;
      return uVar7;
    }
    if (uVar2 < *(uint *)(param_1 + 0xc)) {
      iVar4 = *(int *)(param_1 + 0x10) + uVar2 * 0x10;
    }
    else {
      iVar4 = *(int *)(param_1 + 0x10);
    }
    if (*(uint *)(iVar4 + 4) == 0) {
      if (uVar2 < *(uint *)(param_1 + 0xc)) {
        puVar3 = (undefined4 *)(*(int *)(param_1 + 0x10) + uVar2 * 0x10);
      }
      else {
        puVar3 = *(undefined4 **)(param_1 + 0x10);
      }
      func_003E6AA8(param_3 + uVar7 * 0x100,0x100,0xff,&DAT_003fdd1c,*puVar3);
    }
    else {
      uVar2 = *(uint *)(iVar4 + 4) & 0xffffff;
      if (*(uint *)(param_1 + 0x14) < *(int *)(param_1 + 8) + uVar2) {
        *(undefined1 *)(param_3 + uVar7 * 0x100) = 0;
      }
      else {
        pcVar1 = (char *)(*(int *)(param_1 + 8) + uVar2 * 4);
        uVar2 = 0;
        pcVar5 = (char *)(param_3 + uVar7 * 0x100);
        do {
          pcVar6 = pcVar5;
          if (0xfe < uVar2) break;
          uVar2 = uVar2 + 1;
          pcVar6 = pcVar5 + 1;
          *pcVar5 = *pcVar1;
          pcVar1 = pcVar1 + 1;
          pcVar5 = pcVar6;
        } while (*pcVar1 != '\0');
        *pcVar6 = '\0';
      }
    }
    uVar7 = uVar7 + 1;
  } while( true );
}

