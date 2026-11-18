#include "ghidra_types.h"

extern int func_00469878(int param_1,int param_2,undefined4 *param_3,undefined4 param_4,undefined1 param_5 );
extern int func_0048C258(int *param_1,undefined *param_2);
extern undefined *DAT_00465088;

// USA 00464F70 <- EU 00464F48 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:1 undefined1
// GLOBAL DAT_00465088 undefined *

undefined4 func_00464F70(int param_1,undefined4 *param_2,uint param_3,int param_4,undefined1 param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  bool bVar6;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(undefined4 *)(albw_frame + 0x0))
  #define uStack_1c (*(undefined4 *)(albw_frame + 0x4))
  uVar2 = *(uint *)(param_1 + 0x148);
  uVar1 = 1;
  do {
    if (uVar1 < uVar2) {
      uVar3 = *(uint *)(*(int *)(param_1 + 0x150) + uVar1 * 4);
    }
    else {
      uVar3 = 0;
    }
    bVar6 = *(char *)(uVar3 + 0xd) == '\0';
    if (bVar6) {
      uVar3 = (uint)*(byte *)(uVar3 + 0xe);
    }
    if (!bVar6 || uVar3 != 0) {
      if (uVar1 < uVar2) {
        iVar4 = *(int *)(*(int *)(param_1 + 0x150) + uVar1 * 4);
      }
      else {
        iVar4 = 0;
      }
      if (*(int *)(iVar4 + 0xa0) == param_4) {
        if (uVar1 < uVar2) {
          iVar4 = *(int *)(*(int *)(param_1 + 0x150) + uVar1 * 4);
        }
        else {
          iVar4 = 0;
        }
        if (*(byte *)(iVar4 + 0x88) == param_3) {
          uVar3 = uVar1;
          if (uVar1 < uVar2) {
            uVar3 = *(uint *)(*(int *)(param_1 + 0x150) + uVar1 * 4);
          }
          uVar5 = param_2[1];
          if (uVar2 <= uVar1) {
            uVar3 = 0;
          }
          *(undefined4 *)(uVar3 + 0x8c) = *param_2;
          *(undefined4 *)(uVar3 + 0x90) = uVar5;
          *(undefined1 *)(uVar3 + 0xb0) = 1;
          *(undefined1 *)(uVar3 + 0xa4) = param_5;
          return 0;
        }
      }
    }
    uVar1 = uVar1 + 1;
    if (0x20 < (int)uVar1) {
      uVar1 = 1;
      while( true ) {
        if (uVar1 < *(uint *)(param_1 + 0x148)) {
          uVar2 = *(uint *)(*(int *)(param_1 + 0x150) + uVar1 * 4);
        }
        else {
          uVar2 = 0;
        }
        bVar6 = *(char *)(uVar2 + 0xd) == '\0';
        if (bVar6) {
          uVar2 = (uint)*(byte *)(uVar2 + 0xe);
        }
        if (bVar6 && uVar2 == 0) break;
        uVar1 = uVar1 + 1;
        if (0x20 < (int)uVar1) {
          return 0;
        }
      }
      uVar2 = uVar1;
      if (uVar1 < *(uint *)(param_1 + 0x148)) {
        uVar2 = *(uint *)(*(int *)(param_1 + 0x150) + uVar1 * 4);
      }
      local_20 = *param_2;
      uStack_1c = param_2[1];
      if (*(uint *)(param_1 + 0x148) <= uVar1) {
        uVar2 = 0;
      }
      func_00469878(uVar2,param_3,&local_20,param_4,param_5);
      return func_0048C258((int *)(param_1 + 0x148),DAT_00465088);
    }
  } while( true );
}

