#include "ghidra_types.h"

extern int func_002313DC(int param_1);
extern int func_0034BA3C(int param_1,int *param_2,int *param_3);
extern int func_004B948C(int param_1,int param_2);
extern int func_005229AC(int *param_1,int *param_2);
extern int func_006896BC(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4,...);
extern int *DAT_0036a0b8;
extern int DAT_0036a0bc;
extern char s_N_Rupee_00_0036a0c0[];
extern char s_share__s__0036a0ac[];

// USA 00369FDC <- EU 00369FB8 (Ghidra, non-matching)
// GLOBAL DAT_0036a0b8 int *
// GLOBAL DAT_0036a0bc int
// GLOBAL s_N_Rupee_00_0036a0c0 string
// GLOBAL s_share[%s]_0036a0ac string

undefined4 func_00369FDC(int *param_1,int *param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_50 (*(int *)(albw_frame + 0x0))
  #define local_4c (*(char * *)(albw_frame + 0x4))
  #define auStack_48 ((undefined4 *)(albw_frame + 0x8))
  if (param_2 != (int *)0x0) {
    (**(code **)(param_2[9] + 8))(param_2 + 9);
    func_006896BC(auStack_48,s_share__s__0036a0ac,param_2[10],param_4);
  }
  param_1[7] = (int)param_2;
  param_1[6] = param_1[6] | 0x18;
  param_1[10] = (int)param_2;
  *(undefined2 *)((int)param_1 + 0x22) = 0;
  *(undefined2 *)(param_1 + 8) = 0;
  param_1[0xd] = (int)param_2;
  *(undefined2 *)((int)param_1 + 0x2e) = 1;
  *(undefined2 *)(param_1 + 0xb) = 0;
  func_002313DC((int)(param_1 + 8));
  piVar1 = DAT_0036a0b8;
  (**(code **)(*DAT_0036a0b8 + 8))(DAT_0036a0b8);
  iVar2 = DAT_0036a0bc;
  local_4c = (char *)piVar1[1];
  local_50 = DAT_0036a0bc;
  func_0034BA3C(param_1[0x18],param_2,&local_50);
  func_004B948C(param_3,param_1[0x18]);
  local_4c = s_N_Rupee_00_0036a0c0;
  local_50 = iVar2;
  iVar2 = func_005229AC(param_2,&local_50);
  param_1[0xe] = iVar2;
  return (**(code **)(*param_1 + 0x4c))(param_1,0);
}

