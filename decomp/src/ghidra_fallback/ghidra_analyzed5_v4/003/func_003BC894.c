#include "ghidra_types.h"

extern int func_003BC2F0(int param_1,int *param_2,int *param_3);
extern int func_00491260(undefined4 *param_1);
extern int DAT_003bc8c8;
extern undefined4 DAT_003bc8cc;
extern char s_LoadingFaderBattleOut_003bc8b0[];

// USA 003BC894 <- EU 003BC870 (Ghidra, non-matching)
// GLOBAL DAT_003bc8c8 int
// GLOBAL DAT_003bc8cc undefined4
// GLOBAL s_LoadingFaderBattleOut_003bc8b0 string

undefined4 func_003BC894(int param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  local_c = s_LoadingFaderBattleOut_003bc8b0;
  local_10 = DAT_003bc8c8;
  puVar1 = (undefined4 *)func_003BC2F0(param_1,param_2,&local_10);
  *puVar1 = DAT_003bc8cc;
  iVar2 = func_00491260(puVar1 + 0x84);
  *(undefined4 *)(iVar2 + 0xe8) = 0;
  return (undefined4)param_1;
}

