#include "ghidra_types.h"

extern int func_00110DF0(int *param_1,int param_2,int *param_3,int param_4,uint param_5,int param_6);
extern int func_004BD280();
extern int func_00581010(int param_1,int *param_2,uint *param_3);
extern char s_Angry_004da650[];

// USA 004DA5AC <- EU 004DA584 (Ghidra, non-matching)
// GLOBAL s_Angry_004da650 string

undefined4 func_004DA5AC(int param_1,uint param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(int *)(albw_frame + 0x8))
  #define uStack_24 (*(undefined4 *)(albw_frame + 0xc))
  #define aiStack_20 ((int *)(albw_frame + 0x10))
  if (*(char *)(param_1 + 0x9b5) != '\0') {
    if (param_2 == 0) {
      param_2 = 4;
      goto LAB_004da638;
    }
    if (param_2 == 1) {
      param_2 = 5;
      goto LAB_004da638;
    }
  }
  if (param_2 == 6) {
    *(undefined1 *)(param_1 + 0x9b6) = 1;
  }
  else if ((param_2 == 7) && (*(char *)(param_1 + 0x9b7) != '\0')) {
    if (*(int *)(param_1 + 0x344) != 0) {
      func_00581010(*(int *)(param_1 + 0x344),aiStack_20,(uint *)s_Angry_004da650);
    }
    iVar1 = *(int *)(param_1 + 0x344);
    if (iVar1 == 0) {
      local_28 = 0;
      uStack_24 = param_4;
    }
    else {
      func_00110DF0(&local_28,iVar1,aiStack_20,*(int *)(iVar1 + 0x24),*(uint *)(iVar1 + 0x28),
                    *(int *)(iVar1 + 0x2c));
    }
    *(int *)(param_1 + 0x9c0) = local_28;
    *(undefined4 *)(param_1 + 0x9c4) = uStack_24;
  }
LAB_004da638:
  return func_004BD280(param_1,param_2,param_3);
}

