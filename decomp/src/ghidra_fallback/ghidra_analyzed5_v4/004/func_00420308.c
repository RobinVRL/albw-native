#include "ghidra_types.h"

extern int func_00420EE0(undefined4 *param_1);
extern int func_0042128C(undefined4 *param_1,undefined4 param_2,uint param_3,undefined1 param_4, undefined2 param_5,undefined2 param_6,undefined2 param_7,uint param_8, undefined1 param_9);
extern int DAT_004203bc;

// USA 00420308 <- EU 004202E8 (Ghidra, non-matching)
// GLOBAL DAT_004203bc int

int * func_00420308(undefined4 *param_1)

{
  undefined2 uVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = func_00420EE0(param_1);
  *piVar2 = DAT_004203bc;
  piVar2[2] = 0;
  piVar2[3] = 0;
  func_0042128C(piVar2 + 4,0,0,8,0,0,0,0,1);
  piVar2[10] = 0;
  piVar2[9] = 6;
  if (piVar2[2] != 0) {
    if (piVar2[4] != 0) {
      piVar2[4] = 0;
    }
    iVar3 = *(int *)(piVar2[3] + 0xc);
    uVar1 = (**(code **)(*piVar2 + 0x7c))(piVar2);
    func_0042128C(piVar2 + 4,0,*(uint *)(iVar3 + 0x14),(char)*(undefined2 *)(iVar3 + 10),
                  *(undefined2 *)(iVar3 + 0x10),*(undefined2 *)(iVar3 + 0x12),uVar1,
                  *(uint *)(iVar3 + 4),1);
  }
  return piVar2;
}

