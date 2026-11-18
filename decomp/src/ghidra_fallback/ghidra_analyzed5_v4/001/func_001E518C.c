#include "ghidra_types.h"

extern int func_0010B380(undefined4 *param_1,int param_2,int *param_3,undefined4 param_4);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0010DB90(void);
extern int func_00110490(undefined4 *param_1,uint param_2);
extern int func_003529C0(undefined4 *param_1);
extern int func_004CEAF0(int param_1);
extern int func_004D7EB0(float *param_1,uint param_2,uint param_3,float *param_4);
extern undefined4 DAT_001e532c;
extern undefined4 DAT_001e5330;
extern undefined4 DAT_001e5334;

// USA 001E518C <- EU 001E518C (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 uint
// GLOBAL DAT_001e532c undefined4
// GLOBAL DAT_001e5330 undefined4
// GLOBAL DAT_001e5334 undefined4

void func_001E518C(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  uint param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int *piVar9;
  int *piVar10;
  ulonglong uVar11;
  
  uVar11 = (ulonglong)param_5;
  if (0 < param_1[0x11e]) {
    func_0010B380(param_1 + 0x181,param_1[0x11e],(int *)0x0,4);
    piVar3 = (int *)func_0010DB90();
    uVar2 = DAT_001e5334;
    uVar1 = DAT_001e5330;
    piVar9 = (int *)param_1[0x120];
    piVar10 = piVar9 + param_1[0x11e];
    while ((piVar9 != piVar10 && (uVar4 = (**(code **)(*piVar3 + 0x3c))(piVar3,4), 0x3ff < uVar4)))
    {
      iVar5 = (**(code **)(*param_1 + 0x54))(param_1,*piVar9,param_3,param_4,(int)uVar11);
      if (iVar5 != 0) {
        iVar6 = *piVar9;
        *(uint *)(iVar5 + 0x164) = *(uint *)(iVar5 + 0x164) | 0x40000000;
        func_004D7EB0((float *)(iVar5 + 0x80),*(uint *)(iVar6 + 0x1c),*(uint *)(iVar6 + 0x20),
                      (float *)(iVar6 + 4));
        iVar6 = *piVar9;
        *(uint *)(iVar5 + 0x164) = *(uint *)(iVar5 + 0x164) | 0x40000000;
        *(undefined4 *)(iVar5 + 0x74) = *(undefined4 *)(iVar6 + 0x10);
        *(undefined4 *)(iVar5 + 0x78) = *(undefined4 *)(iVar6 + 0x14);
        *(undefined4 *)(iVar5 + 0x7c) = *(undefined4 *)(iVar6 + 0x18);
        func_004CEAF0(iVar5);
        if (param_1[0x181] < param_1[0x182]) {
          *(int *)(param_1[0x183] + param_1[0x181] * 4) = iVar5;
          param_1[0x181] = param_1[0x181] + 1;
        }
        puVar7 = (undefined4 *)func_0010BAB4(0x48);
        puVar8 = (undefined4 *)0x0;
        if (puVar7 != (undefined4 *)0x0) {
          func_00110490(puVar7,0x48);
          *puVar7 = uVar1;
          puVar8 = func_003529C0(puVar7 + 1);
          puVar8[0x10] = 0;
          puVar8 = puVar8 + -1;
          *puVar8 = uVar2;
        }
        puVar8[0xb] = iVar5;
        if (param_1[0x184] < param_1[0x185]) {
          *(undefined4 **)(param_1[0x186] + param_1[0x184] * 4) = puVar8;
          param_1[0x184] = param_1[0x184] + 1;
        }
      }
      piVar9 = piVar9 + 1;
    }
  }
  return;
}

