#include "ghidra_types.h"

extern int func_005826A4(int param_1,int *param_2,int *param_3,int *param_4);
extern int *DAT_0019acb4;
extern int DAT_0019acb8;
extern undefined4 DAT_0019acbc;
extern int DAT_0019acc0;
extern undefined4 DAT_0019acc4;

// USA 0019AC24 <- EU 0019AC24 (Ghidra, non-matching)
// GLOBAL DAT_0019acb4 int *
// GLOBAL DAT_0019acb8 int
// GLOBAL DAT_0019acbc undefined4
// GLOBAL DAT_0019acc0 int
// GLOBAL DAT_0019acc4 undefined4

void func_0019AC24(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define iStack_38 (*(int *)(albw_frame + 0x8))
  #define uStack_34 (*(undefined4 *)(albw_frame + 0xc))
  #define local_28 ((int *)(albw_frame + 0x18))
  #define uStack_14 (*(undefined4 *)(albw_frame + 0x2c))
  if (param_2 == 0) {
    iVar2 = *(int *)(DAT_0019acb8 + 8);
    if (*DAT_0019acb4 != 0) {
      local_28[3] = 0xffffffff;
      local_28[0] = 0;
      local_28[1] = 0;
      local_28[2] = 0;
      local_28[4] = DAT_0019acc0;
      uStack_14 = DAT_0019acbc;
      iStack_38 = DAT_0019acc0;
      uStack_34 = DAT_0019acc4;
      iVar1 = func_005826A4(*DAT_0019acb4,local_28,&iStack_38,local_28 + 4);
      if (iVar1 != 0) {
        iVar2 = local_28[0];
      }
    }
    *(int *)(param_1 + 0xa7c) = iVar2;
  }
  else {
    *(int *)(param_1 + 0xa7c) = param_2;
  }
  *(undefined1 *)(param_1 + 0x671) = 1;
  *(undefined1 *)(param_1 + 0x672) = 0;
  return;
}

