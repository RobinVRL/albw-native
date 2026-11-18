#include "ghidra_types.h"

extern int func_00231340(short *param_1);
extern int func_002313DC(int param_1);
extern int func_00231448(int param_1);
extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_0045F76C(int param_1);
extern int func_0045FCE4(int param_1);
extern int func_0066DA28(undefined4 *param_1,undefined1 param_2);
extern float DAT_0045ffa4;
extern float DAT_0045ffa8;

// USA 0045FE0C <- EU 0045FDE4 (Ghidra, non-matching)
// GLOBAL DAT_0045ffa4 float
// GLOBAL DAT_0045ffa8 float

undefined4 func_0045FE0C(int param_1)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  bool bVar4;
  float fparam_0;
  
  iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + 0xc);
  if ((uint)(int)*(short *)(param_1 + 0x102) < *(uint *)(*(int *)(param_1 + 0x1c) + 8)) {
    iVar3 = iVar3 + *(short *)(param_1 + 0x102) * 0x38;
  }
  if (*(char *)(iVar3 + 0x28) != '\0') {
    return 0;
  }
  if (*(float *)(iVar3 + 0x1c) < DAT_0045ffa4) {
    if (DAT_0045ffa4 < *(float *)(iVar3 + 0x14)) {
      return 0;
    }
  }
  else if (*(float *)(iVar3 + 0x14) != *(float *)(iVar3 + 0x20)) {
    return 0;
  }
  cVar1 = *(char *)(param_1 + 0x124) + -1;
  *(char *)(param_1 + 0x124) = cVar1;
  if (cVar1 < '\0') {
    *(char *)(param_1 + 0x124) = (char)*(undefined4 *)(param_1 + 0xd0) + -1;
  }
  func_0045F76C(param_1);
  iVar3 = *(int *)(param_1 + 0xa8);
  fparam_0 = DAT_0045ffa8;
  func_00231448(iVar3 + 0x70);
  *(undefined4 *)(iVar3 + 0x78) = *(undefined4 *)(iVar3 + 0x1c);
  *(undefined2 *)(iVar3 + 0x72) = 0;
  *(undefined2 *)(iVar3 + 0x70) = 2;
  func_002317C0((undefined2 *)(iVar3 + 0x70),fparam_0);
  func_00231340((short *)(iVar3 + 0x70));
  iVar3 = *(int *)(param_1 + 0xac);
  func_00231448(iVar3 + 0x70);
  *(undefined4 *)(iVar3 + 0x78) = *(undefined4 *)(iVar3 + 0x1c);
  *(undefined2 *)(iVar3 + 0x72) = 0;
  *(undefined2 *)(iVar3 + 0x70) = 0;
  func_002317C0((undefined2 *)(iVar3 + 0x70),fparam_0);
  func_00231340((short *)(iVar3 + 0x70));
  func_002313DC(param_1 + 0x100);
  if ((*(short *)(*(int *)(param_1 + 0xa8) + 0x7e) == 2) || (-1 < *(char *)(param_1 + 0x125))) {
    if (*(char *)(param_1 + 0x125) != '\0') goto LAB_0045ff44;
  }
  else {
    *(undefined1 *)(param_1 + 0x125) = 0;
  }
  *(undefined1 *)(param_1 + 0x127) = 0;
LAB_0045ff44:
  func_0045FCE4(param_1);
  uVar2 = (ushort)*(byte *)(param_1 + 0x11c);
  bVar4 = uVar2 != 1;
  if (!bVar4) {
    uVar2 = *(ushort *)(param_1 + 0x11e);
  }
  if (((bVar4 || uVar2 != 0) || (*(short *)(*(int *)(param_1 + 0xa8) + 0x7e) != 2)) &&
     (-1 < *(char *)(param_1 + 0x125))) {
    return func_0066DA28((undefined4 *)(param_1 + 0x74),0);
  }
  return func_0066DA28((undefined4 *)(param_1 + 0x74),1);
}

