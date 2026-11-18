#include "ghidra_types.h"

extern int func_0051C090(int param_1,undefined2 param_2,int param_3);
extern int func_0051C0C4(int param_1,int *param_2,int *param_3);
extern int *DAT_0030da74;
extern int DAT_0030da78;

// USA 0030D960 <- EU 0030D93C (Ghidra, non-matching)
// GLOBAL DAT_0030da74 int *
// GLOBAL DAT_0030da78 int

void func_0030D960(int param_1)

{
  int *piVar1;
  undefined2 uVar2;
  int iVar3;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(int *)(albw_frame + 0x8))
  #define local_24 (*(undefined4 *)(albw_frame + 0xc))
  #define local_20 (*(int *)(albw_frame + 0x10))
  #define local_1c (*(undefined4 *)(albw_frame + 0x14))
  piVar1 = DAT_0030da74;
  if ((*(int **)(param_1 + 0x24) != (int *)0x0) && (*DAT_0030da74 != 0)) {
    (**(code **)(**(int **)(param_1 + 0x24) + 0x28))(*(int **)(param_1 + 0x24));
    uVar2 = (**(code **)(**(int **)(param_1 + 0x24) + 0x28))(*(int **)(param_1 + 0x24));
    func_0051C090(*piVar1,uVar2,0);
    (**(code **)(**(int **)(param_1 + 0x24) + 0x2c))(*(int **)(param_1 + 0x24));
    uVar2 = (**(code **)(**(int **)(param_1 + 0x24) + 0x2c))(*(int **)(param_1 + 0x24));
    func_0051C090(*piVar1,uVar2,1);
    (**(code **)(**(int **)(param_1 + 0x24) + 0x30))(*(int **)(param_1 + 0x24));
    uVar2 = (**(code **)(**(int **)(param_1 + 0x24) + 0x30))(*(int **)(param_1 + 0x24));
    func_0051C090(*piVar1,uVar2,2);
    iVar3 = (**(code **)(**(int **)(param_1 + 0x24) + 0x34))(*(int **)(param_1 + 0x24));
    if ((iVar3 != 0) && (iVar3 = (**(code **)(**(int **)(param_1 + 0x24) + 0x38))(*(int **)(param_1 + 0x24)), iVar3 != 0)) {
      local_1c = (**(code **)(**(int **)(param_1 + 0x24) + 0x38))(*(int **)(param_1 + 0x24));
      iVar3 = DAT_0030da78;
      local_20 = DAT_0030da78;
      local_24 = (**(code **)(**(int **)(param_1 + 0x24) + 0x34))(*(int **)(param_1 + 0x24));
      local_28 = iVar3;
      func_0051C0C4(*piVar1,&local_28,&local_20);
    }
  }
  return;
}

