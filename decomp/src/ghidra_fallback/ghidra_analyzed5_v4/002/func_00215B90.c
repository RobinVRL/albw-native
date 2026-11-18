#include "ghidra_types.h"

extern int func_0016898C(int param_1,uint *param_2);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern undefined8 func_0058AB74(int param_1);
extern undefined4 DAT_00215ce8;
extern undefined4 DAT_00215cec;
extern undefined4 DAT_00215cf0;

// USA 00215B90 <- EU 00215B90 (Ghidra, non-matching)
// GLOBAL DAT_00215ce8 undefined4
// GLOBAL DAT_00215cec undefined4
// GLOBAL DAT_00215cf0 undefined4

void func_00215B90(int param_1,float fparam_0)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint unaff_r8;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  _Alignas(8) unsigned char albw_frame[0xa0];
  #define local_98 ((uint *)(albw_frame + 0x8))
  #define local_90 (*(undefined4 * *)(albw_frame + 0x10))
  #define local_8c (*(undefined4 *)(albw_frame + 0x14))
  #define local_88 (*(undefined4 *)(albw_frame + 0x18))
  #define uStack_84 (*(undefined4 *)(albw_frame + 0x1c))
  #define uStack_80 (*(undefined4 *)(albw_frame + 0x20))
  #define uStack_7c (*(undefined4 *)(albw_frame + 0x24))
  #define local_78 (*(uint *)(albw_frame + 0x28))
  #define local_44 (*(undefined4 *)(albw_frame + 0x5c))
  #define local_40 (*(undefined1 *)(albw_frame + 0x60))
  #define local_38 (*(int *)(albw_frame + 0x68))
  iVar2 = 0;
  iVar3 = 0;
  local_38 = *(int *)(param_1 + 0x968);
  uVar9 = func_0058AB74(param_1);
  if ((int)uVar9 != 1) {
    uVar6 = DAT_00215cec;
    uVar7 = DAT_00215ce8;
    uVar8 = DAT_00215cf0;
    if (local_38 != 0) {
      do {
        iVar1 = *(int *)(param_1 + 0x964) + iVar2;
        if (*(int *)(param_1 + 0x960) <= iVar1) {
          iVar1 = iVar1 - *(int *)(param_1 + 0x960);
        }
        iVar1 = *(int *)(param_1 + 0x95c) + iVar1 * 0x28;
        local_90 = &local_8c;
        local_98[1] = 3;
        local_44 = 10;
        local_40 = 0;
        local_98[0] = 1;
        local_8c = 1;
        unaff_r8 = unaff_r8 | 0xff;
        local_88 = uVar7;
        uStack_84 = uVar6;
        uStack_80 = uVar8;
        uStack_7c = uVar6;
        local_78 = unaff_r8;
        func_0016898C(*(int *)(iVar1 + 0x1c),local_98);
        iVar2 = iVar2 + 1;
        fVar4 = (float)VectorSignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
        iVar1 = *(int *)(*(int *)(iVar1 + 0x1c) + 0x14);
        fVar5 = (float)VectorSignedToFloat(*(undefined4 *)(param_1 + 0xa8c),
                                           (byte)(in_fpscr >> 0x15) & 3);
        fVar4 = (fVar5 + fparam_0) - fVar4;
        in_fpscr = in_fpscr & 0xfffffff | (uint)(*(float *)(iVar1 + 8) == fVar4) << 0x1e;
        if (!SUB41(in_fpscr >> 0x1e,0)) {
          *(float *)(iVar1 + 8) = fVar4;
          *(undefined1 *)(iVar1 + 0x26) = 1;
        }
        iVar3 = iVar3 + 1;
      } while (iVar2 != local_38);
    }
    func_004FABDC(param_1,1,0xffffffff,0);
    if ((*(int *)(param_1 + 0x410) != 0) &&
       (iVar3 = *(int *)(*(int *)(param_1 + 0x410) + 0x14), *(float *)(iVar3 + 8) != fparam_0)) {
      *(float *)(iVar3 + 8) = fparam_0;
      *(undefined1 *)(iVar3 + 0x26) = 1;
    }
    return;
  }
  return;
}

