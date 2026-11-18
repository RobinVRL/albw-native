#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_00395E88(int *param_1);
extern int func_00395FC0(int *param_1);
extern int func_0039611C(int *param_1);
extern int func_00396678(int *param_1);
extern int func_005430D4(int param_1);
extern int func_0058A7D4(void);
extern float DAT_0039638c;
extern int DAT_00396390;

// USA 00396260 <- EU 0039623C (Ghidra, non-matching)
// GLOBAL DAT_0039638c float
// GLOBAL DAT_00396390 int

void func_00396260(int *param_1)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  
  iVar1 = func_005430D4(*param_1);
  if (iVar1 != 0) {
    puVar2 = (uint *)func_0058A7D4();
    uVar3 = func_00111A64(puVar2);
    uVar4 = VectorFloatToUnsigned(ALBW_AS_F32(param_1[1]) * DAT_0039638c,3);
    if (uVar4 < (uint)((ulonglong)uVar3 * 0x65 >> 0x20)) goto LAB_00396384;
  }
  puVar2 = (uint *)func_0058A7D4();
  uVar3 = func_00111A64(puVar2);
  if (((uint)((ulonglong)uVar3 * 0x65 >> 0x20) < 0x33) &&
     (iVar1 = func_0039611C(param_1), iVar1 != 0)) {
    return;
  }
  puVar2 = (uint *)func_0058A7D4();
  uVar3 = func_00111A64(puVar2);
  if (((uint)((ulonglong)uVar3 * 0x65 >> 0x20) < 0x33) &&
     (iVar1 = func_00395FC0(param_1), iVar1 != 0)) {
    return;
  }
  puVar2 = (uint *)func_0058A7D4();
  uVar3 = func_00111A64(puVar2);
  if (((uint)((ulonglong)uVar3 * 0x65 >> 0x20) < 0x1f) &&
     (*(int *)(*param_1 + 0xa00) < DAT_00396390)) {
    func_00395E88(param_1);
  }
  puVar2 = (uint *)func_0058A7D4();
  uVar3 = func_00111A64(puVar2);
  if (((uint)((ulonglong)uVar3 * 0x65 >> 0x20) < 0x33) &&
     (iVar1 = func_00396678(param_1), iVar1 != 0)) {
    return;
  }
  puVar2 = (uint *)func_0058A7D4();
  uVar3 = func_00111A64(puVar2);
  if ((uint)((ulonglong)uVar3 * 0x65 >> 0x20) < 0xb) {
    *(undefined1 *)((int)param_1 + 0x13) = 2;
    return;
  }
LAB_00396384:
  *(undefined1 *)((int)param_1 + 0x13) = 1;
  return;
}

