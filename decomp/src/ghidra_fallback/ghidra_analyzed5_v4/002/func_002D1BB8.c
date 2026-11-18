#include "ghidra_types.h"

extern int func_001119F4(undefined4 *param_1,undefined4 *param_2);
extern int func_001151EC(undefined4 *param_1,undefined4 *param_2);
extern int func_001157FC(float *param_1,float *param_2,float *param_3);
extern int func_00491E80(float *param_1,uint param_2,uint param_3,uint param_4);

// USA 002D1BB8 <- EU 002D1B94 (Ghidra, non-matching)

undefined4 func_002D1BB8(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define afStack_70 ((float *)(albw_frame + 0x0))
  #define local_64 (*(undefined4 *)(albw_frame + 0xc))
  #define local_54 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_44 (*(undefined4 *)(albw_frame + 0x2c))
  #define afStack_40 ((float *)(albw_frame + 0x30))
  if ((*(int *)(param_1 + 8) == param_3) &&
     (iVar1 = *(int *)(*(int *)(param_1 + 4) +
                      (uint)*(byte *)(*(int *)(param_1 + 4) + 0x24) * 0x28 + 0x28), iVar1 != 0)) {
    func_001119F4(afStack_70,
                  (undefined4 *)
                  (*(int *)(*(int *)(iVar1 + 0x24) + 0x14) + *(int *)(param_1 + 8) * 0x30));
    func_00491E80(afStack_40,0,0,*(uint *)(*(int *)(param_1 + 4) + 0xd8));
    func_001157FC(afStack_70,afStack_70,afStack_40);
    func_001151EC((undefined4 *)
                  (*(int *)(*(int *)(iVar1 + 0x24) + 0x14) + *(int *)(param_1 + 8) * 0x30),
                  afStack_70);
    iVar1 = *(int *)(param_1 + 4);
    *(undefined4 *)(iVar1 + 0xe0) = local_64;
    *(undefined4 *)(iVar1 + 0xe4) = local_54;
    *(undefined4 *)(iVar1 + 0xe8) = local_44;
  }
  return 0;
}

