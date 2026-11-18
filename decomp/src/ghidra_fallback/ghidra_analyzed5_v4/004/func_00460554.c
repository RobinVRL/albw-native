#include "ghidra_types.h"

extern int func_00231340(short *param_1);
extern int func_002313DC(int param_1);
extern int func_00231448(int param_1);
extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_0045F76C(int param_1);
extern int func_0045FCE4(int param_1);
extern int func_0066DA28(undefined4 *param_1,undefined1 param_2);
extern float DAT_004606e0;
extern float DAT_004606e4;

// USA 00460554 <- EU 0046052C (Ghidra, non-matching)
// GLOBAL DAT_004606e0 float
// GLOBAL DAT_004606e4 float

undefined4 func_00460554(int param_1)

{
  uint uVar1;
  char cVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  float fparam_0;
  
  iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + 0xc);
  if ((uint)(int)*(short *)(param_1 + 0x102) < *(uint *)(*(int *)(param_1 + 0x1c) + 8)) {
    iVar4 = iVar4 + *(short *)(param_1 + 0x102) * 0x38;
  }
  if (*(char *)(iVar4 + 0x28) == '\0') {
    if (*(float *)(iVar4 + 0x1c) < DAT_004606e0) {
      if (*(float *)(iVar4 + 0x14) <= DAT_004606e0) goto LAB_004605a4;
    }
    else if (*(float *)(iVar4 + 0x14) == *(float *)(iVar4 + 0x20)) {
LAB_004605a4:
      cVar2 = *(char *)(param_1 + 0x124) + '\x01';
      *(char *)(param_1 + 0x124) = cVar2;
      if (*(int *)(param_1 + 0xd0) <= (int)cVar2) {
        *(undefined1 *)(param_1 + 0x124) = 0;
      }
      func_0045F76C(param_1);
      iVar4 = *(int *)(param_1 + 0xb0);
      fparam_0 = DAT_004606e4;
      func_00231448(iVar4 + 0x70);
      *(undefined4 *)(iVar4 + 0x78) = *(undefined4 *)(iVar4 + 0x1c);
      *(undefined2 *)(iVar4 + 0x72) = 0;
      *(undefined2 *)(iVar4 + 0x70) = 2;
      func_002317C0((undefined2 *)(iVar4 + 0x70),fparam_0);
      func_00231340((short *)(iVar4 + 0x70));
      iVar4 = *(int *)(param_1 + 0xac);
      func_00231448(iVar4 + 0x70);
      *(undefined4 *)(iVar4 + 0x78) = *(undefined4 *)(iVar4 + 0x1c);
      *(undefined2 *)(iVar4 + 0x72) = 0;
      *(undefined2 *)(iVar4 + 0x70) = 0;
      func_002317C0((undefined2 *)(iVar4 + 0x70),fparam_0);
      func_00231340((short *)(iVar4 + 0x70));
      func_002313DC(param_1 + 0x100);
      uVar5 = (uint)*(ushort *)(*(int *)(param_1 + 0xb0) + 0x7e);
      uVar6 = uVar5 - 2;
      bVar8 = uVar5 == 2;
      uVar1 = uVar5;
      if (!bVar8) {
        uVar6 = (uint)*(char *)(param_1 + 0x125);
        uVar1 = uVar6;
      }
      bVar7 = bVar8 && SBORROW4(uVar5,2);
      if ((!bVar8 && uVar1 != 0) && (int)uVar6 < 0 == bVar7) {
        *(undefined1 *)(param_1 + 0x125) = 0;
      }
      if (((!bVar8 && uVar1 != 0) && (int)uVar6 < 0 == bVar7) ||
         (*(char *)(param_1 + 0x125) == '\0')) {
        *(undefined1 *)(param_1 + 0x127) = 0;
      }
      func_0045FCE4(param_1);
      uVar3 = (ushort)*(byte *)(param_1 + 0x11c);
      bVar8 = uVar3 != 2;
      if (!bVar8) {
        uVar3 = *(ushort *)(param_1 + 0x11e);
      }
      if (((bVar8 || uVar3 != 0) || (*(short *)(*(int *)(param_1 + 0xb0) + 0x7e) != 2)) &&
         (*(char *)(param_1 + 0x125) < '\x01')) {
        return func_0066DA28((undefined4 *)(param_1 + 0x74),0);
      }
      return func_0066DA28((undefined4 *)(param_1 + 0x74),2);
    }
  }
  return 0;
}

