#include "ghidra_types.h"

extern int func_0010BEB4(int param_1,int *param_2);
extern int func_001151EC(undefined4 *param_1,undefined4 *param_2);
extern int func_004CEAF0(int param_1);
extern int DAT_002d4a4c;
extern undefined4 DAT_002d4a50;
extern float DAT_002d4a54;

// USA 002D48B4 <- EU 002D4890 (Ghidra, non-matching)
// GLOBAL DAT_002d4a4c int
// GLOBAL DAT_002d4a50 undefined4
// GLOBAL DAT_002d4a54 float

undefined4 func_002D48B4(undefined4 *param_1,int param_2,int param_3,undefined4 *param_4)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  code *pcVar5;
  int iVar6;
  int iVar7;
  uint in_fpscr;
  undefined4 in_s0;
  float fVar8;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(int *)(albw_frame + 0x8))
  #define local_24 (*(int *)(albw_frame + 0xc))
  iVar2 = (int)*(char *)(param_1 + 1);
  if (param_2 == 0) {
    iVar7 = 3;
  }
  else {
    iVar7 = 1;
  }
  if (iVar2 != iVar7) {
    if (iVar2 != -1) {
      iVar6 = param_1[8];
      pcVar5 = *(code **)(iVar6 + iVar2 * 8);
      if ((pcVar5 != (code *)0x0) ||
         (uVar3 = *(uint *)(iVar6 + iVar2 * 8 + 4), (uVar3 & 1) != 0 && uVar3 != 0)) {
        uVar3 = *(uint *)(iVar6 + iVar2 * 8 + 4);
        piVar4 = (int *)(param_1[5] + ((int)uVar3 >> 1));
        if ((uVar3 & 1) != 0) {
          pcVar5 = *(code **)(pcVar5 + *piVar4);
        }
        (*pcVar5)(piVar4,iVar7);
      }
    }
    uVar1 = *(undefined1 *)(param_1 + 1);
    *(char *)(param_1 + 1) = (char)iVar7;
    *param_1 = 0;
    *(undefined1 *)((int)param_1 + 5) = uVar1;
    if (param_1[4] != 0) {
      if ((uint)(int)*(char *)(param_1 + 1) < (uint)param_1[2]) {
        piVar4 = (int *)(param_1[3] + *(char *)(param_1 + 1) * 0x24);
      }
      else {
        piVar4 = (int *)param_1[3];
      }
      (**(code **)(*piVar4 + 8))(piVar4);
      local_24 = piVar4[1];
      local_28 = DAT_002d4a4c;
      func_0010BEB4(param_1[4],&local_28);
    }
    iVar7 = (int)*(char *)(param_1 + 1);
    iVar2 = param_1[6];
    pcVar5 = *(code **)(iVar2 + iVar7 * 8);
    if ((pcVar5 != (code *)0x0) ||
       ((uVar3 = *(uint *)(iVar2 + iVar7 * 8 + 4), (uVar3 & 1) != 0 && (uVar3 != 0)))) {
      uVar3 = *(uint *)(iVar2 + iVar7 * 8 + 4);
      if ((uVar3 & 1) != 0) {
        pcVar5 = *(code **)(pcVar5 + *(int *)(param_1[5] + ((int)uVar3 >> 1)));
      }
      (*pcVar5)((int)(param_1[5]) + ((int)uVar3 >> 1));
    }
    if (param_3 == 0) {
      in_s0 = DAT_002d4a50;
    }
    param_1[0xc] = param_3;
    if (param_3 == 0) {
      param_1[0xd] = in_s0;
    }
    else {
      fVar8 = (float)VectorUnsignedToFloat(param_3,(byte)(in_fpscr >> 0x15) & 3);
      param_1[0xd] = ALBW_AS_U32(DAT_002d4a54 / fVar8);
    }
    param_1[0xb] = 0;
    iVar2 = param_1[9];
    *(uint *)(iVar2 + 0x164) = *(uint *)(iVar2 + 0x164) | 0x40000000;
    func_001151EC((undefined4 *)(iVar2 + 0x80),param_4);
    return func_004CEAF0(param_1[9]);
  }
  return 0;
}

