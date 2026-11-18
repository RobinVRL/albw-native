#include "ghidra_types.h"

extern int func_0016898C(int param_1,uint *param_2);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern int func_004FB070(int param_1,float fparam_0);
extern int func_004FB4C4(int param_1,float fparam_0);
extern undefined8 func_0058AB74(int param_1);
extern float DAT_0020d580;
extern float DAT_0020d584;

// USA 0020D4F4 <- EU 0020D4F4 (Ghidra, non-matching)
// GLOBAL DAT_0020d580 float
// GLOBAL DAT_0020d584 float

void func_0020D4F4(int param_1,int param_2)

{
  uint *puVar1;
  ushort *puVar2;
  undefined8 uVar3;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define aiStack_68 ((int *)(albw_frame + 0x8))
  if (param_2 == 0) {
    return;
  }
  if ((*(char *)(param_1 + 0xba4) == '\0') && (param_2 == 0x12)) {
    func_004FB070(param_1,DAT_0020d580);
    func_004FB4C4(param_1,DAT_0020d584);
    uVar3 = func_0058AB74(param_1);
    if ((int)uVar3 != 0xc) {
      puVar1 = (uint *)func_002C11E8(aiStack_68,0xc,6,0);
      func_0016898C(*(int *)(param_1 + 0x410),puVar1);
    }
    puVar2 = (ushort *)(*(int *)(param_1 + 0x510) + 0x38);
    *puVar2 = *puVar2 & 0xfffe;
  }
  return;
}

