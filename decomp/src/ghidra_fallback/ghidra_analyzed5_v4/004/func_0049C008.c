#include "ghidra_types.h"

extern int func_0010A98C(uint param_1);
extern int func_0010C180(uint *param_1);
extern void func_0010F1F8(int *param_1,float fparam_0);
extern int func_0048C0C0(int *param_1);
extern int func_0048C144(int *param_1);
extern int func_0049BC44(int *param_1,undefined4 param_2);
extern int func_004A1520();
extern int func_0058FA08();
extern int func_0058FA5C();
extern int DAT_0049c124;
extern int *DAT_0049c128;

// USA 0049C008 <- EU 0049BFE0 (Ghidra, non-matching)
// GLOBAL DAT_0049c124 int
// GLOBAL DAT_0049c128 int *

undefined4 func_0049C008(int *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  float in_s0;
  
  iVar3 = DAT_0049c124;
  param_1[6] = DAT_0049c124 + 0x4c;
  piVar1 = DAT_0049c128;
  *param_1 = iVar3;
  iVar3 = *piVar1;
  if (iVar3 != 0) {
    if (*(int **)(iVar3 + 0x20) != param_1) {
      if (param_1[0x19] != 0) {
        param_1[0x19] = 0;
        func_0010F1F8(param_1 + 0x16,in_s0);
        *(int *)(iVar3 + 0x1c) = *(int *)(iVar3 + 0x1c) + -1;
      }
      iVar3 = param_1[0x1e];
      if (iVar3 == 1) {
        func_0049BC44(param_1,0);
      }
      else if ((iVar3 == 2 || iVar3 == 3) && (iVar3 != 0 && iVar3 != 4)) {
        puVar4 = (uint *)param_1[0x1f];
        uVar2 = *puVar4;
        software_interrupt(0x24);
        if ((int)uVar2 < 0) {
          func_0010A98C(uVar2);
        }
        *(undefined1 *)(puVar4 + 1) = 1;
        param_1[0x1e] = 4;
      }
      puVar4 = (uint *)param_1[0x1f];
      func_0010C180(puVar4);
      if (*puVar4 != 0) {
        software_interrupt(0x23);
        *puVar4 = 0;
      }
      puVar4 = (uint *)param_1[0x1f];
      if (puVar4 != (uint *)0x0) {
        func_0010C180(puVar4);
        if (*puVar4 != 0) {
          software_interrupt(0x23);
          *puVar4 = 0;
        }
        func_0058FA5C((int)puVar4);
      }
      func_0058FA08(param_1[0x20]);
    }
    func_0048C0C0(param_1 + 7);
  }
  iVar3 = func_0048C144(param_1 + 7);
  func_004A1520((undefined4 *)(iVar3 + -0x1c));
  return (undefined4)param_1;
}

