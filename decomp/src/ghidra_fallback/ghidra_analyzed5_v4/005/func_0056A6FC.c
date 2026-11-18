#include "ghidra_types.h"

extern int func_0056ED08(short *param_1,uint param_2);
extern int func_0056EDBC(int param_1,uint param_2);
extern int func_0056EE00(int param_1);
extern int func_0056EE0C(int param_1);
extern int func_0056EE18(int param_1);
extern int func_0056EE44(int param_1);
extern int func_0056EE80(int param_1);
extern int func_0056EEA8(int param_1);
extern int func_0056EED4(int param_1);
extern int func_0056EEEC(int param_1);
extern int func_0056EF18(int param_1);
extern float func_0056EF40(int param_1);
extern int func_0056EFB4(int param_1);
extern int func_0056EFDC(short *param_1,uint param_2);
extern int func_0058FB74(undefined4 *param_1,undefined4 *param_2);

// USA 0056A6FC <- EU 0056A6D4 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 uint

undefined4 func_0056A6FC(int param_1,uint *param_2,uint param_3,uint param_4,uint param_5)

{
  int *piVar1;
  short *psVar2;
  byte *pbVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  undefined1 *puVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  uint uVar10;
  uint uVar11;
  float fVar12;
  
  if (*(char *)(param_1 + 8) == '\0') {
    return 0;
  }
  if ((-1 < (int)param_3) &&
     (piVar1 = (int *)func_0056EE0C(*(int *)(param_1 + 4)), (int)param_3 < *piVar1)) {
    psVar2 = (short *)func_0056EDBC(*(int *)(param_1 + 4),param_3);
    if (psVar2 == (short *)0x0) {
      return 0;
    }
    pbVar3 = func_0056ED08(psVar2,param_4);
    if (pbVar3 == (byte *)0x0) {
      return 0;
    }
    puVar4 = (uint *)func_0056EFDC((short *)pbVar3,param_5);
    if (puVar4 == (uint *)0x0) {
      return 0;
    }
    uVar11 = *puVar4;
    puVar5 = (uint *)func_0056EE00(*(int *)(param_1 + 4));
    uVar10 = *puVar5;
    if (uVar11 < uVar10) {
      puVar6 = puVar5 + uVar11 * 2 + 1;
      if (puVar6 != (uint *)0x0) {
        uVar10 = puVar5[uVar11 * 2 + 2];
      }
      if (puVar6 != (uint *)0x0 && uVar10 != 0xffffffff) {
        *param_2 = *puVar6;
        param_2[1] = puVar5[uVar11 * 2 + 2];
        puVar7 = (undefined1 *)func_0056EED4((int)puVar4);
        if (puVar7 == (undefined1 *)0x0) {
          uVar10 = func_0056EE80((int)puVar4);
          *(char *)((int)param_2 + 0x11) = (char)uVar10;
          uVar10 = func_0056EFB4((int)puVar4);
          *(char *)((int)param_2 + 0x12) = (char)uVar10;
          uVar10 = func_0056EF18((int)puVar4);
          *(char *)((int)param_2 + 0x13) = (char)uVar10;
          fVar12 = func_0056EF40((int)puVar4);
          param_2[2] = (uint)ALBW_AS_U32(fVar12);
          uVar8 = func_0056EEA8((int)puVar4);
          *(char *)(param_2 + 5) = (char)uVar8;
          uVar10 = func_0056EE18((int)puVar4);
          *(char *)((int)param_2 + 0x15) = (char)uVar10;
          uVar10 = func_0056EEEC((int)puVar4);
          *(char *)((int)param_2 + 0x16) = (char)uVar10;
          puVar9 = (undefined4 *)func_0056EE44((int)puVar4);
          func_0058FB74(param_2 + 3,puVar9);
        }
        else {
          *(undefined1 *)((int)param_2 + 0x11) = *puVar7;
          *(undefined1 *)((int)param_2 + 0x12) = puVar7[4];
          *(undefined1 *)((int)param_2 + 0x13) = puVar7[8];
          param_2[2] = *(uint *)(puVar7 + 0xc);
          *(undefined1 *)(param_2 + 5) = puVar7[0x10];
          *(undefined1 *)((int)param_2 + 0x15) = puVar7[0x11];
          *(undefined1 *)((int)param_2 + 0x16) = puVar7[0x12];
          func_0058FB74(param_2 + 3,(undefined4 *)(puVar7 + 0x20));
        }
        return 1;
      }
    }
  }
  return 0;
}

