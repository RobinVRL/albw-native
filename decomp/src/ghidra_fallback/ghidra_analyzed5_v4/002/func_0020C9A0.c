#include "ghidra_types.h"

extern int func_0036BE78();
extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern int func_0058A8F0(int param_1);
extern undefined8 func_0058AB74(int param_1);
extern int func_0065D630(undefined4 *param_1,undefined1 param_2);
extern float DAT_0020ca70;
extern undefined4 DAT_0020ca74;
extern int DAT_0020ca78;
extern float DAT_0020ca7c;

// USA 0020C9A0 <- EU 0020C9A0 (Ghidra, non-matching)
// GLOBAL DAT_0020ca70 float
// GLOBAL DAT_0020ca74 undefined4
// GLOBAL DAT_0020ca78 int
// GLOBAL DAT_0020ca7c float

undefined4 func_0020C9A0(int param_1)

{
  float fVar1;
  int iVar2;
  float fVar3;
  undefined8 uVar4;
  
  fVar1 = DAT_0020ca70;
  *(undefined4 *)(param_1 + 0x574) = DAT_0020ca74;
  *(float *)(param_1 + 0x3d4) = fVar1;
  fVar3 = DAT_0020ca7c;
  *(undefined4 *)(param_1 + 0xd24) = *(undefined4 *)(param_1 + 0xb84);
  *(undefined4 *)(param_1 + 0xd28) = *(undefined4 *)(param_1 + 0xb88);
  iVar2 = DAT_0020ca78;
  *(undefined4 *)(param_1 + 0xd2c) = *(undefined4 *)(param_1 + 0xb8c);
  *(int *)(param_1 + 0xd1c) = iVar2 + *(int *)(param_1 + 0xd1c);
  fVar3 = *(float *)(param_1 + 0xd20) - fVar3;
  if (fVar3 < fVar1) {
    fVar3 = fVar1;
  }
  *(float *)(param_1 + 0xd20) = fVar3;
  func_0036BE78(param_1 + 0xa7c);
  uVar4 = func_0058AB74(param_1);
  if ((int)uVar4 == 6) {
    iVar2 = func_0058A8F0(param_1);
    if (iVar2 != 0) {
      return func_004FC07C(param_1,0,6,0);
    }
  }
  else if ((int)(uint)*(ushort *)(param_1 + 0xda0) < *(int *)(param_1 + 0x8bc)) {
    func_0065D630((undefined4 *)(param_1 + 0x8bc),7);
  }
  return 0;
}

