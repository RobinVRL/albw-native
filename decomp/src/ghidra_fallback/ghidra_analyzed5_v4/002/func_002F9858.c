#include "ghidra_types.h"

extern int func_002B1FB4(int param_1,int param_2,ushort param_3);
extern int func_004F8774(int param_1,uint param_2,int param_3,uint param_4);
extern int func_004F8864(int param_1,undefined4 *param_2,uint param_3,float fparam_0);
extern int func_004FAB60(int param_1,undefined4 param_2,int param_3);
extern int func_004FAC70(int param_1,uint param_2,int *param_3);
extern int func_004FB30C(int param_1,int param_2);
extern int func_004FB35C(int param_1,uint param_2,int param_3);
extern void func_004FB408(int param_1);
extern int func_004FD464(undefined4 *param_1,uint *param_2,uint *param_3);
extern int func_00527934(int param_1,int *param_2);
extern int func_005330BC(int param_1,int *param_2);
extern int func_00564A78(int param_1,int *param_2);
extern int func_00588BE4(int param_1);
extern uint *DAT_002f9bc4;
extern int DAT_002f9bc8;
extern int DAT_002f9bcc;
extern int *DAT_002f9bd0;
extern int DAT_002f9bd4;
extern int DAT_002f9bd8;
extern int DAT_002f9bdc;
extern int DAT_002f9be0;
extern int DAT_002f9be4;
extern int DAT_002f9be8;
extern int DAT_002f9bec;
extern int DAT_002f9bf0;
extern uint DAT_002f9bfc;
extern float DAT_002f9c24;
extern undefined4 DAT_002f9c28;
extern undefined4 DAT_002f9c2c;
extern undefined4 DAT_002f9c30;
extern float DAT_002f9c34;
extern char s_Lhand_002f9c1c[];
extern char s_Rhand_002f9c14[];
extern char s_chest_002f9c00[];
extern char s_head0_002f9bf4[];
extern char s_skl_root_002f9c08[];

// USA 002F9858 <- EU 002F9834 (Ghidra, non-matching)
// GLOBAL DAT_002f9bc4 uint *
// GLOBAL DAT_002f9bc8 int
// GLOBAL DAT_002f9bcc int
// GLOBAL DAT_002f9bd0 int *
// GLOBAL DAT_002f9bd4 int
// GLOBAL DAT_002f9bd8 int
// GLOBAL DAT_002f9bdc int
// GLOBAL DAT_002f9be0 int
// GLOBAL DAT_002f9be4 int
// GLOBAL DAT_002f9be8 int
// GLOBAL DAT_002f9bec int
// GLOBAL DAT_002f9bf0 int
// GLOBAL DAT_002f9bfc uint
// GLOBAL DAT_002f9c24 float
// GLOBAL DAT_002f9c28 undefined4
// GLOBAL DAT_002f9c2c undefined4
// GLOBAL DAT_002f9c30 undefined4
// GLOBAL DAT_002f9c34 float
// GLOBAL s_Lhand_002f9c1c string
// GLOBAL s_Rhand_002f9c14 string
// GLOBAL s_chest_002f9c00 string
// GLOBAL s_head0_002f9bf4 string
// GLOBAL s_skl_root_002f9c08 string

int * func_002F9858(undefined4 *param_1,uint *param_2)

{
  bool bVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  uint in_fpscr;
  float fVar12;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_48 (*(int *)(albw_frame + 0x8))
  #define local_44 (*(undefined4 *)(albw_frame + 0xc))
  #define local_40 (*(int *)(albw_frame + 0x10))
  #define local_3c (*(char * *)(albw_frame + 0x14))
  #define local_38 (*(int *)(albw_frame + 0x18))
  #define local_34 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_30 (*(undefined4 *)(albw_frame + 0x20))
  piVar4 = func_004FD464(param_1,param_2,DAT_002f9bc4);
  iVar5 = DAT_002f9bc8 + 0x88;
  *piVar4 = DAT_002f9bc8;
  piVar4[200] = iVar5;
  iVar5 = DAT_002f9bcc;
  piVar11 = piVar4 + 0x22f;
  piVar4[0x231] = -1;
  piVar2 = DAT_002f9bd0;
  piVar4[0x232] = -1;
  *piVar11 = iVar5;
  piVar4[0x230] = (int)piVar4;
  piVar4[0x233] = 0;
  iVar5 = DAT_002f9bd4;
  iVar8 = piVar2[1];
  iVar9 = piVar2[2];
  piVar4[0x234] = *piVar2;
  piVar4[0x235] = iVar8;
  piVar4[0x236] = iVar9;
  piVar4[0x237] = 0;
  *(undefined1 *)(piVar4 + 0x238) = 4;
  iVar9 = DAT_002f9bdc;
  iVar8 = DAT_002f9bd8;
  piVar4[0x239] = iVar5;
  piVar4[0x23a] = iVar8;
  piVar4[0x23b] = iVar9;
  iVar8 = DAT_002f9be0;
  piVar4[0x23c] = 0;
  piVar4[0x23d] = 5;
  piVar4[0x23e] = iVar8;
  piVar4[0x23f] = -1;
  piVar4[0x240] = -1;
  piVar4[0x241] = -1;
  *(undefined1 *)(piVar4 + 0x242) = 0;
  *(undefined1 *)((int)piVar4 + 0x909) = 1;
  *(undefined1 *)((int)piVar4 + 0x90a) = 0;
  iVar9 = func_00588BE4((int)piVar4);
  iVar8 = DAT_002f9bec;
  uVar10 = 0xe;
  uVar6 = 0;
  do {
    if (*(int *)(DAT_002f9be4 + uVar6 * 4) == iVar9) {
      uVar10 = uVar6 & 0xff;
      if (uVar10 == 9) goto LAB_002f9940;
      break;
    }
    uVar6 = uVar6 + 1;
  } while ((int)uVar6 < 0xe);
  if (uVar10 == 0xc || uVar10 == 0xd) {
LAB_002f9940:
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  local_3c = *(char **)(DAT_002f9be8 + uVar10 * 4);
  local_40 = DAT_002f9bec;
  iVar9 = func_00527934(piVar4[0xb4],&local_40);
  if (iVar9 != 0) {
    local_3c = *(char **)(DAT_002f9bf0 + uVar10 * 4);
    local_40 = iVar8;
    uVar6 = func_005330BC(iVar9,&local_40);
    if (-1 < (int)uVar6) {
      local_48 = 0xb;
      func_004F8774((int)piVar4,DAT_002f9bc4[1],0,uVar6);
      if (bVar1) {
        func_004FB30C((int)piVar4,1);
        local_44 = *(undefined4 *)(DAT_002f9bf0 + uVar10 * 4);
        local_48 = iVar8;
        func_004FAC70((int)piVar4,0,&local_48);
        func_004FB35C((int)piVar4,0,piVar4[0x103]);
        func_004FB408((int)piVar4);
        func_004FAB60((int)piVar4,0,0);
      }
      uVar6 = piVar4[0x167];
      piVar4[0x167] = uVar6 & 0xfffffdff;
      if ((short)param_2[0xb] != 1) {
        piVar4[0x167] = uVar6 & 0xfffffdff | 0x8000;
      }
      local_3c = s_head0_002f9bf4;
      local_40 = iVar8;
      uVar10 = func_00564A78(piVar4[0x103],&local_40);
      uVar6 = DAT_002f9bfc;
      if (uVar10 != DAT_002f9bfc) {
        piVar4[0x231] = uVar10;
        puVar7 = (uint *)(*(int *)(*(int *)(piVar4[0x103] + 0x24) + 0xc) + uVar10 * 0x40);
        *puVar7 = *puVar7 | 0x10;
        *(int **)(piVar4[0x103] + 0x16c) = piVar11;
      }
      local_3c = s_chest_002f9c00;
      local_40 = iVar8;
      uVar10 = func_00564A78(piVar4[0x103],&local_40);
      if (uVar10 != uVar6) {
        piVar4[0x232] = uVar10;
        puVar7 = (uint *)(*(int *)(*(int *)(piVar4[0x103] + 0x24) + 0xc) + uVar10 * 0x40);
        *puVar7 = *puVar7 | 0x10;
        *(int **)(piVar4[0x103] + 0x16c) = piVar11;
      }
      local_3c = s_skl_root_002f9c08;
      local_40 = iVar8;
      uVar10 = func_00564A78(piVar4[0x103],&local_40);
      if (uVar10 != uVar6) {
        piVar4[0x23f] = uVar10;
      }
      local_3c = s_Rhand_002f9c14;
      local_40 = iVar8;
      uVar10 = func_00564A78(piVar4[0x103],&local_40);
      if (uVar10 != uVar6) {
        piVar4[0x240] = uVar10;
      }
      local_3c = s_Lhand_002f9c1c;
      local_40 = iVar8;
      uVar10 = func_00564A78(piVar4[0x103],&local_40);
      if (uVar10 != uVar6) {
        piVar4[0x241] = uVar10;
      }
      iVar8 = (int)*(short *)((int)piVar4 + 0x2e);
      if (iVar8 == 0) {
        fVar12 = ALBW_AS_F32(piVar4[0x23a]);
      }
      else {
        fVar12 = DAT_002f9c24;
        if (-1 < iVar8) {
          fVar12 = (float)VectorSignedToFloat(iVar8,(byte)(in_fpscr >> 0x15) & 3);
        }
        piVar4[0x23a] = (int)ALBW_AS_U32(fVar12);
      }
      uVar3 = DAT_002f9c28;
      piVar4[0x23b] = (int)ALBW_AS_U32((fVar12 * fVar12));
      func_002B1FB4((int)piVar4,0,(ushort)uVar3);
      local_34 = DAT_002f9c2c;
      local_30 = DAT_002f9c30;
      local_38 = iVar5;
      func_004F8864((int)piVar4,&local_38,0,DAT_002f9c34);
      if (1 < (short)param_2[0xb]) {
        *(undefined1 *)((int)piVar4 + 0x909) = 1;
        *(undefined1 *)(piVar4 + 0x242) = 1;
      }
      return piVar4;
    }
  }
  *(undefined1 *)((int)piVar4 + 0x2d7) = 1;
  return piVar4;
}

