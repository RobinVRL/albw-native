#include "ghidra_types.h"

extern int func_0025B324(int param_1);
extern int func_00320F90(int param_1);
extern int func_0041E1C4(int param_1);
extern int func_00495BD0(int param_1,uint param_2,int *param_3,int *param_4,int *param_5);
extern int func_0056D3E4(int param_1,uint *param_2);
extern int func_0057F260(int param_1);
extern int DAT_004ec600;
extern char s_GROUP_STATIC_004ec5f0[];

// USA 004EC564 <- EU 004EC53C (Ghidra, non-matching)
// GLOBAL DAT_004ec600 int
// GLOBAL s_GROUP_STATIC_004ec5f0 string

void func_004EC564(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x78) == '\0') {
    func_00320F90(*(int *)(param_1 + 0x24));
    func_0025B324(*(int *)(param_1 + 0x50));
    (**(code **)(DAT_004ec600 + 8))();
    puVar1 = func_0057F260(*(int *)(*(int *)(param_1 + 0x24) + 0x140));
    uVar2 = func_0056D3E4((int)puVar1,(uint *)s_GROUP_STATIC_004ec5f0);
    if (uVar2 != 0xffffffff) {
      func_00495BD0(*(int *)(*(int *)(param_1 + 0x24) + 0x140),uVar2,(int *)0xffffffff,(int *)0x0,
                    (int *)0x0);
    }
    iVar3 = func_0041E1C4(*(int *)(*(int *)(param_1 + 0x24) + 0x144));
    *(int *)(param_1 + 0x10) = iVar3;
    *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
    *(undefined1 *)(param_1 + 0x78) = 1;
  }
  return;
}

