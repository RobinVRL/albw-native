#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00111A64(uint *param_1);
extern int func_00513B74(int param_1,float *param_2,undefined4 param_3,undefined4 param_4);
extern int func_0054B9D8(void);
extern int *DAT_00310f18;
extern int DAT_00310f1c;
extern uint *DAT_00310f20;
extern int *DAT_00310f24;
extern undefined4 DAT_00310f28;
extern undefined4 DAT_00310f2c;
extern undefined4 DAT_00310f30;
extern undefined4 DAT_00310f34;
extern undefined4 *DAT_00310f38;

// USA 00310D9C <- EU 00310D78 (Ghidra, non-matching)
// GLOBAL DAT_00310f18 int *
// GLOBAL DAT_00310f1c int
// GLOBAL DAT_00310f20 uint *
// GLOBAL DAT_00310f24 int *
// GLOBAL DAT_00310f28 undefined4
// GLOBAL DAT_00310f2c undefined4
// GLOBAL DAT_00310f30 undefined4
// GLOBAL DAT_00310f34 undefined4
// GLOBAL DAT_00310f38 undefined4 *

void func_00310D9C(int param_1)

{
  uint *puVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  uint in_fpscr;
  float fVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_48 (*(float *)(albw_frame + 0x8))
  #define uStack_44 (*(undefined4 *)(albw_frame + 0xc))
  #define local_40 (*(float *)(albw_frame + 0x10))
  puVar9 = *(undefined4 **)(*DAT_00310f18 + 0x3dbc8);
  puVar8 = *(undefined4 **)(*DAT_00310f18 + 0x3dbc0);
  iVar4 = func_0054B9D8();
  uVar3 = DAT_00310f34;
  piVar2 = DAT_00310f24;
  puVar1 = DAT_00310f20;
  iVar4 = (int)((ulonglong)((longlong)DAT_00310f1c * (longlong)iVar4) >> 0x20);
  uVar5 = ((iVar4 >> 2) - (iVar4 >> 0x1f)) - 1;
  if ((int)uVar5 < 0) {
    uVar5 = 0;
  }
  else if (9 < (int)uVar5) {
    uVar5 = 9;
  }
  puVar7 = (undefined4 *)(param_1 + 0xa04);
  if (uVar5 < 10) {
    puVar7 = (undefined4 *)(param_1 + 0xa04 + uVar5 * 0xc);
  }
  uVar13 = *(undefined8 *)(puVar7 + 1);
  if (puVar8 != puVar9) {
    uVar12 = CONCAT44(*puVar7,DAT_00310f2c);
    uVar11 = CONCAT44(DAT_00310f30,DAT_00310f28);
    do {
      puVar7 = (undefined4 *)*puVar8;
      if (((*puVar1 & 1) == 0) && (iVar4 = func_00100174((int *)DAT_00310f20), iVar4 != 0)) {
        *DAT_00310f38 = uVar3;
      }
      if ((puVar7 == (undefined4 *)0x0) ||
         (iVar4 = (**(code **)*puVar7)(puVar7,DAT_00310f38), iVar4 == 0)) {
        puVar7 = (undefined4 *)0x0;
      }
      if (puVar7 != (undefined4 *)0x0) {
        uVar5 = func_00111A64((uint *)(*piVar2 + 0x660));
        local_48 = ALBW_AS_F32(((ulonglong)uVar12 >> 0x20));
        uStack_44 = (undefined4)uVar13;
        local_40 = ALBW_AS_F32(((ulonglong)uVar13 >> 0x20));
        uVar6 = func_00111A64((uint *)(*piVar2 + 0x660));
        fVar10 = (float)VectorUnsignedToFloat(uVar6,(byte)(in_fpscr >> 0x15) & 3);
        local_48 = (ALBW_AS_F32(((ulonglong)uVar11 >> 0x20)) - fVar10 * ALBW_AS_F32(uVar12) * ALBW_AS_F32(uVar11)) +
                   local_48;
        uVar6 = func_00111A64((uint *)(*piVar2 + 0x660));
        fVar10 = (float)VectorUnsignedToFloat(uVar6,(byte)(in_fpscr >> 0x15) & 3);
        local_40 = (ALBW_AS_F32(((ulonglong)uVar11 >> 0x20)) - fVar10 * ALBW_AS_F32(uVar12) * ALBW_AS_F32(uVar11)) +
                   local_40;
        func_00513B74((int)puVar7,&local_48,(int)((ulonglong)uVar5 * 0x1e >> 0x20),100);
      }
      puVar8 = puVar8 + 1;
    } while (puVar8 != puVar9);
  }
  return;
}

