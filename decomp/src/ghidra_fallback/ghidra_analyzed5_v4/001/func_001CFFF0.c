#include "ghidra_types.h"

extern int func_0017254C(int param_1);
extern int func_0030A578(int param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4, undefined1 param_5);
extern int func_004994FC(int param_1,undefined4 param_2,uint param_3,undefined4 param_4,...);
extern int func_00523910(int param_1);
extern int func_00523C08(int param_1);
extern int func_0058DCB8(int param_1);
extern int *DAT_001d013c;
extern int *DAT_001d014c;
extern char u__02d_001d0140[];

// USA 001CFFF0 <- EU 001CFFF0 (Ghidra, non-matching)
// GLOBAL DAT_001d013c int *
// GLOBAL DAT_001d014c int *
// GLOBAL u_%02d_001d0140 unicode

int func_001CFFF0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  
  piVar1 = DAT_001d013c;
  if (param_2 == 4) {
    iVar3 = (**(code **)(**(int **)(param_1 + 0x5e4) + 0x40))(*(int **)(param_1 + 0x5e4));
    if (*(char *)(iVar3 + 0xda) == '\0') {
      iVar3 = (**(code **)(**(int **)(param_1 + 0x5e4) + 0x40))(*(int **)(param_1 + 0x5e4));
      func_0030A578(iVar3,0,0x17,0,0);
    }
  }
  else {
    if (param_2 == 5) {
      iVar3 = *DAT_001d013c;
      *(undefined1 *)(iVar3 + 0x2f5) = 0;
      if (*(char *)(iVar3 + 0x70) == '\0') {
        if ((*(uint *)(iVar3 + 0x2b4) & 4) != 0) {
          return 1;
        }
      }
      else {
        if (*(char *)(param_1 + 0x63e) == '\0') {
          iVar3 = func_00523910(iVar3);
          *(int *)(param_1 + 0x60c) = iVar3;
          uVar2 = func_00523C08(*piVar1);
          func_004994FC(param_1 + 0x610,u__02d_001d0140,uVar2,param_4);
        }
        func_0017254C(*piVar1);
      }
      return 0;
    }
    if (param_2 == 6) {
      iVar3 = func_0058DCB8(*DAT_001d014c);
      return iVar3;
    }
    if (param_2 != 7) {
      return 1;
    }
    iVar3 = (**(code **)(**(int **)(param_1 + 0x5e4) + 0x40))(*(int **)(param_1 + 0x5e4));
    if (*(char *)(iVar3 + 0xda) == '\0') {
      iVar3 = (**(code **)(**(int **)(param_1 + 0x5e4) + 0x40))(*(int **)(param_1 + 0x5e4));
      func_0030A578(iVar3,0,0x29,0,0);
    }
  }
  iVar3 = (**(code **)(**(int **)(param_1 + 0x5e4) + 0x40))(*(int **)(param_1 + 0x5e4));
  return (int)*(char *)(iVar3 + 0xdb);
}

