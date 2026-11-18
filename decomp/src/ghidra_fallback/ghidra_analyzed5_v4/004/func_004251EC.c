#include "ghidra_types.h"

extern int func_00231598(int param_1);
extern int func_003FFE6C(int param_1,undefined4 *param_2);
extern int func_005228DC(int param_1,int param_2);
extern int func_00533078(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0066C0CC(undefined4 *param_1,char param_2);
extern int *DAT_004252f4;
extern float DAT_004252f8;
extern int *DAT_004252fc;
extern int DAT_00425318;
extern char s_SE_S_ITEM_SLIDER_MOVE_00425300[];

// USA 004251EC <- EU 004251CC (Ghidra, non-matching)
// GLOBAL DAT_004252f4 int *
// GLOBAL DAT_004252f8 float
// GLOBAL DAT_004252fc int *
// GLOBAL DAT_00425318 int
// GLOBAL s_SE_S_ITEM_SLIDER_MOVE_00425300 string

undefined4 func_004251EC(int param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  float fVar4;
  uint uVar5;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define uStack_24 (*(undefined4 *)(albw_frame + 0xc))
  #define local_20 (*(undefined4 *)(albw_frame + 0x10))
  #define local_18 (*(int *)(albw_frame + 0x18))
  #define local_14 (*(char * *)(albw_frame + 0x1c))
  piVar1 = DAT_004252f4;
  bVar2 = func_005228DC(*DAT_004252f4,*(int *)(param_1 + 0x10));
  if (bVar2) {
    iVar3 = *(int *)(**(int **)(param_1 + 0x1c) + 0x10);
    local_20 = *(undefined4 *)(iVar3 + 0x24);
    uStack_24 = *(undefined4 *)(iVar3 + 0x20);
    fVar4 = *(float *)(*piVar1 + 0x10) - *(float *)(param_1 + 0x68);
    local_28 = *(float *)(param_1 + 0x54);
    if ((local_28 <= fVar4) && (local_28 = fVar4, *(float *)(param_1 + 100) < fVar4)) {
      local_28 = *(float *)(param_1 + 100);
    }
    func_003FFE6C(*(int *)(**(int **)(param_1 + 0x1c) + 0x10),&local_28);
    fVar4 = DAT_004252f8;
    *(byte *)(*(int *)(param_1 + 0x1c) + 0x70) = *(byte *)(*(int *)(param_1 + 0x1c) + 0x70) | 2;
    uVar5 = (uint)(((local_28 - *(float *)(param_1 + 0x54)) + *(float *)(param_1 + 0x6c) * fVar4) /
                  *(float *)(param_1 + 0x6c));
    if (*(byte *)(param_1 + 0x78) != uVar5) {
      *(char *)(param_1 + 0x78) = (char)uVar5;
      func_00231598(*(int *)(param_1 + 0x44));
      *(undefined1 *)(*DAT_004252fc + 0x23a) = *(undefined1 *)(param_1 + 0x78);
      local_14 = s_SE_S_ITEM_SLIDER_MOVE_00425300;
      local_18 = DAT_00425318;
      func_00533078(param_1,&local_18,0);
    }
    return 0;
  }
  return func_0066C0CC((undefined4 *)(param_1 + 0x20),'\x05');
}

