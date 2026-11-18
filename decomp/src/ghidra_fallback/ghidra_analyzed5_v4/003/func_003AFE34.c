#include "ghidra_types.h"

extern int func_001119F4(undefined4 *param_1,undefined4 *param_2);
extern int func_001151EC(undefined4 *param_1,undefined4 *param_2);
extern int func_001157FC(float *param_1,float *param_2,float *param_3);
extern int func_00491E80(float *param_1,uint param_2,uint param_3,uint param_4);

// USA 003AFE34 <- EU 003AFE10 (Ghidra, non-matching)

undefined4 func_003AFE34(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define afStack_68 ((float *)(albw_frame + 0x8))
  #define local_5c (*(undefined4 *)(albw_frame + 0x14))
  #define local_4c (*(undefined4 *)(albw_frame + 0x24))
  #define local_3c (*(undefined4 *)(albw_frame + 0x34))
  #define afStack_38 ((float *)(albw_frame + 0x38))
  if (*(int *)(param_1 + 8) == param_3) {
    func_001119F4(afStack_68,
                  (undefined4 *)
                  (*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 4) + 0x40) + 0x24) + 0x14) +
                  *(int *)(param_1 + 8) * 0x30));
    func_00491E80(afStack_38,*(uint *)(*(int *)(param_1 + 4) + 0x50),0,0);
    func_001157FC(afStack_68,afStack_68,afStack_38);
    func_001151EC((undefined4 *)
                  (*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 4) + 0x40) + 0x24) + 0x14) +
                  *(int *)(param_1 + 8) * 0x30),afStack_68);
    iVar1 = *(int *)(param_1 + 4);
    *(undefined4 *)(iVar1 + 0x58) = local_5c;
    *(undefined4 *)(iVar1 + 0x5c) = local_4c;
    *(undefined4 *)(iVar1 + 0x60) = local_3c;
  }
  return 0;
}

