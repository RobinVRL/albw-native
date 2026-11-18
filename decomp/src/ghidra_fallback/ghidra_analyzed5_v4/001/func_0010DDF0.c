#include "ghidra_types.h"

extern int func_0010AC24(undefined4 param_1,undefined4 param_2);
extern int func_0010EB00(int param_1,uint param_2,undefined1 param_3,undefined1 param_4);
extern int func_0010EC5C(int *param_1,int param_2,int param_3,int param_4,uint param_5,int param_6, undefined4 param_7);

// USA 0010DDF0 <- EU 0010DDF0 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 uint
// PARAM param_6 Stack[0x4]:4 int

undefined4 func_0010DDF0(int param_1,int param_2,int param_3,int param_4,uint param_5,int param_6)

{
  uint uVar1;
  int iVar2;
  int *unaff_r5;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_24 (*(int * *)(albw_frame + 0xc))
  #define local_20 (*(undefined4 *)(albw_frame + 0x10))
  #define local_1c (*(undefined4 *)(albw_frame + 0x14))
  #define local_18 (*(undefined4 *)(albw_frame + 0x18))
  local_24 = (int *)0x0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  uVar1 = func_0010EC5C((int *)&local_24,param_2,param_3,param_4,param_5,param_6,&local_20);
  if (-1 < (int)uVar1) {
    uVar1 = 0;
    unaff_r5 = local_24;
  }
  if ((int)uVar1 < 0) {
    func_0010AC24(uVar1,0x10de40);
  }
  iVar2 = func_0010EB00(param_1,(uint)unaff_r5,0,0);
  if ((iVar2 < 0) && ((**(code **)(*unaff_r5 + 0x30))(unaff_r5), iVar2 < 0)) {
    func_0010AC24(iVar2,0x10de80);
  }
  return 0;
}

