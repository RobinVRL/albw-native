#include "ghidra_types.h"

extern int func_0010BEB4(int param_1,int *param_2);
extern int func_004F4A68();
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_00588BE4(int param_1);
extern int func_005895C4(ushort *param_1,int param_2,int param_3);
extern int *DAT_00211ce8;
extern int *DAT_00211cec;
extern int DAT_00211cf0;

// USA 00211B00 <- EU 00211B00 (Ghidra, non-matching)
// GLOBAL DAT_00211ce8 int *
// GLOBAL DAT_00211cec int *
// GLOBAL DAT_00211cf0 int

undefined4 func_00211B00(int param_1,int param_2)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  code *pcVar5;
  int iVar6;
  uint uVar7;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(int *)(albw_frame + 0x8))
  #define local_24 (*(int *)(albw_frame + 0xc))
  cVar2 = *(char *)(param_1 + 0x8c0);
  uVar7 = *(uint *)(param_2 + 0x28);
  if (((((cVar2 == '\x01' || cVar2 == '\x06') || (cVar2 == '\n' || cVar2 == '\v')) &&
       (iVar3 = func_0052FBA0(*DAT_00211ce8 + 0x3dbbc,uVar7), iVar3 != 0)) &&
      (iVar3 = func_00588BE4(iVar3), iVar3 == *DAT_00211cec)) &&
     (((*(uint *)(param_1 + 0x960) == 0 || (*(uint *)(param_1 + 0x960) != uVar7)) &&
      (iVar3 = func_005895C4((ushort *)(param_2 + 0x20),param_2 + 4,0), iVar3 != 0)))) {
    *(uint *)(param_1 + 0x960) = uVar7;
    iVar3 = (int)*(char *)(param_1 + 0x8c0);
    if (iVar3 != 8) {
      if (iVar3 != -1) {
        iVar6 = *(int *)(param_1 + 0x8dc);
        pcVar5 = *(code **)(iVar6 + iVar3 * 8);
        if ((pcVar5 != (code *)0x0) ||
           (uVar7 = *(uint *)(iVar6 + iVar3 * 8 + 4), (uVar7 & 1) != 0 && uVar7 != 0)) {
          uVar7 = *(uint *)(iVar6 + iVar3 * 8 + 4);
          piVar4 = (int *)(*(int *)(param_1 + 0x8d0) + ((int)uVar7 >> 1));
          if ((uVar7 & 1) != 0) {
            pcVar5 = *(code **)(pcVar5 + *piVar4);
          }
          (*pcVar5)(piVar4,8);
        }
      }
      uVar1 = *(undefined1 *)(param_1 + 0x8c0);
      *(undefined1 *)(param_1 + 0x8c0) = 8;
      *(undefined4 *)(param_1 + 0x8bc) = 0;
      *(undefined1 *)(param_1 + 0x8c1) = uVar1;
      if (*(int *)(param_1 + 0x8cc) != 0) {
        if (*(uint *)(param_1 + 0x8c4) < 9) {
          piVar4 = *(int **)(param_1 + 0x8c8);
        }
        else {
          piVar4 = (int *)(*(int *)(param_1 + 0x8c8) + 0x120);
        }
        (**(code **)(*piVar4 + 8))(piVar4);
        local_24 = piVar4[1];
        local_28 = DAT_00211cf0;
        func_0010BEB4(*(int *)(param_1 + 0x8cc),&local_28);
      }
      iVar6 = (int)*(char *)(param_1 + 0x8c0);
      iVar3 = *(int *)(param_1 + 0x8d4);
      pcVar5 = *(code **)(iVar3 + iVar6 * 8);
      if ((pcVar5 != (code *)0x0) ||
         ((uVar7 = *(uint *)(iVar3 + iVar6 * 8 + 4), (uVar7 & 1) != 0 && (uVar7 != 0)))) {
        uVar7 = *(uint *)(iVar3 + iVar6 * 8 + 4);
        if ((uVar7 & 1) != 0) {
          pcVar5 = *(code **)(pcVar5 + *(int *)(*(int *)(param_1 + 0x8d0) + ((int)uVar7 >> 1)));
        }
        (*pcVar5)((int)(*(int *)(param_1 + 0x8d0)) + ((int)uVar7 >> 1));
      }
    }
  }
  return func_004F4A68(param_1,param_2);
}

