#include "ghidra_types.h"

extern int func_0012C718(int param_1);
extern int func_00231448(int param_1);
extern int func_00231524(int param_1);
extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_004077E4(int param_1,float *param_2);
extern int func_0051B0B4(int param_1);
extern int func_00522828(int param_1,int param_2);
extern int func_00533078(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0058DE90(int param_1);
extern float DAT_00471c10;
extern float DAT_00471c14;
extern int *DAT_00471ea8;
extern int *DAT_00471eac;
extern int *DAT_00471ecc;
extern int *DAT_00471ed0;
extern char s_SE_S_MAP_PIN_CHANGE_COLOR_00471c38[];
extern char s_SE_S_MAP_PIN_POP_MENU_CLOSE_00471eb0[];
extern char s_SE_S_MAP_PIN_POP_MENU_DELETE_00471c18[];

// USA 00471948 <- EU 00471920 (Ghidra, non-matching)
// GLOBAL DAT_00471c10 float
// GLOBAL DAT_00471c14 float
// GLOBAL DAT_00471ea8 int *
// GLOBAL DAT_00471eac int *
// GLOBAL DAT_00471ecc int *
// GLOBAL DAT_00471ed0 int *
// GLOBAL s_SE_S_MAP_PIN_CHANGE_COLOR_00471c38 string
// GLOBAL s_SE_S_MAP_PIN_POP_MENU_CLOSE_00471eb0 string
// GLOBAL s_SE_S_MAP_PIN_POP_MENU_DELETE_00471c18 string

undefined4 func_00471948(int param_1)

{
  char cVar1;
  ushort uVar2;
  float fVar3;
  int *piVar4;
  bool bVar5;
  undefined2 *puVar6;
  int iVar7;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define local_24 (*(char * *)(albw_frame + 0xc))
  #define local_20 (*(float *)(albw_frame + 0x10))
  #define local_1c (*(char * *)(albw_frame + 0x14))
  fparam_0 = DAT_00471c10;
  if (((*(ushort *)(*(int *)(param_1 + 0x14) + 0x16) & 8) != 0) &&
     (*(int *)(*(int *)(param_1 + 0x14) + 8) == 0)) {
    *(undefined2 *)(param_1 + 0x74) = 0;
    func_002317C0((undefined2 *)(param_1 + 0x74),fparam_0);
  }
  fVar3 = DAT_00471c14;
  uVar2 = *(ushort *)(*(int *)(param_1 + 0x14) + 0x16);
  if ((uVar2 & 0x10) != 0) {
    *(byte *)(param_1 + 0xea) = *(byte *)(param_1 + 0xea) | 1;
    local_24 = s_SE_S_MAP_PIN_POP_MENU_DELETE_00471c18;
    local_28 = fVar3;
    func_00533078(param_1,(int *)&local_28,0);
    goto LAB_00471ce4;
  }
  if ((uVar2 & 0x20) == 0) {
    uVar2 = *(ushort *)(*(int *)(param_1 + 0xfc) + 0x16);
    if (((uVar2 & 8) == 0) || (*(int *)(*(int *)(param_1 + 0xfc) + 8) != 0)) {
      if ((uVar2 & 0x10) != 0) {
        *(byte *)(param_1 + 0xea) = *(byte *)(param_1 + 0xea) | 2;
        *(undefined1 *)(param_1 + 0xe8) = 1;
        local_24 = s_SE_S_MAP_PIN_CHANGE_COLOR_00471c38;
        local_28 = fVar3;
        func_00533078(param_1,(int *)&local_28,0);
        goto LAB_00471ce4;
      }
      if ((uVar2 & 0x20) == 0) {
        uVar2 = *(ushort *)(*(int *)(param_1 + 0x100) + 0x16);
        if (((uVar2 & 8) == 0) || (*(int *)(*(int *)(param_1 + 0x100) + 8) != 0)) {
          if ((uVar2 & 0x10) != 0) {
            *(byte *)(param_1 + 0xea) = *(byte *)(param_1 + 0xea) | 4;
            *(undefined1 *)(param_1 + 0xe8) = 2;
            local_24 = s_SE_S_MAP_PIN_CHANGE_COLOR_00471c38;
            local_28 = fVar3;
            func_00533078(param_1,(int *)&local_28,0);
            goto LAB_00471ce4;
          }
          if ((uVar2 & 0x20) == 0) {
            uVar2 = *(ushort *)(*(int *)(param_1 + 0x104) + 0x16);
            if (((uVar2 & 8) != 0) && (*(int *)(*(int *)(param_1 + 0x104) + 8) == 0)) {
              func_00231448(param_1 + 0x80);
              func_00231448(param_1 + 0x8c);
              func_002317C0((undefined2 *)(param_1 + 0x98),fparam_0);
              func_00231524(param_1 + 0xbc);
              if (*(char *)(param_1 + 0xe8) != '\x01') {
                if (*(char *)(param_1 + 0xe8) != '\x02') goto LAB_00471ce4;
                goto LAB_00471a70;
              }
              goto LAB_00471c98;
            }
            if ((uVar2 & 0x10) != 0) {
              *(byte *)(param_1 + 0xea) = *(byte *)(param_1 + 0xea) | 8;
              *(undefined1 *)(param_1 + 0xe8) = 3;
              local_24 = s_SE_S_MAP_PIN_CHANGE_COLOR_00471c38;
              local_28 = fVar3;
              func_00533078(param_1,(int *)&local_28,0);
              goto LAB_00471ce4;
            }
            if ((uVar2 & 0x20) == 0) goto LAB_00471ce4;
            func_00231448(param_1 + 0x98);
            func_002317C0((undefined2 *)(param_1 + 0xbc),fparam_0);
            if (*(char *)(param_1 + 0xe8) != '\x01') {
              if (*(char *)(param_1 + 0xe8) == '\x02') {
                func_002317C0((undefined2 *)(param_1 + 0x8c),fparam_0);
              }
              goto LAB_00471ce4;
            }
          }
          else {
            func_00231448(param_1 + 0x8c);
            func_002317C0((undefined2 *)(param_1 + 0xb0),fparam_0);
            cVar1 = *(char *)(param_1 + 0xe8);
            if (cVar1 != '\x01') goto joined_r0x00471abc;
          }
          puVar6 = (undefined2 *)(param_1 + 0x80);
        }
        else {
          func_00231448(param_1 + 0x80);
          func_002317C0((undefined2 *)(param_1 + 0x8c),fparam_0);
          func_00231448(param_1 + 0x98);
          func_00231448(param_1 + 0xb0);
          cVar1 = *(char *)(param_1 + 0xe8);
          if (cVar1 != '\x01') goto joined_r0x00471a68;
LAB_00471c98:
          puVar6 = (undefined2 *)(param_1 + 0xa4);
        }
      }
      else {
        func_00231448(param_1 + 0x80);
        func_002317C0((undefined2 *)(param_1 + 0xa4),fparam_0);
        cVar1 = *(char *)(param_1 + 0xe8);
        if (cVar1 == '\x02') {
          puVar6 = (undefined2 *)(param_1 + 0x8c);
        }
        else {
joined_r0x00471abc:
          if (cVar1 != '\x03') goto LAB_00471ce4;
          puVar6 = (undefined2 *)(param_1 + 0x98);
        }
      }
    }
    else {
      func_002317C0((undefined2 *)(param_1 + 0x80),fparam_0);
      func_00231448(param_1 + 0x8c);
      func_00231448(param_1 + 0x98);
      func_00231448(param_1 + 0xa4);
      cVar1 = *(char *)(param_1 + 0xe8);
      if (cVar1 == '\x02') {
LAB_00471a70:
        puVar6 = (undefined2 *)(param_1 + 0xb0);
      }
      else {
joined_r0x00471a68:
        if (cVar1 != '\x03') goto LAB_00471ce4;
        puVar6 = (undefined2 *)(param_1 + 0xbc);
      }
    }
  }
  else {
    puVar6 = (undefined2 *)(param_1 + 0x74);
    *(undefined2 *)(param_1 + 0x74) = 2;
  }
  func_002317C0(puVar6,fparam_0);
LAB_00471ce4:
  piVar4 = DAT_00471ea8;
  if (((((*(ushort *)(*(int *)(param_1 + 0x14) + 0x16) & 0x10) != 0) ||
       ((*(ushort *)(*(int *)(param_1 + 0xfc) + 0x16) & 0x10) != 0)) ||
      ((*(ushort *)(*(int *)(param_1 + 0x100) + 0x16) & 0x10) != 0)) ||
     ((*(ushort *)(*(int *)(param_1 + 0x104) + 0x16) & 0x10) != 0)) {
    func_002317C0((undefined2 *)(param_1 + 200),fparam_0);
    return func_0012C718(param_1);
  }
  bVar5 = func_00522828(*DAT_00471ea8,0);
  if (bVar5) {
    local_28 = *(float *)(*piVar4 + 0x10);
    local_24 = *(char **)(*piVar4 + 0x14);
    iVar7 = func_004077E4(*(int *)(param_1 + 0xec),&local_28);
    if (((iVar7 == 0) && (iVar7 = func_004077E4(*(int *)(param_1 + 0xf0),&local_28), iVar7 == 0)) &&
       ((iVar7 = func_004077E4(*(int *)(param_1 + 0xf4),&local_28), iVar7 == 0 &&
        (iVar7 = func_004077E4(*(int *)(param_1 + 0xf8),&local_28), iVar7 == 0)))) {
      local_1c = s_SE_S_MAP_PIN_POP_MENU_CLOSE_00471eb0;
      local_20 = fVar3;
      func_00533078(param_1,(int *)&local_20,0);
      return func_0012C718(param_1);
    }
  }
  piVar4 = DAT_00471ed0;
  if ((((*(uint *)(*DAT_00471eac + (uint)*(byte *)(*(int *)(param_1 + 0x10) + 0x70) * 400 + 300) &
        0xfff7fff) == 0) && (*(int *)(*DAT_00471ecc + 0x44) == 0)) &&
     ((iVar7 = func_0058DE90(*DAT_00471ed0), iVar7 != 0 &&
      (iVar7 = func_0051B0B4(*piVar4), iVar7 != 0)))) {
    return 0;
  }
  local_24 = s_SE_S_MAP_PIN_POP_MENU_CLOSE_00471eb0;
  local_28 = fVar3;
  func_00533078(param_1,(int *)&local_28,0);
  return func_0012C718(param_1);
}

