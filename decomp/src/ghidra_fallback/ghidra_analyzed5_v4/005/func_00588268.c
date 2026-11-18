#include "ghidra_types.h"

extern int func_0054722C(int param_1,int param_2);
extern int func_0056D3E4(int param_1,uint *param_2);
extern int func_0057F260(int param_1);
extern int DAT_00588314;
extern char s_SE_S_READ_RIDDLE_00588300[];
extern char s_SE_S_READ_RIDDLE_S_00588318[];

// USA 00588268 <- EU 00588240 (Ghidra, non-matching)
// GLOBAL DAT_00588314 int
// GLOBAL s_SE_S_READ_RIDDLE_00588300 string
// GLOBAL s_SE_S_READ_RIDDLE_S_00588318 string

undefined4 func_00588268(int param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(uint * *)(albw_frame + 0x4))
  #define iStack_18 (*(int *)(albw_frame + 0x8))
  #define puStack_14 (*(uint * *)(albw_frame + 0xc))
  iVar5 = DAT_00588314;
  local_1c = (uint *)s_SE_S_READ_RIDDLE_00588300;
  local_20 = DAT_00588314;
  (**(code **)(DAT_00588314 + 8))(&local_20);
  puVar1 = local_1c;
  puVar2 = func_0057F260(*(int *)(*(int *)(param_1 + 0x24) + 0x140));
  uVar3 = func_0056D3E4((int)puVar2,puVar1);
  if ((uVar3 == 0xffffffff) || (iVar4 = func_0054722C(*(int *)(param_1 + 0x3c),uVar3), iVar4 == 0))
  {
    puStack_14 = (uint *)s_SE_S_READ_RIDDLE_S_00588318;
    iStack_18 = iVar5;
    (**(code **)(iVar5 + 8))(&iStack_18);
    puVar1 = puStack_14;
    puVar2 = func_0057F260(*(int *)(*(int *)(param_1 + 0x24) + 0x140));
    uVar3 = func_0056D3E4((int)puVar2,puVar1);
    if (uVar3 == 0xffffffff) {
      return 0;
    }
    iVar5 = func_0054722C(*(int *)(param_1 + 0x3c),uVar3);
    if (iVar5 == 0) {
      return 0;
    }
  }
  return 1;
}

