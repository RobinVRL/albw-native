#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00141D9C(int *param_1,int param_2);
extern int func_004CF478(int param_1,int param_2);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_00588BE4(int param_1);
extern int *DAT_00142bd4;
extern int *DAT_00142bd8;
extern uint *DAT_00142bdc;
extern undefined4 *DAT_00142be0;
extern undefined4 DAT_00142be4;

// USA 00142A90 <- EU 00142A90 (Ghidra, non-matching)
// GLOBAL DAT_00142bd4 int *
// GLOBAL DAT_00142bd8 int *
// GLOBAL DAT_00142bdc uint *
// GLOBAL DAT_00142be0 undefined4 *
// GLOBAL DAT_00142be4 undefined4

undefined4 func_00142A90(int *param_1,int param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (*(uint *)(param_2 + 0x28) == param_1[0x14]) {
    return 0;
  }
  puVar2 = (undefined4 *)func_0052FBA0(*DAT_00142bd4 + 0x3dbbc,*(uint *)(param_2 + 0x28));
  if (puVar2 != (undefined4 *)0x0) {
    iVar3 = func_00588BE4((int)puVar2);
    if (iVar3 == *DAT_00142bd8) {
      if ((1 << (*(ushort *)(param_2 + 0x20) & 0x1f) & 0xd80U) != 0) {
        return 1;
      }
      if ((char)param_1[0x164] != '\0') {
        return 0;
      }
      *(undefined1 *)(param_1 + 0x164) = 1;
      uVar1 = (*(ushort *)(param_2 + 0x20) & 0x7e0) >> 5;
      if (uVar1 == 9) {
LAB_00142b40:
        func_00115C54((float *)(param_1 + 0x149),(float *)(param_1 + 0x14c),
                      (float *)(param_1 + 0xf4));
        func_00141D9C(param_1,2);
        return 1;
      }
      if (uVar1 < 10) {
        if (uVar1 == 5 || uVar1 == 7) goto LAB_00142b40;
      }
      else if (uVar1 == 0x15 || uVar1 == 0x17) goto LAB_00142b40;
    }
    else {
      if (((*DAT_00142bdc & 1) == 0) && (iVar3 = func_00100174((int *)DAT_00142bdc), iVar3 != 0)) {
        *DAT_00142be0 = DAT_00142be4;
      }
      iVar3 = (**(code **)*puVar2)(puVar2,DAT_00142be0);
      if (iVar3 == 0) {
        return 1;
      }
    }
    func_004CF478(param_1[0x124],0);
  }
  return 1;
}

