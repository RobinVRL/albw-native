#include "ghidra_types.h"

extern int func_0016898C(int param_1,uint *param_2);
extern int func_001692F8(int param_1,uint *param_2);
extern int func_004BD280();
extern int func_004C00F4(int param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern undefined4 DAT_00284d80;
extern float DAT_00284d84;
extern float DAT_00284d88;

// USA 00284B24 <- EU 00284B4C (Ghidra, non-matching)
// GLOBAL DAT_00284d80 undefined4
// GLOBAL DAT_00284d84 float
// GLOBAL DAT_00284d88 float

undefined4 func_00284B24(int param_1,uint param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int *in_r3;
  int iVar3;
  uint unaff_r9;
  float fVar4;
  float fVar5;
  _Alignas(8) unsigned char albw_frame[0x90];
  #define local_88 ((uint *)(albw_frame + 0x8))
  #define local_80 (*(int * *)(albw_frame + 0x10))
  #define local_7c (*(int *)(albw_frame + 0x14))
  #define local_78 (*(float *)(albw_frame + 0x18))
  #define local_74 (*(float *)(albw_frame + 0x1c))
  #define local_70 (*(undefined4 *)(albw_frame + 0x20))
  #define local_6c (*(float *)(albw_frame + 0x24))
  #define local_68 (*(uint *)(albw_frame + 0x28))
  #define local_34 (*(undefined4 *)(albw_frame + 0x5c))
  #define local_30 (*(undefined1 *)(albw_frame + 0x60))
  func_004BD280(param_1,param_2,param_3);
  local_78 = DAT_00284d88;
  local_74 = DAT_00284d84;
  local_70 = DAT_00284d80;
  if (*(short *)(param_1 + 0x2e) == 0) {
    local_7c = (int)*(char *)(*(int *)(param_1 + 0x790) + param_2 * 0xc + 8);
    if (local_7c < 0) {
      iVar1 = *(int *)(param_1 + 0x7b4);
      uVar2 = 0;
      iVar3 = *(int *)(iVar1 + 0xc);
      if (0 < iVar3) {
        do {
          in_r3 = *(int **)(iVar1 + 0x14);
          if (uVar2 < *(uint *)(iVar1 + 0xc)) {
            in_r3 = in_r3 + uVar2 * 10;
          }
          if (local_78 <= local_74) {
            in_r3[3] = (int)ALBW_AS_U32(local_78);
            in_r3[2] = (int)ALBW_AS_U32(local_78);
          }
          else {
            in_r3[3] = in_r3[5];
            in_r3[2] = in_r3[5];
          }
          in_r3[4] = (int)ALBW_AS_U32(local_74);
          in_r3[6] = 0;
          *(undefined1 *)((int)in_r3 + 0x26) = 1;
          *(undefined1 *)((int)in_r3 + 0x25) = 1;
          iVar3 = *(int *)(iVar1 + 0xc);
          uVar2 = uVar2 + 1;
        } while ((int)uVar2 < iVar3);
      }
      func_004C00F4(param_1,iVar3,uVar2,in_r3);
      local_80 = &local_7c;
      local_88[1] = 3;
      local_34 = 10;
      local_30 = 0;
      local_88[0] = 1;
      local_7c = -1;
      local_68 = uVar2 | 0xff;
      local_6c = local_74;
      return func_001692F8(*(int *)(param_1 + 0x7b4),local_88);
    }
    local_80 = &local_7c;
    local_88[1] = 3;
    local_34 = 0;
    local_30 = 0;
    local_88[0] = 1;
    local_6c = DAT_00284d84;
    local_68 = unaff_r9 | 0xff;
    fVar4 = DAT_00284d88;
    fVar5 = DAT_00284d84;
    func_0016898C(*(int *)(param_1 + 0x7b4),local_88);
    iVar1 = *(int *)(param_1 + 0x7b4);
    uVar2 = 0;
    if (0 < *(int *)(iVar1 + 0xc)) {
      do {
        iVar3 = *(int *)(iVar1 + 0x14);
        if (uVar2 < *(uint *)(iVar1 + 0xc)) {
          iVar3 = iVar3 + uVar2 * 0x28;
        }
        if (fVar4 <= fVar5) {
          *(float *)(iVar3 + 0xc) = fVar4;
          *(float *)(iVar3 + 8) = fVar4;
        }
        else {
          *(float *)(iVar3 + 0xc) = *(float *)(iVar3 + 0x14);
          *(float *)(iVar3 + 8) = *(float *)(iVar3 + 0x14);
        }
        uVar2 = uVar2 + 1;
        *(float *)(iVar3 + 0x10) = fVar5;
        *(undefined4 *)(iVar3 + 0x18) = 0;
        *(undefined1 *)(iVar3 + 0x26) = 1;
        *(undefined1 *)(iVar3 + 0x25) = 1;
      } while ((int)uVar2 < *(int *)(iVar1 + 0xc));
    }
  }
  return 0;
}

