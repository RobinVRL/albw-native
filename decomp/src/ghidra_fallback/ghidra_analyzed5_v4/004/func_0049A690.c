#include "ghidra_types.h"


// USA 0049A690 <- EU 0049A668 (Ghidra, non-matching)

int * func_0049A690(int *param_1,int param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(int *)(albw_frame + 0x4))
  #define local_18 ((char *)(albw_frame + 0x8))
  piVar1 = (int *)(**(code **)(*param_1 + 0x1c))
                            (param_1,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0x10));
  if (piVar1 != (int *)0x0) {
    local_20 = 0;
    local_1c = 0;
    local_18[0] = '\0';
    iVar2 = (**(code **)(*param_3 + 8))(param_3,param_2,piVar1,&local_20,&local_1c,local_18);
    if (iVar2 != 0) {
      uVar4 = *(undefined4 *)(param_2 + 8);
      if (piVar1[5] == 0) {
        piVar1[5] = iVar2;
        piVar1[6] = local_20;
        piVar1[7] = local_1c;
        if (local_18[0] == '\0') {
          uVar3 = piVar1[8] & 0xfffffffe;
        }
        else {
          uVar3 = piVar1[8] | 1;
        }
        piVar1[8] = uVar3;
        (**(code **)(*piVar1 + 0x18))(piVar1,iVar2,local_20,uVar4);
      }
      return piVar1;
    }
    (**(code **)(*piVar1 + 0xc))(piVar1);
  }
  return (int *)0x0;
}

