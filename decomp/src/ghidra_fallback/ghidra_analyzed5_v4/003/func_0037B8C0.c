#include "ghidra_types.h"

extern int func_002313DC(int param_1);
extern int func_0034BA3C(int param_1,int *param_2,int *param_3);
extern int func_004B948C(int param_1,int param_2);
extern int func_005229AC(int *param_1,int *param_2);
extern int func_006896BC(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4,...);
extern char s_share__s__0037b984[];

// USA 0037B8C0 <- EU 0037B89C (Ghidra, non-matching)
// GLOBAL s_share[%s]_0037b984 string

undefined4 func_0037B8C0(int *param_1,int *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define auStack_40 ((undefined4 *)(albw_frame + 0x0))
  piVar1 = (int *)(**(code **)(param_1[0xf] + 8))(param_1 + 0xf);
  iVar2 = param_1[0x1b];
  func_0034BA3C(iVar2,param_2,piVar1);
  func_004B948C(param_3,param_1[0x1b]);
  if (param_2 != (int *)0x0) {
    (**(code **)(param_2[9] + 8))(param_2 + 9);
    func_006896BC(auStack_40,s_share__s__0037b984,param_2[10],iVar2);
  }
  param_1[7] = (int)param_2;
  param_1[6] = param_1[6] | 0x18;
  piVar1 = (int *)(**(code **)(*param_1 + 0x50))(param_1);
  iVar2 = func_005229AC(param_2,piVar1);
  param_1[0xe] = iVar2;
  (**(code **)(*param_1 + 0x4c))(param_1,0);
  param_1[10] = (int)param_2;
  *(undefined2 *)((int)param_1 + 0x22) = 0;
  *(undefined2 *)(param_1 + 8) = 0;
  param_1[0xd] = (int)param_2;
  *(undefined2 *)((int)param_1 + 0x2e) = 1;
  *(undefined2 *)(param_1 + 0xb) = 0;
  return func_002313DC((int)(param_1 + 8));
}

