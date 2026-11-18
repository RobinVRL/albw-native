#include "ghidra_types.h"

extern undefined8 func_00110D44(undefined4 *param_1,byte *param_2,uint param_3);
extern uint DAT_005651d4;
extern uint DAT_005651d8;

// USA 00565130 <- EU 00565108 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 uint
// GLOBAL DAT_005651d4 uint
// GLOBAL DAT_005651d8 uint

undefined8
func_00565130(undefined4 param_1,undefined4 *param_2,int param_3,int param_4,uint param_5)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  char *pcVar9;
  undefined8 uVar10;
  
  uVar4 = DAT_005651d8;
  uVar3 = DAT_005651d4;
  uVar6 = (uint)*(ushort *)(param_3 + 0x22);
  pcVar9 = (char *)(*(int *)(param_4 + 8) + uVar6 * 0x218);
  pcVar5 = (char *)(*(int *)(param_4 + 8) + uVar6 * 0x218);
  cVar1 = *pcVar9;
  puVar7 = (uint *)*param_2;
  cVar2 = pcVar9[1];
  if (uVar6 == param_5) {
    uVar6 = 0;
    if (cVar1 != '\0') {
      uVar6 = 5;
    }
    uVar6 = uVar6 | (uint)(cVar2 != '\0') << 0x10;
    *puVar7 = uVar6;
    puVar7[1] = uVar3;
    puVar7[2] = *(uint *)(pcVar5 + 2) & 0xffffff;
    puVar7[3] = uVar4;
    *param_2 = puVar7 + 4;
  }
  else {
    uVar6 = 0;
    if (cVar1 != '\0') {
      uVar6 = 5;
    }
    *puVar7 = uVar6 | (uint)(cVar2 != '\0') << 0x10;
    puVar7[1] = uVar3;
    puVar7[2] = *(uint *)(pcVar5 + 2) & 0xffffff;
    puVar7[3] = uVar4;
    puVar8 = puVar7 + 4;
    uVar6 = 0;
    if (*pcVar5 != '\0') {
      uVar10 = func_00110D44(puVar8,(byte *)(pcVar5 + 8),0x210);
      uVar6 = (uint)((ulonglong)uVar10 >> 0x20);
      puVar8 = puVar7 + 0x88;
    }
    *param_2 = puVar8;
  }
  return CONCAT44(uVar6,(uint)*(ushort *)(param_3 + 0x22));
}

