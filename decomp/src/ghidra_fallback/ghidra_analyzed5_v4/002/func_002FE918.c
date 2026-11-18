#include "ghidra_types.h"

extern int func_005FEF5C(undefined4 param_1,undefined4 param_2);
extern int func_005FF104(int param_1,int param_2);
extern int func_005FF418(uint param_1,undefined4 param_2,uint param_3);
extern int func_006003D8(undefined4 param_1,int *param_2);
extern undefined4 DAT_002fe97c;
extern undefined4 DAT_002fe980;

// USA 002FE918 <- EU 002FE8F4 (Ghidra, non-matching)
// GLOBAL DAT_002fe97c undefined4
// GLOBAL DAT_002fe980 undefined4

void func_002FE918(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  uint uVar3;
  uint in_r2;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 ((int *)(albw_frame + 0x8))
  #define local_10 (*(uint *)(albw_frame + 0x10))
  if (*(char *)(param_1 + 0x47) != '\0') {
    bVar1 = *(byte *)(param_1 + 0x44);
    func_006003D8(DAT_002fe97c,(int *)&local_10);
    iVar2 = param_1 + (1 - (uint)bVar1) * 4;
    if (*(int *)(param_1 + 0x40) == 0) {
      uVar3 = *(int *)(iVar2 + 0x30) - *(int *)(iVar2 + 0x38);
      if (0x10 < uVar3) {
        func_005FF104(*(int *)(iVar2 + 0x38),uVar3);
      }
      return;
    }
    func_005FF418(*(uint *)(iVar2 + 0x28),extraout_r1,in_r2);
    func_006003D8(DAT_002fe980,local_18);
    func_005FF418(local_10,extraout_r1_00,in_r2);
    func_005FEF5C(local_18[0],*(undefined4 *)(param_1 + 0x40));
  }
  return;
}

