#include "ghidra_types.h"

extern int func_00112364(int *param_1,int param_2,int *param_3);
extern int func_00413788(undefined4 *param_1);
extern int func_00414FF0(void);
extern int func_00415658(int param_1,int param_2);
extern int func_0041DFB4(undefined4 *param_1,undefined4 param_2);
extern uint DAT_0040a154;
extern uint DAT_0040a158;
extern undefined4 DAT_0040a15c;

// USA 00409F8C <- EU 00409F6C (Ghidra, non-matching)
// GLOBAL DAT_0040a154 uint
// GLOBAL DAT_0040a158 uint
// GLOBAL DAT_0040a15c undefined4

undefined4 func_00409F8C(int param_1,int param_2,uint *param_3,int param_4)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  
  puVar6 = (undefined4 *)*param_3;
  if (((uint)puVar6 & 0x1f) == 0) {
    uVar3 = param_2 * 0x1e4 + 0x1fU & 0xffffffe0;
    puVar8 = (undefined4 *)((int)puVar6 + uVar3);
    if ((int)puVar8 - param_4 < 1) {
      uVar7 = 0;
      uVar1 = (uint)((ulonglong)DAT_0040a154 * (ulonglong)uVar3 + (ulonglong)DAT_0040a154 >> 0x28);
      puVar4 = puVar6;
      if (uVar1 != 0) {
        do {
          if (puVar4 == (undefined4 *)0x0) {
            piVar5 = (int *)0x0;
          }
          else {
            piVar5 = func_0041DFB4(puVar4,(uint *)(param_1 + 0x6c));
          }
          func_00112364((int *)(param_1 + 0x80),param_1 + 0x84,piVar5 + 0x3d);
          uVar7 = uVar7 + 1;
          puVar4 = puVar4 + 0x79;
        } while (uVar7 < uVar1);
      }
      *(uint *)(param_1 + 0x6c) = (uint)puVar6;
      *(uint *)(param_1 + 0x70) = uVar3;
      *param_3 = (uint)puVar8;
      uVar2 = DAT_0040a15c;
      uVar3 = param_2 * 0x4c + 0x1fU & 0xffffffe0;
      if ((int)(((int)puVar8 + uVar3) - param_4) < 1) {
        uVar7 = 0;
        uVar1 = (uint)((ulonglong)DAT_0040a158 * (ulonglong)uVar3 + (ulonglong)DAT_0040a158 >> 0x26)
        ;
        puVar6 = puVar8;
        if (uVar1 != 0) {
          do {
            puVar4 = (undefined4 *)0x0;
            if (puVar6 != (undefined4 *)0x0) {
              puVar4 = func_00413788(puVar6);
              puVar4[7] = 0;
              *puVar4 = uVar2;
              puVar4[8] = 0;
              puVar4[9] = 0;
              puVar4[10] = 0xffffffff;
              puVar4[0xb] = 0;
              puVar4[0xc] = 0;
              puVar4[0xd] = 0;
              puVar4[0xe] = 0;
              puVar4[0x11] = 0;
              puVar4[0x12] = 0;
            }
            func_00112364((int *)(param_1 + 0xa0),param_1 + 0xa4,puVar4 + 0x11);
            uVar7 = uVar7 + 1;
            puVar6 = puVar6 + 0x13;
          } while (uVar7 < uVar1);
        }
        *(undefined4 **)(param_1 + 0x98) = puVar8;
        *(uint *)(param_1 + 0x9c) = uVar3;
        *param_3 = (int)puVar8 + uVar3;
        piVar5 = *(int **)(param_1 + 0x84);
        if (piVar5 != (int *)(param_1 + 0x84)) {
          do {
            piVar5[0x34] = param_1 + 0x8c;
            piVar5 = (int *)*piVar5;
          } while (piVar5 != (int *)(param_1 + 0x84));
        }
        puVar6 = func_00414FF0();
        func_00415658((int)puVar6,param_1 + 0x8c);
        return 1;
      }
    }
  }
  return 0;
}

