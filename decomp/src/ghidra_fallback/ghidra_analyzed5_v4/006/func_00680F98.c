#include "ghidra_types.h"

extern int func_0010983C(undefined4 param_1,undefined4 param_2);
extern int func_0010CF28(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_004880F0(int *param_1,int *param_2);
extern int func_00488234(undefined4 *param_1,uint param_2);
extern undefined4 *DAT_00681008;
extern int DAT_0068100c;
extern int DAT_00681024;
extern char s_npc_name_darkzelda_00681010[];

// USA 00680F98 <- EU 00680F70 (Ghidra, non-matching)
// GLOBAL DAT_00681008 undefined4 *
// GLOBAL DAT_0068100c int
// GLOBAL DAT_00681024 int
// GLOBAL s_npc_name_darkzelda_00681010 string

int * func_00680F98(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  puVar1 = DAT_00681008;
  if (param_1 == (int *)0x0) {
    iVar5 = 1;
  }
  else {
    iVar5 = func_0010983C(*DAT_00681008,param_1);
  }
  puVar2 = (undefined4 *)func_0010CF28(0x154,param_1,4);
  if (puVar2 == (undefined4 *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)func_00488234(puVar2,2);
    local_18 = DAT_00681024;
    iVar3 = DAT_0068100c + 0xac;
    *piVar4 = DAT_0068100c;
    piVar4[0xe] = iVar3;
    local_14 = s_npc_name_darkzelda_00681010;
    func_004880F0(piVar4,&local_18);
  }
  if (iVar5 != 1) {
    func_0010983C(*puVar1,iVar5);
  }
  return piVar4;
}

