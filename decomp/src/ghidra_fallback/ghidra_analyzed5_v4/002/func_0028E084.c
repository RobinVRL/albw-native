#include "ghidra_types.h"

extern int func_002D3B74(int param_1);
extern int func_004E2880(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4, undefined2 param_5,float fparam_0);
extern int func_004EA104(int param_1,int *param_2,int param_3);
extern int func_0051D134(int *param_1,uint param_2);
extern int func_0054C998(int param_1,int param_2);
extern int *DAT_0028e204;
extern uint DAT_0028e208;
extern float DAT_0028e20c;
extern int *DAT_0028e220;
extern char s_SE_PL_Arrow_SET_0028e210[];
extern char s_SE_PL_Arrow_SHOT_0028e224[];

// USA 0028E084 <- EU 0028E0AC (Ghidra, non-matching)
// GLOBAL DAT_0028e204 int *
// GLOBAL DAT_0028e208 uint
// GLOBAL DAT_0028e20c float
// GLOBAL DAT_0028e220 int *
// GLOBAL s_SE_PL_Arrow_SET_0028e210 string
// GLOBAL s_SE_PL_Arrow_SHOT_0028e224 string

/* WARNING: Variable defined which should be unmapped: objStack_30 */

undefined4 func_0028E084(int param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uVar4;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define objStack_30 ((uint *)(albw_frame + 0x0))
  #define local_28 (*(uint *)(albw_frame + 0x8))
  #define local_24 (*(char * *)(albw_frame + 0xc))
  uVar2 = DAT_0028e208;
  piVar1 = DAT_0028e204;
  *(undefined1 *)(param_1 + 0x74) = 0;
  fparam_0 = DAT_0028e20c;
  if (*(short *)(param_2 + 2) == 0x35) {
    local_28 = func_0054C998(*(int *)(param_1 + 0x48),**(int **)(param_1 + 0x3c));
    func_0051D134((int *)&local_28,8);
    *(uint *)(param_1 + 0x58) = local_28;
    objStack_30[1] = (uint)s_SE_PL_Arrow_SET_0028e210;
    objStack_30[0] = uVar2;
    func_004EA104(*piVar1,(int *)objStack_30,0);
  }
  else if (*(short *)(param_2 + 2) == 0x36) {
    uVar4 = *(undefined4 *)(param_1 + 0x58);
    **(undefined4 **)(param_1 + 0x3c) = uVar4;
    objStack_30[0] = 0xffffffff;
    func_004E2880((undefined4 *)(*(int *)(param_1 + 0x70) + 0x24),uVar4,0,0,0xffff,fparam_0);
    piVar3 = DAT_0028e220;
    if (*(int *)(*(int *)(param_1 + 0x28) + 0x444) == 3) {
      objStack_30[0] = 0xffffffff;
      func_004E2880((undefined4 *)(*(int *)(param_1 + 0x70) + 0x24),
                    *DAT_0028e220 + **(int **)(param_1 + 0x3c),0,0,0xffff,fparam_0);
      objStack_30[0] = 0xffffffff;
      func_004E2880((undefined4 *)(*(int *)(param_1 + 0x70) + 0x24),
                    **(int **)(param_1 + 0x3c) - *piVar3,0,0,0xffff,fparam_0);
    }
    local_24 = s_SE_PL_Arrow_SHOT_0028e224;
    local_28 = uVar2;
    func_004EA104(*piVar1,(int *)&local_28,0);
    return func_002D3B74(*(int *)(*(int *)(param_1 + 0x28) + 0x5f8));
  }
  return 0;
}

