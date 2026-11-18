#include "ghidra_types.h"

extern int func_002357B8(int param_1,int param_2,int param_3);
extern int func_004CEA18(int param_1,int param_2,uint param_3);
extern int func_00513148(int param_1);
extern int func_0052FCA4(int param_1,undefined4 *param_2,int *param_3);
extern int DAT_002357a4;
extern undefined4 *DAT_002357a8;
extern undefined4 DAT_002357ac;
extern undefined4 DAT_002357b0;
extern int *DAT_002357b4;

// USA 00235678 <- EU 00235678 (Ghidra, non-matching)
// GLOBAL DAT_002357a4 int
// GLOBAL DAT_002357a8 undefined4 *
// GLOBAL DAT_002357ac undefined4
// GLOBAL DAT_002357b0 undefined4
// GLOBAL DAT_002357b4 int *

undefined4 func_00235678(int param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  bool bVar5;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define uStack_20 (*(undefined4 *)(albw_frame + 0x0))
  #define uStack_1c (*(undefined4 *)(albw_frame + 0x4))
  #define uStack_18 (*(undefined4 *)(albw_frame + 0x8))
  #define uStack_14 (*(undefined4 *)(albw_frame + 0xc))
  iVar1 = *(int *)(param_1 + 0x634);
  if (param_2 < *(uint *)(param_1 + 0x630)) {
    iVar1 = iVar1 + param_2 * 0x104;
  }
  iVar1 = *(int *)(iVar1 + 8);
  if (iVar1 != 0) {
    func_004CEA18(iVar1,1,0);
    func_004CEA18(iVar1,0,1);
  }
  if ((param_2 < *(uint *)(param_1 + 0x478)) &&
     (iVar1 = *(int *)(*(int *)(param_1 + 0x480) + param_2 * 4), iVar1 != 0)) {
    if (*(short *)(iVar1 + 0x2e) != 1) {
      if (param_2 < *(uint *)(param_1 + 0x630)) {
        iVar3 = *(int *)(param_1 + 0x634) + param_2 * 0x104;
      }
      else {
        iVar3 = *(int *)(param_1 + 0x634);
      }
      return func_002357B8(param_1,iVar1,(int)*(char *)(iVar3 + DAT_002357a4));
    }
    uStack_1c = *DAT_002357a8;
    uStack_20 = DAT_002357ac;
    uStack_18 = *(undefined4 *)(iVar1 + 4);
    uStack_14 = *(undefined4 *)(iVar1 + 8);
    iVar1 = *DAT_002357b4;
    piVar4 = *(int **)(iVar1 + 0x3dbc8);
    piVar2 = func_0052FCA4(iVar1 + 0x3dbbc,&uStack_20,*(int **)(iVar1 + 0x3dbc0));
    bVar5 = piVar2 != piVar4;
    if (bVar5) {
      piVar2 = (int *)*piVar2;
    }
    if (bVar5 && piVar2 != (int *)0x0) {
      func_00513148((int)piVar2);
    }
  }
  return 0;
}

