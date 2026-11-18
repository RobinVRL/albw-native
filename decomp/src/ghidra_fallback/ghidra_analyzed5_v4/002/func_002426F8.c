#include "ghidra_types.h"

extern int func_00150CD0(int param_1,int *param_2,undefined4 param_3,int param_4,int param_5);
extern int func_00581D60(int param_1);
extern int func_00588BE4(int param_1);
extern int func_0065F2D8(undefined4 *param_1,undefined1 param_2);
extern int *DAT_002427c8;
extern int *DAT_002427cc;
extern int *DAT_002427d0;
extern int *DAT_002427d4;
extern int DAT_002427e8;
extern char s_SE_Water_FALL_002427d8[];

// USA 002426F8 <- EU 002426F8 (Ghidra, non-matching)
// GLOBAL DAT_002427c8 int *
// GLOBAL DAT_002427cc int *
// GLOBAL DAT_002427d0 int *
// GLOBAL DAT_002427d4 int *
// GLOBAL DAT_002427e8 int
// GLOBAL s_SE_Water_FALL_002427d8 string

void func_002426F8(int param_1)

{
  int iVar1;
  uint uVar2;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  if (*(uint *)(param_1 + 0x460) < *(uint *)(param_1 + 0x464)) {
    uVar2 = *(uint *)(param_1 + 0x460) + 1;
    *(uint *)(param_1 + 0x460) = uVar2;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x460);
  }
  if (*(uint *)(param_1 + 0x464) <= uVar2) {
    func_0065F2D8((undefined4 *)(param_1 + 0x43c),2);
  }
  iVar1 = func_00588BE4(param_1);
  if ((((iVar1 == *DAT_002427c8) || (iVar1 = func_00588BE4(param_1), iVar1 == *DAT_002427cc)) ||
      (iVar1 = func_00588BE4(param_1), iVar1 == *DAT_002427d0)) &&
     (iVar1 = func_00581D60(*DAT_002427d4), iVar1 == *(short *)(param_1 + 0x54))) {
    local_c = s_SE_Water_FALL_002427d8;
    local_10 = DAT_002427e8;
    func_00150CD0(param_1,&local_10,param_1 + 0x3d0,0,0);
  }
  return;
}

