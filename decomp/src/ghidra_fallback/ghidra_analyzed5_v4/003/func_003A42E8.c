#include "ghidra_types.h"

extern int func_001151EC(undefined4 *param_1,undefined4 *param_2);
extern int func_001157FC(float *param_1,float *param_2,float *param_3);
extern int func_00491E80(float *param_1,uint param_2,uint param_3,uint param_4);
extern float DAT_003a4434;

// USA 003A42E8 <- EU 003A42C4 (Ghidra, non-matching)
// GLOBAL DAT_003a4434 float

undefined4 func_003A42E8(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint in_fpscr;
  float fVar4;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define afStack_78 ((float *)(albw_frame + 0x8))
  #define afStack_48 ((float *)(albw_frame + 0x38))
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 != param_3) {
    param_2 = *(int *)(param_1 + 0x10);
  }
  if (iVar1 != param_3 && param_2 != param_3) {
    if (*(int *)(param_1 + 0x14) == param_3) {
      iVar1 = *(int *)(param_1 + 8);
      func_001151EC(afStack_78,
                    (undefined4 *)
                    (*(int *)(*(int *)(iVar1 + 0x24) + 0x14) + *(int *)(param_1 + 0x14) * 0x30));
      func_00491E80(afStack_48,0,*(uint *)(param_1 + 0x38),0);
      func_001157FC(afStack_78,afStack_78,afStack_48);
      func_001151EC((undefined4 *)(*(int *)(*(int *)(iVar1 + 0x24) + 0x14) + param_3 * 0x30),
                    afStack_78);
      return 1;
    }
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x18);
    if (uVar2 != 0) {
      iVar3 = *(int *)(param_1 + 8);
      if (iVar1 == param_3) {
        func_001151EC(afStack_78,
                      (undefined4 *)(*(int *)(*(int *)(iVar3 + 0x24) + 0x14) + iVar1 * 0x30));
        fVar4 = (float)VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
        uVar2 = (uint)(*(float *)(param_1 + 0x40) * fVar4);
      }
      else if (*(int *)(param_1 + 0x10) == param_3) {
        func_001151EC(afStack_78,
                      (undefined4 *)
                      (*(int *)(*(int *)(iVar3 + 0x24) + 0x14) + *(int *)(param_1 + 0x10) * 0x30));
        fVar4 = (float)VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
        uVar2 = (uint)((DAT_003a4434 - *(float *)(param_1 + 0x40)) * fVar4);
      }
      func_00491E80(afStack_48,0,uVar2,0);
      func_001157FC(afStack_78,afStack_78,afStack_48);
      func_001151EC((undefined4 *)(*(int *)(*(int *)(iVar3 + 0x24) + 0x14) + param_3 * 0x30),
                    afStack_78);
      return 1;
    }
  }
  return 0;
}

