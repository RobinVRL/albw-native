#include "ghidra_types.h"

extern int func_002313DC(int param_1);
extern int func_00231524(int param_1);
extern int func_00450178(int param_1,int param_2);
extern int func_0045E4AC(int param_1,uint param_2);
extern int func_005229AC(int *param_1,int *param_2);
extern int func_0066E58C(undefined4 *param_1,char param_2);
extern int *DAT_004749f0;
extern int *DAT_004749f4;

// USA 0047495C <- EU 00474934 (Ghidra, non-matching)
// GLOBAL DAT_004749f0 int *
// GLOBAL DAT_004749f4 int *

undefined4 func_0047495C(int param_1)

{
  ushort uVar1;
  int *piVar2;
  int iVar3;
  
  uVar1 = *(ushort *)(*(int *)(param_1 + 0x14) + 0x16);
  if ((uVar1 & 8) == 0) {
    if ((uVar1 & 0x10) != 0) {
      return func_0066E58C((undefined4 *)(param_1 + 200),'\f');
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xf4) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined2 *)(param_1 + 0xee) = 9;
    *(undefined2 *)(param_1 + 0xec) = 0;
    func_00231524(param_1 + 0xec);
    iVar3 = func_005229AC(*(int **)(param_1 + 0x1c),DAT_004749f0);
    piVar2 = DAT_004749f4;
    func_00450178(*DAT_004749f4,iVar3);
    if (*(char *)(param_1 + 0xcc) == '\0') {
      func_0045E4AC(*piVar2,(uint)*(byte *)(param_1 + 0xf8));
    }
  }
  if ((*(ushort *)(*(int *)(param_1 + 0x14) + 0x16) & 0x20) == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0xf4) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined2 *)(param_1 + 0xee) = 9;
  *(undefined2 *)(param_1 + 0xec) = 0;
  return func_002313DC(param_1 + 0xec);
}

