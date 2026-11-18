#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_001E6CEC(undefined4 *param_1,uint *param_2,undefined4 param_3);
extern int func_00324964(int param_1);
extern int func_003249E0(int param_1,uint param_2);
extern int func_004356B4(int *param_1);
extern undefined4 DAT_00605814;
extern int DAT_00605818;
extern int DAT_0060581c;
extern float DAT_00605820;

// USA 00605794 <- EU 0060576C (Ghidra, non-matching)
// GLOBAL DAT_00605814 undefined4
// GLOBAL DAT_00605818 int
// GLOBAL DAT_0060581c int
// GLOBAL DAT_00605820 float

int * func_00605794(uint *param_1)

{
  float fVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  float fVar7;
  
  puVar2 = (undefined4 *)func_0010BAB4(DAT_00605814);
  piVar3 = (int *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    piVar3 = (int *)func_001E6CEC(puVar2,param_1,0xb);
    iVar6 = DAT_00605818;
    *piVar3 = DAT_00605818;
    *(undefined1 *)((int)piVar3 + 0x786) = 0xb;
    piVar3[200] = iVar6 + 0x98;
    uVar4 = *(ushort *)(piVar3 + 0xb) & 0xff;
    if (2 < uVar4) {
      uVar4 = 0;
    }
    *(undefined1 *)((int)piVar3 + 0x786) = *(undefined1 *)(DAT_0060581c + uVar4);
    func_003249E0((int)piVar3,0);
    fVar7 = ALBW_AS_F32(piVar3[0xf5]);
    piVar5 = (int *)piVar3[0x103];
    fVar1 = ALBW_AS_F32(piVar3[6]) * DAT_00605820;
    iVar6 = piVar3[0xf6];
    piVar5[1] = piVar3[0xf4];
    piVar5[2] = (int)ALBW_AS_U32((fVar7 + fVar1));
    piVar5[3] = iVar6;
    func_004356B4(piVar5);
    func_00324964((int)piVar3);
  }
  return piVar3;
}

