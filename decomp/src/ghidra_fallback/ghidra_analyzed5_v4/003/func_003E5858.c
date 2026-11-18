#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_00109038(undefined4 param_1,uint param_2,uint param_3,uint param_4,undefined4 param_5, undefined4 param_6,uint param_7,uint param_8);
extern int func_003E4838(int *param_1);
extern int func_003E4B34(undefined4 param_1,undefined4 param_2,uint param_3,uint param_4);
extern int func_003E5130(uint param_1,int *param_2);
extern int func_003E5228(int *param_1);
extern int func_003E535C(undefined4 param_1,int param_2);
extern undefined *DAT_003e58f8;
extern int DAT_003e58fc;
extern int *DAT_003e5900;
extern undefined4 *DAT_003e5904;

// USA 003E5858 <- EU 003E5838 (Ghidra, non-matching)
// GLOBAL DAT_003e58f8 undefined *
// GLOBAL DAT_003e58fc int
// GLOBAL DAT_003e5900 int *
// GLOBAL DAT_003e5904 undefined4 *

undefined4 func_003E5858(uint param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 extraout_r1;
  undefined4 in_stack_ffffffc4;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(int *)(albw_frame + 0x0))
  #define iStack_2c (*(int *)(albw_frame + 0x4))
  #define local_28 (*(int *)(albw_frame + 0x8))
  #define local_18 (*(int *)(albw_frame + 0x18))
  func_00100118((int)&local_30,DAT_003e58f8,0x10,2);
  func_003E4838(&local_30);
  iVar1 = DAT_003e58fc;
  func_003E4B34(param_1,extraout_r1,*(uint *)(DAT_003e58fc + 0x90),*(uint *)(DAT_003e58fc + 0x94));
  piVar2 = DAT_003e5900;
  DAT_003e5900[4] = local_28;
  piVar2[7] = local_18;
  *(bool *)(piVar2 + 1) = local_30 != iStack_2c;
  func_003E5228(DAT_003e5900);
  func_00109038(param_1,0x10,(uint)DAT_003e5900,0x20,*DAT_003e5904,in_stack_ffffffc4,
                *(uint *)(iVar1 + 0x90),*(uint *)(iVar1 + 0x94));
  func_003E5130(param_1,(int *)0x0);
  func_003E535C(DAT_003e5900,0x20);
  return 0;
}

