#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00120FBC(int param_1,undefined4 *param_2,float *param_3,undefined4 *param_4,undefined4 param_5, int param_6,float *param_7);
extern int func_005841A8(int param_1,undefined4 param_2,int *param_3);
extern int *DAT_00390b18;
extern undefined4 *DAT_00390b1c;
extern int DAT_00390b20;
extern uint *DAT_00390b24;
extern undefined4 *DAT_00390b28;
extern undefined4 DAT_00390b2c;
extern undefined4 *DAT_00390b30;
extern int *DAT_00390b34;
extern float DAT_00390b38;
extern undefined4 DAT_00390b3c;

// USA 003909C8 <- EU 003909A4 [EDITED REGION: check by hand] (Ghidra, non-matching)
// GLOBAL DAT_00390b18 int *
// GLOBAL DAT_00390b1c undefined4 *
// GLOBAL DAT_00390b20 int
// GLOBAL DAT_00390b24 uint *
// GLOBAL DAT_00390b28 undefined4 *
// GLOBAL DAT_00390b2c undefined4
// GLOBAL DAT_00390b30 undefined4 *
// GLOBAL DAT_00390b34 int *
// GLOBAL DAT_00390b38 float
// GLOBAL DAT_00390b3c undefined4

undefined4 func_003909C8(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_1c (*(float *)(albw_frame + 0x4))
  #define uStack_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(float *)(albw_frame + 0xc))
  *(uint *)(param_1 + 0x2e0) = *(uint *)(param_1 + 0x2e0) & 0xfffffffd;
  piVar1 = DAT_00390b18;
  *(undefined1 *)(param_1 + 0x41d) = 0;
  puVar2 = (undefined4 *)func_005841A8(*piVar1,*DAT_00390b1c,*(int **)(DAT_00390b20 + *piVar1));
  puVar2 = (undefined4 *)*puVar2;
  if (((*DAT_00390b24 & 1) == 0) && (iVar3 = func_00100174((int *)DAT_00390b24), iVar3 != 0)) {
    *DAT_00390b28 = DAT_00390b2c;
  }
  if ((puVar2 == (undefined4 *)0x0) ||
     (iVar3 = (**(code **)*puVar2)(puVar2,DAT_00390b28), iVar3 == 0)) {
    puVar2 = (undefined4 *)0x0;
  }
  if (puVar2 != (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 0x4d8) = puVar2[0xb3];
    *(float *)(param_1 + 0x444) = ALBW_AS_F32(puVar2[0xf4]);
    *(undefined4 *)(param_1 + 0x448) = puVar2[0xf5];
    *(undefined4 *)(param_1 + 0x44c) = puVar2[0xf6];
  }
  puVar2 = DAT_00390b30;
  puVar4 = DAT_00390b30 + 4;
  *(undefined4 *)(param_1 + 0x45c) = *DAT_00390b30;
  *(undefined4 *)(param_1 + 0x460) = puVar2[1];
  *(undefined4 *)(param_1 + 0x464) = puVar2[2];
  *(undefined4 *)(param_1 + 0x468) = puVar2[3];
  uVar5 = puVar2[5];
  uVar6 = puVar2[6];
  *(undefined4 *)(param_1 + 0x46c) = *puVar4;
  *(undefined4 *)(param_1 + 0x470) = uVar5;
  *(undefined4 *)(param_1 + 0x474) = uVar6;
  uStack_18 = DAT_00390b3c;
  local_1c = DAT_00390b38;
  *(undefined4 *)(param_1 + 0x478) = puVar2[7];
  *(undefined4 *)(param_1 + 0x47c) = puVar2[8];
  *(undefined4 *)(param_1 + 0x480) = puVar2[9];
  *(undefined2 *)(param_1 + 0x484) = *(undefined2 *)(puVar2 + 10);
  *(undefined2 *)(param_1 + 0x486) = *(undefined2 *)((int)puVar2 + 0x2a);
  local_14 = local_1c;
  return func_00120FBC(*(int *)(*DAT_00390b34 + 0x18),(undefined4 *)(param_1 + 0x40c),
                (float *)(param_1 + 0x444),(undefined4 *)(param_1 + 0x45c),
                (uint)*(ushort *)(param_1 + 0x484),0,&local_1c);
}

