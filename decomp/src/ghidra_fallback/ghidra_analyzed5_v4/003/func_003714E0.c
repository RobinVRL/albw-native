#include "ghidra_types.h"

extern int func_001119F4(undefined4 *param_1,undefined4 *param_2);
extern int func_001151EC(undefined4 *param_1,undefined4 *param_2);
extern int func_001157FC(float *param_1,float *param_2,float *param_3);
extern int func_00491E80(float *param_1,uint param_2,uint param_3,uint param_4);

// USA 003714E0 <- EU 003714BC (Ghidra, non-matching)

undefined4 func_003714E0(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define afStack_70 ((float *)(albw_frame + 0x0))
  #define afStack_40 ((float *)(albw_frame + 0x30))
  func_00491E80(afStack_40,0,*(uint *)(param_1 + 0xc),0);
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x40c);
  func_001119F4(afStack_70,(undefined4 *)(*(int *)(*(int *)(iVar1 + 0x24) + 0x14) + param_3 * 0x30))
  ;
  func_001157FC(afStack_70,afStack_70,afStack_40);
  func_001151EC((undefined4 *)(*(int *)(*(int *)(iVar1 + 0x24) + 0x14) + param_3 * 0x30),afStack_70)
  ;
  return 0;
}

