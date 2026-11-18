#include "ghidra_types.h"

extern int func_0040411C(undefined4 param_1);
extern int func_00404138(undefined4 param_1,undefined1 param_2);
extern int func_00420F0C(int *param_1,int *param_2);
extern int func_00421244(undefined4 *param_1);
extern undefined4 DAT_003fe170;

// USA 003FE108 <- EU 003FE0E8 (Ghidra, non-matching)
// GLOBAL DAT_003fe170 undefined4

int * func_003FE108(int *param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  local_10 = 0;
  piVar1 = (int *)(**(code **)(*param_1 + 0xc))(param_1,DAT_003fe170,param_2,&local_10);
  iVar4 = 0;
  if (piVar1 != (int *)0x0) {
    iVar4 = local_10;
  }
  if (((piVar1 != (int *)0x0 && iVar4 != 0) &&
      (puVar2 = (undefined4 *)func_00404138(0x48,4), puVar2 != (undefined4 *)0x0)) &&
     (piVar3 = (int *)func_00421244(puVar2), piVar3 != (int *)0x0)) {
    iVar4 = func_00420F0C(piVar3,piVar1);
    if (iVar4 != 0) {
      return piVar3;
    }
    (**(code **)(*piVar3 + 4))(piVar3);
    func_0040411C(piVar3);
  }
  return (int *)0x0;
}

