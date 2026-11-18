#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00169608(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_00169688(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int func_0016A2FC(undefined4 *param_1,int param_2,undefined4 param_3,int param_4);
extern undefined8 func_003BBC74(int param_1,int *param_2,undefined4 param_3);
extern int DAT_003bc56c;
extern char s_BattleChange_003bc570[];
extern char s_BattleChange_bch_003bc558[];
extern char s_MatBattleChange_003bc580[];
extern char s_cf_003bc558[];

// USA 003BC468 <- EU 003BC444 (Ghidra, non-matching)
// GLOBAL DAT_003bc56c int
// GLOBAL s_cf_003bc558 string
// GLOBAL s_BattleChange_003bc570 string
// GLOBAL s_MatBattleChange_003bc580 string

undefined4 func_003BC468(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  iVar1 = DAT_003bc56c;
  local_14 = s_BattleChange_bch_003bc558;
  local_18 = DAT_003bc56c;
  func_003BBC74(param_1,&local_18,param_2);
  iVar4 = **(int **)(*(int *)(param_1 + 500) + 0x50);
  puVar2 = (undefined4 *)func_0010BAB4(0xa8);
  puVar3 = (undefined4 *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    local_14 = s_BattleChange_003bc570;
    local_18 = iVar1;
    puVar3 = func_0016A2FC(puVar2,1,&local_18,1);
  }
  *(undefined4 **)(param_1 + 0x1f8) = puVar3;
  local_14 = s_BattleChange_003bc570;
  local_18 = iVar1;
  func_00169688(*(uint **)(param_1 + 0x1f8),0,&local_18,iVar4);
  func_0016A02C(*(int *)(param_1 + 0x1f8),-1,(int *)0xffffffff,*(int *)(param_1 + 500));
  puVar2 = (undefined4 *)func_0010BAB4(0xa8);
  puVar3 = (undefined4 *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    local_14 = s_MatBattleChange_003bc580;
    local_18 = iVar1;
    puVar3 = func_0016A2FC(puVar2,1,&local_18,1);
  }
  *(undefined4 **)(param_1 + 0x2f8) = puVar3;
  local_14 = s_BattleChange_003bc570;
  local_18 = iVar1;
  func_00169608(*(uint **)(param_1 + 0x2f8),0,&local_18,iVar4);
  return func_0016A02C(*(int *)(param_1 + 0x2f8),-1,(int *)0xffffffff,*(int *)(param_1 + 500));
}

