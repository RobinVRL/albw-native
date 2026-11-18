#include "ghidra_types.h"

extern int func_004ED00C(undefined4 *param_1,uint *param_2);
extern undefined4 DAT_0032394c;
extern int DAT_00323950;
extern undefined4 *DAT_00323954;
extern undefined4 *DAT_00323958;
extern undefined4 *DAT_0032395c;
extern undefined4 *DAT_00323960;
extern undefined4 DAT_00323964;
extern undefined4 DAT_00323968;

// USA 00323864 <- EU 00323840 (Ghidra, non-matching)
// GLOBAL DAT_0032394c undefined4
// GLOBAL DAT_00323950 int
// GLOBAL DAT_00323954 undefined4 *
// GLOBAL DAT_00323958 undefined4 *
// GLOBAL DAT_0032395c undefined4 *
// GLOBAL DAT_00323960 undefined4 *
// GLOBAL DAT_00323964 undefined4
// GLOBAL DAT_00323968 undefined4

undefined4 func_00323864(undefined4 *param_1,uint *param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar7;
  bool bVar8;
  undefined4 *puVar6;
  
  puVar4 = func_004ED00C(param_1,param_2);
  uVar7 = DAT_0032394c;
  puVar4[0xcb] = 0;
  *puVar4 = uVar7;
  iVar2 = DAT_00323950;
  puVar4[0xcc] = 0;
  *(undefined1 *)(puVar4 + 0xcd) = 0;
  *(undefined1 *)((int)puVar4 + 0x335) = 0;
  puVar4[0xce] = 0;
  *(undefined2 *)(iVar2 + (int)puVar4) = 0;
  uVar7 = DAT_00323964;
  puVar4[200] = puVar4[2];
  uVar3 = DAT_00323968;
  puVar4[0xc9] = puVar4[3];
  puVar4[0xca] = puVar4[4];
  *(bool *)(puVar4 + 0xcd) = *(short *)(puVar4 + 0xb) != 0;
  bVar8 = *(short *)((int)param_2 + 0x2a) == 1;
  bVar1 = !bVar8;
  *(bool *)((int)puVar4 + 0x335) = bVar8;
  puVar6 = DAT_00323954;
  if (bVar1) {
    puVar6 = DAT_00323958;
  }
  puVar4[0xcf] = 0x5a;
  puVar4[0xd0] = 0x78;
  puVar4[0xd1] = *puVar6;
  puVar6 = DAT_0032395c;
  if (bVar1) {
    puVar6 = DAT_00323960;
  }
  uVar5 = *puVar6;
  puVar4[0xd2] = uVar5;
  if (!bVar1) {
    uVar5 = 0x5a;
  }
  puVar4[0xd3] = uVar7;
  puVar4[0xd4] = uVar3;
  if (bVar1) {
    uVar5 = 100;
  }
  puVar4[0xd5] = uVar5;
  if (bVar1) {
    uVar7 = 0;
  }
  else {
    uVar7 = 10;
  }
  puVar4[0xd7] = 0;
  puVar4[0xd6] = uVar7;
  puVar4[0xd8] = 0;
  puVar4[0xd9] = 0;
  if (bVar1) {
    uVar7 = 2;
  }
  else {
    uVar7 = 0;
  }
  puVar4[0xda] = 0;
  puVar4[0xdb] = uVar7;
  if (bVar1) {
    uVar7 = 1;
  }
  else {
    uVar7 = 2;
  }
  puVar4[0xdc] = uVar7;
  puVar4[0xdd] = (uint)!bVar1;
  puVar4[0xde] = 0;
  puVar4[0xdf] = 0xe;
  return (undefined4)param_1;
}

