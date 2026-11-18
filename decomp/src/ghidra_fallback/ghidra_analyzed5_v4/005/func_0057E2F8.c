#include "ghidra_types.h"

extern int func_0049B1BC(int *param_1,int *param_2);
extern int func_0049B2D0(int *param_1,int *param_2);
extern int func_0057E254(int param_1,int *param_2);
extern int DAT_0057e368;

// USA 0057E2F8 <- EU 0057E2D0 (Ghidra, non-matching)
// GLOBAL DAT_0057e368 int

int func_0057E2F8(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_40 (*(int *)(albw_frame + 0x0))
  #define local_3c (*(undefined1 * *)(albw_frame + 0x4))
  #define uStack_38 (*(undefined4 *)(albw_frame + 0x8))
  #define local_34 ((undefined1 *)(albw_frame + 0xc))
  #define uStack_15 (*(undefined1 *)(albw_frame + 0x2b))
  local_3c = local_34;
  uStack_38 = 0x20;
  uStack_15 = 0;
  local_34[0] = 0;
  local_40 = DAT_0057e368;
  iVar1 = func_0049B1BC(&local_40,param_2);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x1c);
    if (iVar1 == 0) {
      return 0;
    }
  }
  else {
    iVar1 = func_0057E254(param_1,&local_40);
  }
  if (param_3 != (int *)0x0) {
    func_0049B2D0(param_3,param_2);
  }
  return iVar1;
}

