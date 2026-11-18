#include "ghidra_types.h"

extern int func_00120FBC(int param_1,undefined4 *param_2,float *param_3,undefined4 *param_4,undefined4 param_5, int param_6,float *param_7);
extern undefined4 *DAT_00390950;
extern int *DAT_00390954;
extern undefined4 *DAT_00390958;
extern int DAT_0039095c;
extern float DAT_00390960;
extern undefined4 DAT_00390964;

// USA 0039088C <- EU 00390868 [EDITED REGION: check by hand] (Ghidra, non-matching)
// GLOBAL DAT_00390950 undefined4 *
// GLOBAL DAT_00390954 int *
// GLOBAL DAT_00390958 undefined4 *
// GLOBAL DAT_0039095c int
// GLOBAL DAT_00390960 float
// GLOBAL DAT_00390964 undefined4

undefined4 func_0039088C(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_1c (*(float *)(albw_frame + 0x4))
  #define uStack_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(float *)(albw_frame + 0xc))
  puVar1 = DAT_00390950;
  *(undefined4 *)(param_1 + 0x444) = *DAT_00390950;
  *(undefined4 *)(param_1 + 0x448) = puVar1[1];
  *(undefined4 *)(param_1 + 0x44c) = puVar1[2];
  puVar1 = DAT_00390958;
  iVar3 = *(int *)(*DAT_00390954 + 0x18);
  *(undefined4 *)(param_1 + 0x45c) = *DAT_00390958;
  *(undefined4 *)(param_1 + 0x460) = puVar1[1];
  *(undefined4 *)(param_1 + 0x464) = puVar1[2];
  *(undefined4 *)(param_1 + 0x468) = puVar1[3];
  uVar4 = puVar1[5];
  uVar5 = puVar1[6];
  *(undefined4 *)(param_1 + 0x46c) = puVar1[4];
  *(undefined4 *)(param_1 + 0x470) = uVar4;
  *(undefined4 *)(param_1 + 0x474) = uVar5;
  uStack_18 = DAT_00390964;
  local_1c = DAT_00390960;
  *(undefined4 *)(param_1 + 0x478) = puVar1[7];
  *(undefined4 *)(param_1 + 0x47c) = puVar1[8];
  *(undefined4 *)(param_1 + 0x480) = puVar1[9];
  *(undefined2 *)(param_1 + 0x484) = *(undefined2 *)(puVar1 + 10);
  *(undefined2 *)(param_1 + 0x486) = *(undefined2 *)((int)puVar1 + 0x2a);
  iVar2 = DAT_0039095c;
  *(undefined4 *)(param_1 + 0x464) = *(undefined4 *)(iVar3 + 0x1a8);
  local_14 = local_1c;
  return func_00120FBC(iVar3,(undefined4 *)(param_1 + 0x414),(float *)(param_1 + 0x444),
                (undefined4 *)(param_1 + 0x45c),(uint)*(ushort *)(iVar2 + param_1),0,&local_1c);
}

