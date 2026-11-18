#include "ghidra_types.h"

extern int func_001151EC(undefined4 *param_1,undefined4 *param_2);
extern int func_001157FC(float *param_1,float *param_2,float *param_3);
extern int func_0011593C(undefined4 *param_1);
extern int func_00491E80(float *param_1,uint param_2,uint param_3,uint param_4);
extern float DAT_003934dc;
extern float DAT_003934e0;

// USA 00393410 <- EU 003933EC (Ghidra, non-matching)
// GLOBAL DAT_003934dc float
// GLOBAL DAT_003934e0 float

undefined4 func_00393410(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint in_fpscr;
  float fVar4;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define afStack_78 ((float *)(albw_frame + 0x8))
  #define afStack_48 ((float *)(albw_frame + 0x38))
  uVar1 = 0;
  if (*(int *)(param_1 + 0x14) != 0) {
    iVar3 = *(int *)(param_1 + 8);
    func_0011593C(afStack_78);
    uVar2 = *(uint *)(param_1 + 0x14);
    if (*(int *)(param_1 + 0xc) == param_3) {
      func_001151EC(afStack_78,
                    (undefined4 *)
                    (*(int *)(*(int *)(iVar3 + 0x24) + 0x14) + *(int *)(param_1 + 0xc) * 0x30));
      fVar4 = (float)VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
      uVar2 = (uint)(fVar4 * DAT_003934dc);
    }
    else if (*(int *)(param_1 + 0x10) == param_3) {
      func_001151EC(afStack_78,
                    (undefined4 *)
                    (*(int *)(*(int *)(iVar3 + 0x24) + 0x14) + *(int *)(param_1 + 0x10) * 0x30));
      fVar4 = (float)VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
      uVar2 = (uint)(fVar4 * DAT_003934e0);
    }
    func_00491E80(afStack_48,uVar2,0,0);
    func_001157FC(afStack_78,afStack_78,afStack_48);
    func_001151EC((undefined4 *)(*(int *)(*(int *)(iVar3 + 0x24) + 0x14) + param_3 * 0x30),
                  afStack_78);
    uVar1 = 1;
  }
  return uVar1;
}

