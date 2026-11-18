#include "ghidra_types.h"

extern int func_0014EEC8(int param_1,uint param_2,undefined4 *param_3,undefined4 param_4,float fparam_0);
extern int *DAT_001d4294;
extern undefined4 *DAT_001d4298;
extern undefined4 DAT_001d429c;
extern float DAT_001d42a0;
extern undefined4 DAT_001d42a4;

// USA 001D41D4 <- EU 001D41D4 (Ghidra, non-matching)
// GLOBAL DAT_001d4294 int *
// GLOBAL DAT_001d4298 undefined4 *
// GLOBAL DAT_001d429c undefined4
// GLOBAL DAT_001d42a0 float
// GLOBAL DAT_001d42a4 undefined4

void func_001D41D4(int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(undefined4 *)(albw_frame + 0x8))
  #define local_24 (*(float *)(albw_frame + 0xc))
  #define uStack_20 (*(undefined4 *)(albw_frame + 0x10))
  #define local_1c (*(undefined4 *)(albw_frame + 0x14))
  #define uStack_18 (*(undefined4 *)(albw_frame + 0x18))
  #define uStack_14 (*(undefined4 *)(albw_frame + 0x1c))
  if (*(uint *)(param_1 + 0x47c) < *(uint *)(param_1 + 0x480)) {
    *(uint *)(param_1 + 0x47c) = *(uint *)(param_1 + 0x47c) + 1;
    if (*(char *)(param_1 + 0x48d) == '\0') {
      iVar1 = (int)*(char *)(*DAT_001d4294 + 0x18);
      uVar3 = iVar1 - 2;
      bVar5 = 2 < uVar3;
      bVar4 = uVar3 == 3;
      if (3 < uVar3) {
        bVar5 = iVar1 != 0x16;
        bVar4 = iVar1 == 0x17;
      }
      if (!bVar5 || bVar4) {
        local_1c = *DAT_001d4298;
        uStack_18 = DAT_001d4298[1];
        uStack_14 = DAT_001d4298[2];
        local_28 = DAT_001d429c;
        local_24 = DAT_001d42a0;
        uStack_20 = DAT_001d429c;
        iVar1 = func_0014EEC8(param_1,(uint)&local_1c,&local_28,DAT_001d42a4,DAT_001d42a0);
        if (iVar1 != 0) goto LAB_001d426c;
      }
    }
    piVar2 = *(int **)(param_1 + 0x450);
    iVar1 = 0;
    if (piVar2 != (int *)0x0) {
      iVar1 = *piVar2;
    }
    if (piVar2 == (int *)0x0 || iVar1 == 0) {
      return;
    }
  }
LAB_001d426c:
  *(undefined1 *)(param_1 + 0x2d7) = 1;
  return;
}

