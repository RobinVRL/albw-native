#include "ghidra_types.h"

extern int func_001151EC(undefined4 *param_1,undefined4 *param_2);
extern int func_001157FC(float *param_1,float *param_2,float *param_3);
extern int func_0011593C(undefined4 *param_1);
extern int func_00491E80(float *param_1,uint param_2,uint param_3,uint param_4);
extern float DAT_0038f2b8;
extern float DAT_0038f2bc;

// USA 0038F1D4 <- EU 0038F1B0 (Ghidra, non-matching)
// GLOBAL DAT_0038f2b8 float
// GLOBAL DAT_0038f2bc float

undefined4 func_0038F1D4(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint in_fpscr;
  float fVar3;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define afStack_78 ((float *)(albw_frame + 0x8))
  #define afStack_48 ((float *)(albw_frame + 0x38))
  if ((*(int *)(param_1 + 0x10) != 0) &&
     (iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x40c), iVar2 != 0)) {
    func_0011593C(afStack_78);
    uVar1 = *(uint *)(param_1 + 0x10);
    if (*(int *)(param_1 + 8) == param_3) {
      func_001151EC(afStack_78,
                    (undefined4 *)
                    (*(int *)(*(int *)(iVar2 + 0x24) + 0x14) + *(int *)(param_1 + 8) * 0x30));
      fVar3 = (float)VectorSignedToFloat(uVar1,(byte)(in_fpscr >> 0x15) & 3);
      uVar1 = (uint)(fVar3 * DAT_0038f2b8);
    }
    else if (*(int *)(param_1 + 0xc) == param_3) {
      func_001151EC(afStack_78,
                    (undefined4 *)
                    (*(int *)(*(int *)(iVar2 + 0x24) + 0x14) + *(int *)(param_1 + 0xc) * 0x30));
      fVar3 = (float)VectorSignedToFloat(uVar1,(byte)(in_fpscr >> 0x15) & 3);
      uVar1 = (uint)(fVar3 * DAT_0038f2bc);
    }
    func_00491E80(afStack_48,uVar1,0,0);
    func_001157FC(afStack_78,afStack_78,afStack_48);
    func_001151EC((undefined4 *)(*(int *)(*(int *)(iVar2 + 0x24) + 0x14) + param_3 * 0x30),
                  afStack_78);
    return 1;
  }
  return 0;
}

