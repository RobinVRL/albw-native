#include "ghidra_types.h"

extern int func_002357B8(int param_1,int param_2,int param_3);
extern int func_00513148(int param_1);
extern int func_0052FCA4(int param_1,undefined4 *param_2,int *param_3);
extern int DAT_002357a4;
extern undefined4 *DAT_002357a8;
extern undefined4 DAT_002357ac;
extern undefined4 DAT_002357b0;
extern int *DAT_002357b4;

// USA 002356D4 <- EU 002356D4 (Ghidra, non-matching)
// GLOBAL DAT_002357a4 int
// GLOBAL DAT_002357a8 undefined4 *
// GLOBAL DAT_002357ac undefined4
// GLOBAL DAT_002357b0 undefined4
// GLOBAL DAT_002357b4 int *

undefined4 func_002356D4(int param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  bool bVar5;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(undefined4 *)(albw_frame + 0x0))
  #define local_1c (*(undefined4 *)(albw_frame + 0x4))
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define uStack_14 (*(undefined4 *)(albw_frame + 0xc))
  #define uStack_10 (*(undefined4 *)(albw_frame + 0x10))
  #define local_c (*(undefined4 *)(albw_frame + 0x14))
  if ((param_2 < *(uint *)(param_1 + 0x478)) &&
     (iVar3 = *(int *)(*(int *)(param_1 + 0x480) + param_2 * 4), iVar3 != 0)) {
    if (*(short *)(iVar3 + 0x2e) != 1) {
      if (param_2 < *(uint *)(param_1 + 0x630)) {
        iVar2 = *(int *)(param_1 + 0x634) + param_2 * 0x104;
      }
      else {
        iVar2 = *(int *)(param_1 + 0x634);
      }
      return func_002357B8(param_1,iVar3,(int)*(char *)(iVar2 + DAT_002357a4));
    }
    local_1c = *DAT_002357a8;
    local_20 = DAT_002357ac;
    local_18 = *(undefined4 *)(iVar3 + 4);
    uStack_14 = *(undefined4 *)(iVar3 + 8);
    uStack_10 = *(undefined4 *)(iVar3 + 0xc);
    local_c = DAT_002357b0;
    iVar3 = *DAT_002357b4;
    piVar4 = *(int **)(iVar3 + 0x3dbc8);
    piVar1 = func_0052FCA4(iVar3 + 0x3dbbc,&local_20,*(int **)(iVar3 + 0x3dbc0));
    bVar5 = piVar1 != piVar4;
    if (bVar5) {
      piVar1 = (int *)*piVar1;
    }
    if (bVar5 && piVar1 != (int *)0x0) {
      func_00513148((int)piVar1);
    }
  }
  return 0;
}

