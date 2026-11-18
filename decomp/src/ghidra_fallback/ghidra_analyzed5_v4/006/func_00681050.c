#include "ghidra_types.h"

extern int func_0010983C(undefined4 param_1,undefined4 param_2);
extern int func_0010CF28(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_004880F0(int *param_1,int *param_2);
extern int func_00488234(undefined4 *param_1,uint param_2);
extern undefined4 *DAT_006810c0;
extern int DAT_006810c4;
extern int DAT_006810d8;
extern char s_npc_name_zelda_006810c8[];

// USA 00681050 <- EU 00681028 (Ghidra, non-matching)
// GLOBAL DAT_006810c0 undefined4 *
// GLOBAL DAT_006810c4 int
// GLOBAL DAT_006810d8 int
// GLOBAL s_npc_name_zelda_006810c8 string

int * func_00681050(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  puVar1 = DAT_006810c0;
  if (param_1 == (int *)0x0) {
    iVar5 = 1;
  }
  else {
    iVar5 = func_0010983C(*DAT_006810c0,param_1);
  }
  puVar2 = (undefined4 *)func_0010CF28(0x154,param_1,4);
  if (puVar2 == (undefined4 *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)func_00488234(puVar2,1);
    local_18 = DAT_006810d8;
    iVar3 = DAT_006810c4 + 0xac;
    *piVar4 = DAT_006810c4;
    piVar4[0xe] = iVar3;
    local_14 = s_npc_name_zelda_006810c8;
    func_004880F0(piVar4,&local_18);
  }
  if (iVar5 != 1) {
    func_0010983C(*puVar1,iVar5);
  }
  return piVar4;
}

