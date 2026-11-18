#include "ghidra_types.h"

extern int func_0016898C(int param_1,uint *param_2);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern int func_00566C10(int param_1,uint param_2);
extern undefined4 DAT_004bd444;
extern uint DAT_004bd448;

// USA 0017AB90 <- EU 0017AB90 (Ghidra, non-matching)
// GLOBAL DAT_004bd444 undefined4
// GLOBAL DAT_004bd448 uint

void func_004BD280(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  bool bVar4;
  undefined4 uVar5;
  _Alignas(8) unsigned char albw_frame[0x100];
  #define aiStack_f4 ((int *)(albw_frame + 0xc))
  #define aiStack_90 ((int *)(albw_frame + 0x70))
  if (((int)param_2 < (int)(uint)*(byte *)(param_1 + 0x8b0)) &&
     (*(byte *)(param_1 + 0x852) != param_2)) {
    *(char *)(param_1 + 0x852) = (char)param_2;
    if (param_3 == -1) {
      param_3 = *(int *)(param_1 + 0x8ec);
    }
    puVar2 = (uint *)func_002C11E8(aiStack_90,param_2,param_3,0);
    func_0016898C(*(int *)(param_1 + 0x7ac),puVar2);
    uVar1 = DAT_004bd448;
    uVar5 = DAT_004bd444;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x7ac) + 0x14) + 0x10) = DAT_004bd444;
    if ((int)param_2 < (int)(uint)*(byte *)(param_1 + 0x8b1)) {
      if (*(int *)(param_1 + 0x7b0) != 0) {
        iVar3 = *(int *)(param_1 + 0x794);
        if (iVar3 == 0) {
          iVar3 = *(int *)(param_1 + 0x790);
        }
        iVar3 = (int)*(char *)(iVar3 + param_2 * 0xc + 8);
        if (iVar3 == -1) {
          if (*(char *)(param_1 + 0x916) != '\0') {
            if (*(uint *)(param_1 + 0x8e0) != uVar1) {
              func_00566C10(*(int *)(param_1 + 0x7a0),*(uint *)(param_1 + 0x8e0));
            }
            if (*(uint *)(param_1 + 0x8e4) != uVar1) {
              func_00566C10(*(int *)(param_1 + 0x7a0),*(uint *)(param_1 + 0x8e4));
            }
          }
          *(undefined1 *)(param_1 + 0x916) = 0;
        }
        else {
          *(undefined1 *)(param_1 + 0x916) = 1;
          puVar2 = (uint *)func_002C11E8(aiStack_f4,iVar3,param_3,0);
          func_0016898C(*(int *)(param_1 + 0x7b0),puVar2);
          *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x7b0) + 0x14) + 0x10) = uVar5;
        }
      }
      bVar4 = *(int *)(param_1 + 0x7b8) != 0;
      iVar3 = 0;
      if (bVar4) {
        iVar3 = *(int *)(param_1 + 0x794);
      }
      if (bVar4 && iVar3 != 0) {
        iVar3 = (int)*(char *)(iVar3 + param_2 * 0xc + 9);
        if (iVar3 != -1) {
          *(undefined1 *)(param_1 + 0x917) = 1;
          puVar2 = (uint *)func_002C11E8(aiStack_f4,iVar3,param_3,0);
          func_0016898C(*(int *)(param_1 + 0x7b8),puVar2);
          *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x7b8) + 0x14) + 0x10) = uVar5;
          return;
        }
        *(undefined1 *)(param_1 + 0x917) = 0;
      }
    }
    else {
      if (*(char *)(param_1 + 0x916) != '\0') {
        if (*(uint *)(param_1 + 0x8e0) != uVar1) {
          func_00566C10(*(int *)(param_1 + 0x7a0),*(uint *)(param_1 + 0x8e0));
        }
        if (*(uint *)(param_1 + 0x8e4) != uVar1) {
          func_00566C10(*(int *)(param_1 + 0x7a0),*(uint *)(param_1 + 0x8e4));
        }
      }
      *(undefined1 *)(param_1 + 0x916) = 0;
      *(undefined1 *)(param_1 + 0x917) = 0;
    }
  }
  return;
}

