#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00163D8C(int param_1);
extern int func_0018ECE8(int param_1,int param_2,int param_3);
extern int func_001B083C(int param_1);
extern int func_0052FBA0(int param_1,uint param_2);
extern int *DAT_0018d508;
extern uint *DAT_0018d50c;
extern undefined4 *DAT_0018d510;
extern undefined4 DAT_0018d514;
extern uint *DAT_0018d518;
extern undefined4 *DAT_0018d51c;
extern undefined4 DAT_0018d520;

// USA 0018D3E4 <- EU 0018D3E4 (Ghidra, non-matching)
// GLOBAL DAT_0018d508 int *
// GLOBAL DAT_0018d50c uint *
// GLOBAL DAT_0018d510 undefined4 *
// GLOBAL DAT_0018d514 undefined4
// GLOBAL DAT_0018d518 uint *
// GLOBAL DAT_0018d51c undefined4 *
// GLOBAL DAT_0018d520 undefined4

undefined4 func_0018D3E4(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (1 < *(byte *)(param_1 + 0x4a0)) {
    if (*(byte *)(param_1 + 0x4a0) != 7) {
      return 0;
    }
    puVar1 = (undefined4 *)func_0052FBA0(*DAT_0018d508 + 0x3dbbc,*(uint *)(param_1 + 0x520));
    if (puVar1 != (undefined4 *)0x0) {
      if (((*DAT_0018d50c & 1) == 0) && (iVar2 = func_00100174((int *)DAT_0018d50c), iVar2 != 0)) {
        *DAT_0018d510 = DAT_0018d514;
      }
      iVar2 = (**(code **)*puVar1)(puVar1,DAT_0018d510);
      puVar3 = (undefined4 *)0x0;
      if (iVar2 != 0) {
        puVar3 = puVar1;
      }
      if (puVar3 == (undefined4 *)0x0) {
        if (((*DAT_0018d518 & 1) == 0) && (iVar2 = func_00100174((int *)DAT_0018d518), iVar2 != 0))
        {
          *DAT_0018d51c = DAT_0018d520;
        }
        iVar2 = (**(code **)*puVar1)(puVar1,DAT_0018d51c);
        if (iVar2 == 0) {
          puVar1 = (undefined4 *)0x0;
        }
        if (puVar1 != (undefined4 *)0x0) {
          func_001B083C((int)puVar1);
        }
      }
      else {
        func_00163D8C((int)puVar3);
      }
    }
  }
  func_0018ECE8(param_1,1,0);
  return 1;
}

