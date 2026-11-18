#include "ghidra_types.h"

extern int func_00167E04(int param_1,int param_2,uint param_3);
extern int func_00231340(short *param_1);
extern int func_0031B6A0(int param_1,int param_2,int param_3);
extern int func_003FFE6C(int param_1,undefined4 *param_2);
extern int func_0047A8C4(undefined4 param_1);
extern int func_00533078(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0066BE5C(undefined4 *param_1,char param_2);
extern int func_0066BF2C(undefined4 *param_1,char param_2);
extern int DAT_004787b0;
extern float DAT_004787b4;
extern float DAT_004787b8;
extern undefined DAT_004787bc;
extern undefined4 DAT_004787fc;
extern char s_ASE_S_ITEM_SET_CONTAINER_START_004787bf[];
extern char s_SE_S_ITEM_RETURN_00478864[];
extern char s_SE_S_ITEM_SET_BUTTON_00478800[];
extern char s_SE_S_ITEM_SET_CONTAINER_00478818[];
extern char s_SE_S_ITEM_SET_CONTAINER_END_004787e0[];
extern undefined4 _DAT_004787bc;

// USA 004784B8 <- EU 00478490 (Ghidra, non-matching)
// GLOBAL DAT_004787b0 int
// GLOBAL DAT_004787b4 float
// GLOBAL DAT_004787b8 float
// GLOBAL DAT_004787bc undefined
// GLOBAL DAT_004787fc undefined4
// GLOBAL s_ASE_S_ITEM_SET_CONTAINER_START_004787bf string
// GLOBAL s_SE_S_ITEM_RETURN_00478864 string
// GLOBAL s_SE_S_ITEM_SET_BUTTON_00478800 string
// GLOBAL s_SE_S_ITEM_SET_CONTAINER_00478818 string
// GLOBAL s_SE_S_ITEM_SET_CONTAINER_END_004787e0 string

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 func_004784B8(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  float fVar8;
  float fVar10;
  undefined8 uVar9;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(int *)(albw_frame + 0x0))
  #define local_2c (*(char * *)(albw_frame + 0x4))
  #define local_28 (*(undefined4 *)(albw_frame + 0x8))
  fVar10 = DAT_004787b4;
  iVar7 = DAT_004787b0;
  iVar2 = *(int *)(param_1 + 0x200);
  if (0x13 < (uint)(int)*(char *)(param_1 + 0x308)) {
    func_0066BF2C((undefined4 *)(iVar2 + 0x20),'\x03');
    local_2c = s_SE_S_ITEM_RETURN_00478864;
    local_30 = iVar7;
    return func_00533078(*(undefined4 *)(param_1 + 0x200),&local_30,0);
  }
  iVar5 = *(int *)(**(int **)(*(int *)(param_1 + 0x168 + *(char *)(param_1 + 0x308) * 4) + 0x1c) +
                  0x10);
  fVar8 = *(float *)(iVar5 + 100) + DAT_004787b4;
  *(undefined4 *)(iVar2 + 0xac) = *(undefined4 *)(iVar5 + 0x54);
  *(float *)(iVar2 + 0xb0) = fVar8;
  func_0066BF2C((undefined4 *)(iVar2 + 0x20),'\x03');
  uVar3 = (uint)*(char *)(param_1 + 0x308);
  piVar6 = (int *)(param_1 + 0x168);
  if (uVar3 < 0x14) {
    piVar6 = piVar6 + uVar3;
  }
  iVar2 = (int)*(char *)(*(int *)(param_1 + 0x200) + 0xb4);
  if (*(char *)(*piVar6 + 0xe0) != iVar2) {
    piVar6 = (int *)(param_1 + 0x168);
    if (uVar3 < 0x14) {
      piVar6 = piVar6 + uVar3;
    }
    if (*(char *)(*piVar6 + 0xe1) != '\0') {
      piVar6 = (int *)(param_1 + 0x168);
      if (uVar3 < 0x14) {
        piVar6 = piVar6 + uVar3;
      }
      if ((*(char *)(*piVar6 + 0x3c) != '\x02' && *(char *)(*piVar6 + 0x3c) != '\x03') &&
         (uVar3 = func_0047A8C4(iVar2), -1 < (int)uVar3)) {
        piVar6 = (int *)(param_1 + 0x168);
        if ((uint)(int)*(char *)(param_1 + 0x308) < 0x14) {
          piVar6 = piVar6 + *(char *)(param_1 + 0x308);
        }
        iVar2 = *piVar6;
        func_0066BE5C((undefined4 *)(iVar2 + 0x38),'\x02');
        func_00231340((short *)(iVar2 + 0xd4));
        if (*(char *)(param_1 + 0x30a) == '\x14') {
          iVar2 = *(int *)(**(int **)(*(int *)(param_1 + 500) + 0x1c) + 0x10);
          uVar9 = CONCAT44(*(float *)(iVar2 + 100) + ALBW_AS_F32(_DAT_004787bc),
                           *(float *)(iVar2 + 0x54) - DAT_004787b8);
          local_2c = s_SE_S_ITEM_SET_BUTTON_00478800;
          local_30 = iVar7;
          func_00533078(*(undefined4 *)(param_1 + 500),&local_30,0);
        }
        else if (*(char *)(param_1 + 0x30a) == '\x15') {
          iVar2 = *(int *)(**(int **)(*(int *)(param_1 + 0x1f8) + 0x1c) + 0x10);
          uVar9 = CONCAT44(*(float *)(iVar2 + 100) + ALBW_AS_F32(_DAT_004787bc),
                           *(float *)(iVar2 + 0x54) - DAT_004787b8);
          local_2c = s_SE_S_ITEM_SET_BUTTON_00478800;
          local_30 = iVar7;
          func_00533078(*(undefined4 *)(param_1 + 0x1f8),&local_30,0);
        }
        else {
          piVar6 = (int *)(param_1 + 0x118);
          if (uVar3 < 0x14) {
            piVar6 = piVar6 + uVar3;
          }
          iVar2 = *(int *)(**(int **)(*piVar6 + 0x1c) + 0x10);
          local_2c = s_ASE_S_ITEM_SET_CONTAINER_START_004787bf + 1;
          local_30 = iVar7;
          uVar9 = CONCAT44(*(float *)(iVar2 + 100) + fVar10,*(undefined4 *)(iVar2 + 0x54));
          puVar4 = (undefined4 *)(param_1 + 0x168);
          if ((uint)(int)*(char *)(param_1 + 0x308) < 0x14) {
            puVar4 = puVar4 + *(char *)(param_1 + 0x308);
          }
          func_00533078(*puVar4,&local_30,0);
          local_2c = s_SE_S_ITEM_SET_CONTAINER_END_004787e0;
          puVar4 = (undefined4 *)(param_1 + 0x118);
          if (uVar3 < 0x14) {
            puVar4 = puVar4 + uVar3;
          }
          local_30 = iVar7;
          func_00533078(*puVar4,&local_30,0);
        }
        piVar6 = (int *)(param_1 + 0x168);
        iVar7 = *(int *)(param_1 + 0x204);
        if ((uint)(int)*(char *)(param_1 + 0x308) < 0x14) {
          piVar6 = piVar6 + *(char *)(param_1 + 0x308);
        }
        iVar2 = *piVar6;
        cVar1 = *(char *)(iVar2 + 0xe0);
        func_0031B6A0(iVar7 + 0x44,(int)cVar1,0);
        *(char *)(iVar7 + 0xb4) = cVar1;
        iVar2 = *(int *)(**(int **)(iVar2 + 0x1c) + 0x10);
        local_30 = *(int *)(iVar2 + 0x54);
        *(int *)(iVar7 + 0xac) = local_30;
        local_2c = *(char **)(iVar2 + 100);
        *(char **)(iVar7 + 0xb0) = local_2c;
        iVar2 = *(int *)(**(int **)(iVar7 + 0x1c) + 0x10);
        local_28 = DAT_004787fc;
        func_003FFE6C(iVar2,&local_30);
        *(byte *)(*(int *)(iVar7 + 0x1c) + 0x70) = *(byte *)(*(int *)(iVar7 + 0x1c) + 0x70) | 2;
        func_00167E04(*(int *)(iVar7 + 0x1c),iVar2,1);
        *(int *)(iVar7 + 0xac) = (int)uVar9;
        *(int *)(iVar7 + 0xb0) = (int)((ulonglong)uVar9 >> 0x20);
        return func_0066BF2C((undefined4 *)(iVar7 + 0x20),'\x03');
      }
    }
  }
  local_2c = s_SE_S_ITEM_SET_CONTAINER_00478818;
  local_30 = iVar7;
  puVar4 = (undefined4 *)(param_1 + 0x168);
  if ((uint)(int)*(char *)(param_1 + 0x308) < 0x14) {
    puVar4 = puVar4 + *(char *)(param_1 + 0x308);
  }
  return func_00533078(*puVar4,&local_30,0);
}

