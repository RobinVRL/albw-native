#include "ghidra_types.h"

extern int func_0012C790(int param_1);
extern int func_00231448(int param_1);
extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_002C00A8(int param_1);
extern int func_00448FD0(int param_1);
extern int func_004727B8(int param_1,int param_2);
extern int func_0047E8C4(int param_1,int param_2,int param_3);
extern float DAT_00445f98;

// USA 00445EDC <- EU 00445EB4 (Ghidra, non-matching)
// GLOBAL DAT_00445f98 float

/* WARNING: Removing unreachable block (ram,0x00445f10) */
/* WARNING: Removing unreachable block (ram,0x00445f20) */

void func_00445EDC(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  ushort *puVar2;
  int *piVar3;
  uint uVar4;
  float fparam_0;
  ulonglong uVar5;
  
  *(undefined1 *)(param_1 + 0x292) = 1;
  uVar5 = (ulonglong)(uint)ALBW_AS_U32(DAT_00445f98);
  fparam_0 = DAT_00445f98;
  if (*(char *)(*(int *)(param_1 + 0x210) + 0x5d) == '\0') {
    func_00231448(param_1 + 0xf8);
    func_002317C0((undefined2 *)(param_1 + 0x104),ALBW_AS_F32(uVar5));
    func_004727B8(*(int *)(param_1 + 0x20c),0);
    func_002C00A8(*(int *)(param_1 + 0x14));
    iVar1 = *(int *)(param_1 + 0x14);
    *(undefined4 *)(iVar1 + 4) = 0;
    puVar2 = (ushort *)(iVar1 + 0x16);
    *puVar2 = *puVar2 & 0xffbf;
    func_0012C790(*(int *)(param_1 + 0x214));
    if (*(char *)(param_1 + 0x208) != '\0') {
      func_00448FD0(param_1);
    }
    uVar4 = 0;
    do {
      piVar3 = (int *)(param_1 + 0x188);
      if (uVar4 < 4) {
        piVar3 = piVar3 + uVar4;
      }
      func_0012C790(*piVar3);
      fparam_0 = ALBW_AS_F32(uVar5);
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < 4);
  }
  func_00231448(param_1 + 0x110);
  func_002317C0((undefined2 *)(param_1 + 0x11c),fparam_0);
  func_0047E8C4(*(int *)(param_1 + 0x210),0,0);
  *(undefined1 *)(param_1 + 0x284) = 0;
  return;
}

