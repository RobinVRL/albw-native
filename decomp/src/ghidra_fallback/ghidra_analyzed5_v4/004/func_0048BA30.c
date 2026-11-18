#include "ghidra_types.h"

extern int func_0048B814(int param_1,int *param_2);
extern int func_0049B570(int *param_1,int *param_2);
extern int DAT_0048ba8c;

// USA 0048BA30 <- EU 0048BA08 (Ghidra, non-matching)
// GLOBAL DAT_0048ba8c int

undefined4 func_0048BA30(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(int *)(albw_frame + 0x8))
  #define local_34 (*(undefined1 * *)(albw_frame + 0xc))
  #define uStack_30 (*(undefined4 *)(albw_frame + 0x10))
  #define local_2c ((undefined1 *)(albw_frame + 0x14))
  #define uStack_d (*(undefined1 *)(albw_frame + 0x33))
  piVar1 = (int *)param_2[8];
  if (piVar1 == (int *)0x0) {
    local_34 = local_2c;
    uStack_30 = 0x20;
    uStack_d = 0;
    local_2c[0] = 0;
    local_38 = DAT_0048ba8c;
    iVar2 = func_0049B570(&local_38,param_2);
    if (iVar2 == 0) {
      piVar1 = *(int **)(param_1 + 0x34);
    }
    else {
      piVar1 = (int *)func_0048B814(param_1,&local_38);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0048ba88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  return (**(code **)(*piVar1 + 0x10))(piVar1,param_2);
}

