#include "ghidra_types.h"

extern int func_001151EC(undefined4 *param_1,undefined4 *param_2);
extern int func_001157FC(float *param_1,float *param_2,float *param_3);
extern int func_0011593C(undefined4 *param_1);
extern int func_00491E80(float *param_1,uint param_2,uint param_3,uint param_4);
extern float DAT_00359894;
extern float DAT_00359898;

// USA 00359794 <- EU 00359770 (Ghidra, non-matching)
// GLOBAL DAT_00359894 float
// GLOBAL DAT_00359898 float

undefined4 func_00359794(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint in_fpscr;
  float fVar5;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define afStack_78 ((float *)(albw_frame + 0x8))
  #define afStack_48 ((float *)(albw_frame + 0x38))
  iVar1 = *(int *)(param_1 + 4);
  iVar3 = *(int *)(iVar1 + 0x40c);
  if (iVar3 != 0) {
    iVar1 = *(int *)(param_1 + 0x14);
  }
  if (iVar3 != 0 && iVar1 != 0) {
    func_0011593C(afStack_78);
    uVar2 = *(uint *)(param_1 + 0x14);
    uVar4 = *(uint *)(param_1 + 0x18);
    if (*(int *)(param_1 + 8) == param_3) {
      func_001151EC(afStack_78,
                    (undefined4 *)
                    (*(int *)(*(int *)(iVar3 + 0x24) + 0x14) + *(int *)(param_1 + 8) * 0x30));
      fVar5 = (float)VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
      uVar2 = (uint)(fVar5 * DAT_00359894);
    }
    else if (*(int *)(param_1 + 0xc) == param_3) {
      func_001151EC(afStack_78,
                    (undefined4 *)
                    (*(int *)(*(int *)(iVar3 + 0x24) + 0x14) + *(int *)(param_1 + 0xc) * 0x30));
      fVar5 = (float)VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
      uVar2 = (uint)(fVar5 * DAT_00359898);
    }
    else if (*(int *)(param_1 + 0x10) == param_3) {
      func_001151EC(afStack_78,
                    (undefined4 *)
                    (*(int *)(*(int *)(iVar3 + 0x24) + 0x14) + *(int *)(param_1 + 0x10) * 0x30));
    }
    func_00491E80(afStack_48,uVar4,uVar2,0);
    func_001157FC(afStack_78,afStack_78,afStack_48);
    func_001151EC((undefined4 *)(*(int *)(*(int *)(iVar3 + 0x24) + 0x14) + param_3 * 0x30),
                  afStack_78);
  }
  return 0;
}

