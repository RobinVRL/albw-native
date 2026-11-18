#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0010FD28(uint *param_1,undefined4 param_2);
extern int func_001E518C(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, uint param_5);
extern int func_001E56CC(undefined4 *param_1,uint *param_2);
extern int func_0023830C(int param_1);
extern int func_00238858(int param_1);
extern int func_0049BB30(uint *param_1,uint param_2);
extern undefined4 DAT_00605b84;
extern int DAT_00605b88;
extern int DAT_00605b8c;
extern float DAT_00605b90;
extern int DAT_00605b94;

// USA 00605ABC <- EU 00605A94 (Ghidra, non-matching)
// GLOBAL DAT_00605b84 undefined4
// GLOBAL DAT_00605b88 int
// GLOBAL DAT_00605b8c int
// GLOBAL DAT_00605b90 float
// GLOBAL DAT_00605b94 int

int * func_00605ABC(uint *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  uint uVar5;
  float fVar6;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define auStack_28 ((uint *)(albw_frame + 0x8))
  puVar3 = (undefined4 *)func_0010BAB4(DAT_00605b84);
  piVar4 = (int *)0x0;
  if (puVar3 != (undefined4 *)0x0) {
    piVar4 = func_001E56CC(puVar3,param_1);
    iVar1 = DAT_00605b88;
    *piVar4 = DAT_00605b88;
    piVar4[200] = iVar1 + 0x74;
    iVar2 = DAT_00605b8c;
    piVar4[0x187] = 0;
    piVar4[0x188] = 0;
    piVar4[0x189] = 0;
    piVar4[0x18a] = iVar2;
    piVar4[0x18b] = 0;
    piVar4[0x18c] = 0;
    fVar6 = ALBW_AS_F32(piVar4[0xf4]) + ALBW_AS_F32(piVar4[0xf5]) + ALBW_AS_F32(piVar4[0xf6]);
    if (fVar6 < DAT_00605b90) {
      fVar6 = -fVar6;
    }
    func_0010FD28(auStack_28,iVar1 + 0x74);
    uVar5 = VectorFloatToUnsigned(fVar6,3);
    func_0049BB30(auStack_28,uVar5);
    func_001E518C(piVar4,param_1,0,0,0);
    func_00238858((int)piVar4);
    func_0023830C((int)piVar4);
    iVar1 = DAT_00605b94;
    *piVar4 = DAT_00605b94;
    piVar4[200] = iVar1 + 0x74;
  }
  return piVar4;
}

