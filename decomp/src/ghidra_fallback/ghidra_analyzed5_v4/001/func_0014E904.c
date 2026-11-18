#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0016A2FC(undefined4 *param_1,int param_2,undefined4 param_3,int param_4);
extern int *DAT_0014e998;
extern undefined4 DAT_0014e99c;
extern char s_animator_0014e98c[];

// USA 0014E904 <- EU 0014E904 (Ghidra, non-matching)
// GLOBAL DAT_0014e998 int *
// GLOBAL DAT_0014e99c undefined4
// GLOBAL s_animator_0014e98c string

undefined4 * func_0014E904(int param_1,int param_2,int param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(undefined4 *)(albw_frame + 0x0))
  #define local_1c (*(char * *)(albw_frame + 0x4))
  puVar2 = (undefined4 *)func_0010BAB4(0xa8);
  piVar1 = DAT_0014e998;
  puVar3 = (undefined4 *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    if (*(int *)(param_1 + 0x2d0) == 0) {
      local_1c = s_animator_0014e98c;
    }
    else {
      (**(code **)(*DAT_0014e998 + 8))(DAT_0014e998);
      local_1c = (char *)piVar1[1];
    }
    local_20 = DAT_0014e99c;
    puVar3 = func_0016A2FC(puVar2,param_2,&local_20,1);
  }
  if (param_3 != 0) {
    *(undefined4 **)(param_1 + 0x350) = puVar3;
    *(short *)(param_1 + 0x358) = (short)param_2;
  }
  return puVar3;
}

