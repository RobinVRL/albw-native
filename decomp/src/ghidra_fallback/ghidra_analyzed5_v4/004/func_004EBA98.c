#include "ghidra_types.h"

extern int func_00150C80(int *param_1,undefined4 param_2,int param_3);
extern int func_00537B48(int param_1);
extern int func_0056D3E4(int param_1,uint *param_2);
extern int func_0057F260(int param_1);
extern int DAT_004ebafc;
extern char s_SE_PL_Sword_SWING_004ebae8[];

// USA 004EBA98 <- EU 004EBA70 (Ghidra, non-matching)
// GLOBAL DAT_004ebafc int
// GLOBAL s_SE_PL_Sword_SWING_004ebae8 string

void func_004EBA98(int param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define iStack_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(uint * *)(albw_frame + 0xc))
  if (*(int *)(param_1 + 0x58) != 0) {
    iStack_18 = DAT_004ebafc;
    local_14 = (uint *)s_SE_PL_Sword_SWING_004ebae8;
    (**(code **)(DAT_004ebafc + 8))(&iStack_18);
    puVar1 = local_14;
    puVar2 = func_0057F260(*(int *)(*(int *)(param_1 + 0x24) + 0x140));
    uVar3 = func_0056D3E4((int)puVar2,puVar1);
    iVar4 = func_00537B48(*(int *)(param_1 + 0x58) + 0x40c);
    if (*(int **)(param_1 + 0x58) != (int *)0x0) {
      func_00150C80(*(int **)(param_1 + 0x58),iVar4 + uVar3,0);
    }
  }
  return;
}

