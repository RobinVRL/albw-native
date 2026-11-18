#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0010DA7C(undefined4 *param_1,undefined4 param_2,int param_3);
extern int func_00133790(int *param_1,int param_2);
extern int func_0019B04C(uint param_1);
extern int func_001E1EDC(int param_1,int *param_2);
extern int func_0028E064(uint param_1);
extern int func_00345C54(undefined4 param_1,undefined4 param_2,byte *param_3);
extern int func_003A56A8(int param_1,undefined4 param_2,short *param_3);
extern int func_0048BB30(undefined4 param_1,int *param_2);
extern int func_00533304(int param_1,int *param_2,uint param_3);
extern int func_00533400(int param_1,int *param_2);
extern undefined4 DAT_00346960;
extern uint *DAT_00346964;
extern int DAT_00346974;
extern undefined DAT_00346988;
extern undefined DAT_00346990;
extern undefined4 DAT_00346ad4;
extern undefined4 DAT_00346ad8;
extern int *DAT_00346af0;
extern undefined4 DAT_00346af4;
extern int *DAT_00346af8;
extern char s_Byaml_GetItem_byaml_00346adc[];
extern char s_Link_model_00346968[];
extern char s_Link_model_sl_00346978[];
extern char s_cf_00346adc[];

// USA 00346538 <- EU 00346514 (Ghidra, non-matching)
// GLOBAL DAT_00346960 undefined4
// GLOBAL DAT_00346964 uint *
// GLOBAL DAT_00346974 int
// GLOBAL DAT_00346988 undefined
// GLOBAL DAT_00346990 undefined
// GLOBAL DAT_00346ad4 undefined4
// GLOBAL DAT_00346ad8 undefined4
// GLOBAL DAT_00346af0 int *
// GLOBAL DAT_00346af4 undefined4
// GLOBAL DAT_00346af8 int *
// GLOBAL s_cf_00346adc string
// GLOBAL s_Link_model_00346968 string
// GLOBAL s_Link_model_sl_00346978 string

undefined4 * func_00346538(undefined4 *param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_60 (*(int *)(albw_frame + 0x0))
  #define local_5c (*(char * *)(albw_frame + 0x4))
  #define local_58 (*(undefined4 *)(albw_frame + 0x8))
  #define local_54 (*(undefined4 *)(albw_frame + 0xc))
  #define local_50 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_4c (*(undefined4 *)(albw_frame + 0x14))
  #define local_48 (*(undefined4 *)(albw_frame + 0x18))
  #define local_44 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_40 (*(undefined4 *)(albw_frame + 0x20))
  #define local_3c (*(undefined4 *)(albw_frame + 0x24))
  #define local_38 (*(undefined4 *)(albw_frame + 0x28))
  #define local_34 (*(int *)(albw_frame + 0x2c))
  #define local_30 (*(undefined4 *)(albw_frame + 0x30))
  #define local_2c (*(undefined1 *)(albw_frame + 0x34))
  #define local_2b (*(undefined1 *)(albw_frame + 0x35))
  #define local_2a (*(undefined1 *)(albw_frame + 0x36))
  #define local_29 (*(undefined1 *)(albw_frame + 0x37))
  #define local_28 (*(undefined1 *)(albw_frame + 0x38))
  puVar2 = func_0010DA7C(param_1,0,3);
  uVar8 = DAT_00346960;
  *(undefined1 *)(puVar2 + 0x10c) = 0xff;
  *puVar2 = uVar8;
  puVar2[0xf4] = 0;
  iVar6 = 0xb;
  iVar3 = 0;
  do {
    iVar6 = iVar6 + -1;
    puVar2[iVar3 + 0xf6] = 6;
    puVar2[iVar3 + 0x101] = 0;
    iVar3 = iVar3 + 1;
  } while (iVar6 != 0);
  iVar6 = 0;
  iVar3 = 0;
  do {
    puVar2[iVar6 + 4] = 0;
    iVar3 = iVar3 + 2;
    puVar2[iVar6 + 5] = 0;
    iVar6 = iVar6 + 2;
  } while (iVar3 < 0x20);
  iVar6 = 0;
  iVar3 = 0;
  do {
    puVar2[iVar6 + 0x24] = 0;
    iVar3 = iVar3 + 2;
    puVar2[iVar6 + 0x25] = 0;
    iVar6 = iVar6 + 2;
  } while (iVar3 < 0x20);
  iVar6 = 0;
  iVar3 = 0;
  do {
    puVar2[iVar6 + 0x44] = 0;
    iVar3 = iVar3 + 2;
    puVar2[iVar6 + 0x45] = 0;
    iVar6 = iVar6 + 2;
  } while (iVar3 < 0xb0);
  iVar3 = func_0019B04C(*DAT_00346964);
  iVar6 = 0;
  do {
    iVar4 = DAT_00346974;
    switch(iVar6) {
    case 0:
      iVar9 = *(int *)(iVar3 + 0x1c8);
      local_5c = s_Link_model_00346968;
      local_60 = DAT_00346974;
      iVar10 = func_00533400(iVar9,&local_60);
      puVar2[4] = iVar10;
      local_5c = s_Link_model_sl_00346978;
      local_60 = iVar4;
      iVar4 = func_00533400(iVar9,&local_60);
      puVar2[0x24] = iVar4;
      break;
    case 1:
      iVar10 = *(int *)(iVar3 + 0x1cc);
      iVar4 = 0;
      do {
        uVar7 = (uint)(short)iVar4;
        bVar1 = func_00345C54(puVar2,uVar7,(byte *)0x0);
        if (bVar1 == 0) {
          piVar5 = (int *)func_0028E064(uVar7);
          piVar5 = (int *)func_00533304(iVar10,piVar5,0);
          puVar2[iVar4 + 0x44] = piVar5;
          func_00133790(piVar5,puVar2[4]);
          func_00133790((int *)puVar2[iVar4 + 0x44],puVar2[0x24]);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < 0xb0);
      break;
    case 2:
      if (*(int *)(*(int *)(iVar3 + 0x1e8) + 200) == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = **(undefined4 **)(*(int *)(iVar3 + 0x1e8) + 0xd0);
      }
      puVar2[6] = uVar8;
      break;
    case 3:
      if (*(int *)(*(int *)(iVar3 + 0x1d0) + 200) == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = **(undefined4 **)(*(int *)(iVar3 + 0x1d0) + 0xd0);
      }
      puVar2[7] = uVar8;
      break;
    case 4:
      if (*(int *)(*(int *)(iVar3 + 0x1d4) + 200) == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = **(undefined4 **)(*(int *)(iVar3 + 0x1d4) + 0xd0);
      }
      puVar2[8] = uVar8;
      break;
    case 5:
      if (*(int *)(*(int *)(iVar3 + 0x1d8) + 200) == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = **(undefined4 **)(*(int *)(iVar3 + 0x1d8) + 0xd0);
      }
      puVar2[9] = uVar8;
      break;
    case 6:
      if (*(int *)(*(int *)(iVar3 + 0x1dc) + 200) == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = **(undefined4 **)(*(int *)(iVar3 + 0x1dc) + 0xd0);
      }
      puVar2[10] = uVar8;
      break;
    case 0xd:
      if (*(int *)(*(int *)(iVar3 + 0x1e0) + 200) == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = **(undefined4 **)(*(int *)(iVar3 + 0x1e0) + 0xd0);
      }
      puVar2[0x11] = uVar8;
      break;
    case 0xe:
      if (*(int *)(*(int *)(iVar3 + 0x1e4) + 200) == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = **(undefined4 **)(*(int *)(iVar3 + 0x1e4) + 0xd0);
      }
      puVar2[0x12] = uVar8;
      break;
    case 0x14:
      if (*(int *)(*(int *)(iVar3 + 0x1ec) + 200) == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = **(undefined4 **)(*(int *)(iVar3 + 0x1ec) + 0xd0);
      }
      puVar2[0x18] = uVar8;
      break;
    case 0x15:
      if (*(int *)(*(int *)(iVar3 + 0x1f0) + 200) == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = **(undefined4 **)(*(int *)(iVar3 + 0x1f0) + 0xd0);
      }
      puVar2[0x19] = uVar8;
      break;
    case 0x16:
      if (*(int *)(*(int *)(iVar3 + 500) + 200) == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = **(undefined4 **)(*(int *)(iVar3 + 500) + 0xd0);
      }
      puVar2[0x1a] = uVar8;
      break;
    case 0x17:
      if (*(int *)(*(int *)(iVar3 + 0x1f8) + 200) == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = **(undefined4 **)(*(int *)(iVar3 + 0x1f8) + 0xd0);
      }
      puVar2[0x1b] = uVar8;
      break;
    case 0x18:
      if (*(int *)(*(int *)(iVar3 + 0x1fc) + 200) == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = **(undefined4 **)(*(int *)(iVar3 + 0x1fc) + 0xd0);
      }
      puVar2[0x1c] = uVar8;
      break;
    case 0x19:
      local_5c = &DAT_00346988;
      local_60 = DAT_00346974;
      iVar4 = func_00533400(*(int *)(iVar3 + 0x200),&local_60);
      puVar2[0x1d] = iVar4;
      break;
    case 0x1a:
      local_5c = &DAT_00346990;
      local_60 = DAT_00346974;
      iVar4 = func_00533400(*(int *)(iVar3 + 0x200),&local_60);
      puVar2[0x1e] = iVar4;
      break;
    case 0x1b:
      if (*(int *)(*(int *)(iVar3 + 0x204) + 200) == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = **(undefined4 **)(*(int *)(iVar3 + 0x204) + 0xd0);
      }
      puVar2[0x1f] = uVar8;
      break;
    case 0x1c:
      if (*(int *)(*(int *)(iVar3 + 0x208) + 200) == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = **(undefined4 **)(*(int *)(iVar3 + 0x208) + 0xd0);
      }
      puVar2[0x20] = uVar8;
      break;
    case 0x1d:
      if (*(int *)(*(int *)(iVar3 + 0x20c) + 200) == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = **(undefined4 **)(*(int *)(iVar3 + 0x20c) + 0xd0);
      }
      puVar2[0x21] = uVar8;
      break;
    case 0x1e:
      if (*(int *)(*(int *)(iVar3 + 0x210) + 200) == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = **(undefined4 **)(*(int *)(iVar3 + 0x210) + 0xd0);
      }
      puVar2[0x22] = uVar8;
      break;
    case 0x1f:
      if (*(int *)(*(int *)(iVar3 + 0x218) + 200) == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = **(undefined4 **)(*(int *)(iVar3 + 0x218) + 0xd0);
      }
      puVar2[0x23] = uVar8;
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 < 0x20);
  local_60 = DAT_00346974;
  local_58 = 0;
  local_54 = 0;
  local_50 = 0x20;
  uStack_4c = 0;
  local_48 = 0;
  local_44 = 0;
  local_34 = DAT_00346974;
  local_40 = 0;
  local_30 = DAT_00346ad8;
  local_2c = 7;
  local_2b = 4;
  local_5c = s_Byaml_GetItem_byaml_00346adc;
  local_3c = 0;
  local_28 = 1;
  local_29 = 1;
  local_2a = 10;
  local_38 = 0;
  piVar5 = func_001E1EDC(*DAT_00346af0,&local_60);
  puVar2[0xf4] = piVar5[5];
  iVar6 = func_0010BAB4(DAT_00346af4);
  iVar3 = 0;
  if (iVar6 != 0) {
    iVar3 = func_003A56A8(iVar6,puVar2,(short *)puVar2[0xf4]);
  }
  puVar2[0xf5] = iVar3;
  if (*DAT_00346af8 != 0) {
    func_0048BB30(*DAT_00346af8,piVar5);
  }
  return puVar2;
}

