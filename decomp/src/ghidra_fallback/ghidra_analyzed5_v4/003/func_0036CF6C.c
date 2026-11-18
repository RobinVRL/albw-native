#include "ghidra_types.h"

extern int func_0010B3C0(int *param_1,int param_2,int param_3);
extern int func_0010B3EC(undefined4 *param_1,int param_2,int param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0010DB90(void);
extern void *func_0010E74C();
extern undefined4 DAT_0036d09c;
extern float DAT_0036d0a0;

// USA 0036CF6C <- EU 0036CF48 (Ghidra, non-matching)
// GLOBAL DAT_0036d09c undefined4
// GLOBAL DAT_0036d0a0 float

undefined4 * func_0036CF6C(undefined4 *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int extraout_r1;
  int iVar4;
  int in_r3;
  int iVar5;
  float in_s0;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  piVar1 = (int *)func_0010DB90();
  if ((0 < param_2) && (iVar2 = func_0010CEE0(param_2 * 0xc,piVar1,4), iVar2 != 0)) {
    iVar5 = param_2 + -1;
    iVar4 = extraout_r1;
    if (0 < iVar5) {
      iVar4 = 0;
      in_r3 = param_2 + -1;
    }
    param_1[4] = iVar2;
    if (0 < iVar5) {
      do {
        in_r3 = in_r3 + -1;
        *(int *)(iVar2 + iVar4 * 4) = iVar2 + (iVar4 + 2) * 4;
        iVar4 = iVar4 + 2;
      } while (in_r3 != 0);
    }
    *(undefined4 *)(iVar2 + iVar5 * 8) = 0;
    param_1[5] = iVar2;
    func_0010B3EC(param_1 + 1,param_2,iVar2 + param_2 * 8);
  }
  piVar1 = param_1 + 1;
  iVar2 = func_0010B3C0(piVar1,0,param_2);
  if (iVar2 != 0) {
    if (0 < *piVar1) {
      func_0010E74C((uint *)param_1[3] + param_2,(uint *)param_1[3],*piVar1 << 2,in_s0);
    }
    if (0 < param_2) {
      in_s0 = DAT_0036d0a0;
    }
    iVar2 = 0;
    if (0 < param_2) {
      do {
        puVar3 = (undefined4 *)param_1[4];
        if (puVar3 != (undefined4 *)0x0) {
          param_1[4] = *puVar3;
          *puVar3 = 0;
          puVar3[1] = ALBW_AS_U32(in_s0);
        }
        iVar4 = iVar2 + 1;
        *(undefined4 **)(param_1[3] + iVar2 * 4) = puVar3;
        iVar2 = iVar4;
      } while (iVar4 < param_2);
    }
    *piVar1 = *piVar1 + param_2;
  }
  return param_1;
}

