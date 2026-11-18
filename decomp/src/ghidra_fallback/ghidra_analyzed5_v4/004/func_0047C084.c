#include "ghidra_types.h"

extern int func_0010A464(undefined4 *param_1);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BAB4(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0014CFF0(int param_1,int param_2);
extern int func_0014D0F4(undefined4 *param_1);
extern int func_00166C20(int *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016773C(int param_1,int param_2);
extern int func_00167E04(int param_1,int param_2,uint param_3);
extern int func_002313DC(int param_1);
extern int func_0028BE38(undefined4 *param_1,int *param_2,int *param_3);
extern int func_002C0294(undefined4 *param_1);
extern int func_003525AC(int param_1,undefined4 *param_2,int param_3);
extern int func_003529A0(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
extern int func_003529C0(undefined4 *param_1);
extern int func_003FDF90(int param_1,int param_2);
extern int func_00422298(undefined4 *param_1,int *param_2,int *param_3);
extern int func_00422CC4(undefined4 *param_1,int *param_2,int *param_3);
extern int func_00423F68(undefined4 *param_1,int *param_2,int *param_3,undefined4 param_4,int param_5);
extern int func_00425388(undefined4 *param_1,int *param_2,int *param_3,undefined4 param_4);
extern int func_00481A18(undefined4 *param_1);
extern int func_004994B0(int param_1,undefined4 param_2,uint param_3,undefined4 param_4,...);
extern int func_005229AC(int *param_1,int *param_2);
extern int func_0066E7A0(undefined4 *param_1,char param_2);
extern int func_0066E870(int param_1,undefined4 param_2,byte *param_3);
extern int DAT_0047c45c;
extern undefined4 DAT_0047c460;
extern int DAT_0047c464;
extern undefined4 *DAT_0047c468;
extern undefined4 *DAT_0047c46c;
extern int DAT_0047c470;
extern int DAT_0047c8f4;
extern int DAT_0047cd88;
extern char s_G_Close_00_0047c488[];
extern char s_G_Slide_00_0047c4c8[];
extern char s_G_Win_00_0047c47c[];
extern char s_G_Xbtn_00_0047c49c[];
extern char s_G_Ybtn_00_0047c4a8[];
extern char s_InBtn_0047c4b4[];
extern char s_InOutSlide_0047c4bc[];
extern char s_InOut_0047c474[];
extern char s_L_Close_00_0047cd5c[];
extern char s_L_Drag_00_0047c90c[];
extern char s_L_Drag_01_0047c918[];
extern char s_L_ItemPanel__02d_0047c8f8[];
extern char s_L_SlideBtn_00_0047cd4c[];
extern char s_L_Xbtn_00_0047c8dc[];
extern char s_L_Ybtn_00_0047c8e8[];
extern char s_LoopSlide_0047c8d0[];
extern char s_OutBtn_0047c494[];
extern char s_P_CursorX_00_0047c934[];
extern char s_P_CursorY_00_0047c944[];
extern char s_P_Cursor__02d_0047c924[];
extern char s_Slide_0047c4d4[];
extern char s_UI_ItemSelect_0047cd68[];
extern char s_cState_Idle_0047d264[];
extern char s_cState_Out_0047d40c[];
extern char s_cState_Select_0047d3e4[];
extern char s_cState_Show_0047d400[];
extern char s_cState_Slot_0047d3f4[];
extern char s_cStep_BarDemo_0047d248[];
extern char s_cStep_Choice_0047cd78[];
extern char s_cStep_Config_0047cdd4[];
extern char s_cStep_Drag_0047cd8c[];
extern char s_cStep_DropXY_0047cda4[];
extern char s_cStep_Drop_0047cd98[];
extern char s_cStep_Effect_0047d228[];
extern char s_cStep_EndDrop_0047cdc4[];
extern char s_cStep_GetDemo_0047d218[];
extern char s_cStep_GetLost_0047d238[];
extern char s_cStep_None_0047d258[];
extern char s_cStep_SetItem_0047cdb4[];
extern char s_cStep_SlotCancel_0047d204[];
extern char s_cStep_SlotDecide_0047d1e0[];
extern char s_cStep_SlotOut_0047d1f4[];
extern char s_cStep_SlotSelectX_0047cde4[];
extern char s_cStep_SlotSelectY_0047d1cc[];
extern char s_cf_0047c8f8[];
extern char s_cf_0047c924[];

// USA 0047C084 <- EU 0047C05C (Ghidra, non-matching)
// GLOBAL DAT_0047c45c int
// GLOBAL DAT_0047c460 undefined4
// GLOBAL DAT_0047c464 int
// GLOBAL DAT_0047c468 undefined4 *
// GLOBAL DAT_0047c46c undefined4 *
// GLOBAL DAT_0047c470 int
// GLOBAL DAT_0047c8f4 int
// GLOBAL DAT_0047cd88 int
// GLOBAL s_G_Close_00_0047c488 string
// GLOBAL s_G_Slide_00_0047c4c8 string
// GLOBAL s_G_Win_00_0047c47c string
// GLOBAL s_G_Xbtn_00_0047c49c string
// GLOBAL s_G_Ybtn_00_0047c4a8 string
// GLOBAL s_InBtn_0047c4b4 string
// GLOBAL s_InOutSlide_0047c4bc string
// GLOBAL s_InOut_0047c474 string
// GLOBAL s_L_Close_00_0047cd5c string
// GLOBAL s_L_Drag_00_0047c90c string
// GLOBAL s_L_Drag_01_0047c918 string
// GLOBAL s_cf_0047c8f8 string
// GLOBAL s_L_SlideBtn_00_0047cd4c string
// GLOBAL s_L_Xbtn_00_0047c8dc string
// GLOBAL s_L_Ybtn_00_0047c8e8 string
// GLOBAL s_LoopSlide_0047c8d0 string
// GLOBAL s_OutBtn_0047c494 string
// GLOBAL s_P_CursorX_00_0047c934 string
// GLOBAL s_P_CursorY_00_0047c944 string
// GLOBAL s_cf_0047c924 string
// GLOBAL s_Slide_0047c4d4 string
// GLOBAL s_UI_ItemSelect_0047cd68 string
// GLOBAL s_cState_Idle_0047d264 string
// GLOBAL s_cState_Out_0047d40c string
// GLOBAL s_cState_Select_0047d3e4 string
// GLOBAL s_cState_Show_0047d400 string
// GLOBAL s_cState_Slot_0047d3f4 string
// GLOBAL s_cStep_BarDemo_0047d248 string
// GLOBAL s_cStep_Choice_0047cd78 string
// GLOBAL s_cStep_Config_0047cdd4 string
// GLOBAL s_cStep_Drag_0047cd8c string
// GLOBAL s_cStep_DropXY_0047cda4 string
// GLOBAL s_cStep_Drop_0047cd98 string
// GLOBAL s_cStep_Effect_0047d228 string
// GLOBAL s_cStep_EndDrop_0047cdc4 string
// GLOBAL s_cStep_GetDemo_0047d218 string
// GLOBAL s_cStep_GetLost_0047d238 string
// GLOBAL s_cStep_None_0047d258 string
// GLOBAL s_cStep_SetItem_0047cdb4 string
// GLOBAL s_cStep_SlotCancel_0047d204 string
// GLOBAL s_cStep_SlotDecide_0047d1e0 string
// GLOBAL s_cStep_SlotOut_0047d1f4 string
// GLOBAL s_cStep_SlotSelectX_0047cde4 string
// GLOBAL s_cStep_SlotSelectY_0047d1cc string

int * func_0047C084(undefined4 *param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 uVar12;
  int *piVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  _Alignas(8) unsigned char albw_frame[0xa0];
  #define local_94 ((byte *)(albw_frame + 0xc))
  #define local_88 (*(int *)(albw_frame + 0x18))
  #define local_84 (*(undefined1 * *)(albw_frame + 0x1c))
  #define local_78 (*(int *)(albw_frame + 0x28))
  #define local_74 (*(char * *)(albw_frame + 0x2c))
  #define local_70 (*(int *)(albw_frame + 0x30))
  #define local_6c (*(undefined1 * *)(albw_frame + 0x34))
  #define uStack_68 (*(undefined4 *)(albw_frame + 0x38))
  #define local_64 ((undefined1 *)(albw_frame + 0x3c))
  #define uStack_55 (*(undefined1 *)(albw_frame + 0x4b))
  #define local_50 (*(int *)(albw_frame + 0x50))
  #define local_4c (*(char * *)(albw_frame + 0x54))
  #define local_48 (*(int *)(albw_frame + 0x58))
  #define local_44 (*(char * *)(albw_frame + 0x5c))
  #define local_3c (*(undefined4 * *)(albw_frame + 0x64))
  piVar2 = func_0014D0F4(param_1);
  iVar6 = DAT_0047c45c;
  *piVar2 = DAT_0047c45c;
  piVar2[0x32] = iVar6 + 0x4c;
  puVar3 = func_0010A794(piVar2 + 0x33);
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar3 = func_0010A794(puVar3 + 9);
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  *(undefined1 *)(puVar3 + 9) = 0;
  *(undefined1 *)((int)puVar3 + 0x25) = 0xff;
  *(undefined1 *)((int)puVar3 + 0x26) = 0;
  uVar10 = DAT_0047c460;
  *(undefined2 *)(puVar3 + 0x32) = 0;
  *(undefined2 *)((int)puVar3 + 0xca) = 0xffff;
  puVar3[0x33] = uVar10;
  puVar3[0x34] = 0;
  *(undefined2 *)(puVar3 + 0x35) = 0;
  *(undefined2 *)((int)puVar3 + 0xd6) = 0xffff;
  puVar3[0x36] = uVar10;
  puVar3[0x37] = 0;
  *(undefined2 *)(puVar3 + 0x38) = 0;
  *(undefined2 *)((int)puVar3 + 0xe2) = 0xffff;
  puVar3[0x39] = uVar10;
  puVar3[0x3a] = 0;
  *(undefined2 *)(puVar3 + 0x3b) = 0;
  *(undefined2 *)((int)puVar3 + 0xee) = 0xffff;
  puVar3[0x3c] = uVar10;
  puVar3[0x3d] = 0;
  *(undefined2 *)(puVar3 + 0x3e) = 0;
  *(undefined2 *)((int)puVar3 + 0xfa) = 0xffff;
  puVar3[0x3f] = uVar10;
  puVar3[0x40] = 0;
  puVar3[0x41] = 0;
  puVar3[0x42] = 0;
  puVar3[0x43] = 0;
  puVar3[0x44] = 0;
  puVar3[0x45] = 0;
  puVar3[0x46] = 0;
  puVar3[0x47] = 0;
  puVar3[0x48] = 0;
  puVar3[0x49] = 0;
  puVar3[0x4a] = 0;
  piVar2 = func_00481A18(puVar3 + 0x4b);
  iVar6 = DAT_0047c464;
  piVar2[0x1f] = 0;
  piVar2[0x20] = iVar6;
  puVar3 = func_0010A464(piVar2 + 0x21);
  piVar2 = puVar3 + -0xa8;
  if ((0 < param_2) && (param_3 != 0)) {
    puVar3[0x18] = param_2;
    puVar3[0x19] = param_3;
  }
  *(undefined1 *)(puVar3 + 0x1a) = 0xff;
  *(undefined1 *)((int)puVar3 + 0x69) = 0xff;
  *(undefined1 *)((int)puVar3 + 0x6a) = 0xff;
  *(undefined1 *)((int)puVar3 + 0x6b) = 0xff;
  *(undefined1 *)(puVar3 + 0x1b) = 0;
  *(undefined1 *)((int)puVar3 + 0x6d) = 0;
  *(undefined1 *)((int)puVar3 + 0x6e) = 0;
  *(undefined1 *)((int)puVar3 + 0x6f) = 0;
  *(undefined1 *)(puVar3 + 0x1c) = 0;
  *(undefined1 *)((int)puVar3 + 0x71) = 0;
  puVar4 = (undefined4 *)func_0010BAB4(0x40);
  puVar5 = (undefined4 *)0x0;
  if (puVar4 != (undefined4 *)0x0) {
    puVar5 = func_003529C0(puVar4);
  }
  puVar4 = DAT_0047c468;
  puVar3[0x1d] = puVar5;
  iVar1 = DAT_0047c470;
  uVar10 = puVar4[1];
  uVar12 = puVar4[2];
  puVar3[0x1e] = *puVar4;
  puVar3[0x1f] = uVar10;
  puVar3[0x20] = uVar12;
  local_4c = (char *)*DAT_0047c46c;
  local_50 = iVar1;
  (**(code **)(*piVar2 + 0x38))(piVar2,&local_50,0);
  piVar13 = (int *)puVar3[-0xa1];
  func_0016773C((int)piVar13,9);
  local_4c = s_InOut_0047c474;
  local_50 = iVar1;
  local_74 = s_G_Win_00_0047c47c;
  local_78 = iVar1;
  (**(code **)(iVar1 + 8))(&local_78);
  iVar6 = func_003FDF90(*(int *)(*piVar13 + 0x14),(int)local_74);
  func_00166C20(piVar13,0,&local_50,iVar6);
  local_74 = s_InOut_0047c474;
  local_78 = iVar1;
  local_4c = s_G_Close_00_0047c488;
  local_50 = iVar1;
  (**(code **)(iVar1 + 8))(&local_50);
  iVar6 = func_003FDF90(*(int *)(*piVar13 + 0x14),(int)local_4c);
  func_00166C20(piVar13,1,&local_78,iVar6);
  local_74 = s_OutBtn_0047c494;
  local_78 = iVar1;
  local_4c = s_G_Xbtn_00_0047c49c;
  local_50 = iVar1;
  (**(code **)(iVar1 + 8))(&local_50);
  iVar6 = func_003FDF90(*(int *)(*piVar13 + 0x14),(int)local_4c);
  func_00166C20(piVar13,2,&local_78,iVar6);
  local_74 = s_OutBtn_0047c494;
  local_78 = iVar1;
  local_4c = s_G_Ybtn_00_0047c4a8;
  local_50 = iVar1;
  (**(code **)(iVar1 + 8))(&local_50);
  iVar6 = func_003FDF90(*(int *)(*piVar13 + 0x14),(int)local_4c);
  func_00166C20(piVar13,3,&local_78,iVar6);
  local_74 = s_InBtn_0047c4b4;
  local_78 = iVar1;
  local_4c = s_G_Xbtn_00_0047c49c;
  local_50 = iVar1;
  (**(code **)(iVar1 + 8))(&local_50);
  iVar6 = func_003FDF90(*(int *)(*piVar13 + 0x14),(int)local_4c);
  func_00166C20(piVar13,4,&local_78,iVar6);
  local_74 = s_InBtn_0047c4b4;
  local_78 = iVar1;
  local_4c = s_G_Ybtn_00_0047c4a8;
  local_50 = iVar1;
  (**(code **)(iVar1 + 8))(&local_50);
  iVar6 = func_003FDF90(*(int *)(*piVar13 + 0x14),(int)local_4c);
  func_00166C20(piVar13,5,&local_78,iVar6);
  local_74 = s_InOutSlide_0047c4bc;
  local_78 = iVar1;
  local_4c = s_G_Slide_00_0047c4c8;
  local_50 = iVar1;
  (**(code **)(iVar1 + 8))(&local_50);
  iVar6 = func_003FDF90(*(int *)(*piVar13 + 0x14),(int)local_4c);
  func_00166C20(piVar13,6,&local_78,iVar6);
  local_74 = s_Slide_0047c4d4;
  local_78 = iVar1;
  local_4c = s_G_Slide_00_0047c4c8;
  local_50 = iVar1;
  (**(code **)(iVar1 + 8))(&local_50);
  iVar6 = func_003FDF90(*(int *)(*piVar13 + 0x14),(int)local_4c);
  func_00166C20(piVar13,7,&local_78,iVar6);
  local_74 = s_LoopSlide_0047c8d0;
  local_78 = iVar1;
  local_4c = s_G_Slide_00_0047c4c8;
  local_50 = iVar1;
  (**(code **)(iVar1 + 8))(&local_50);
  piVar7 = (int *)func_003FDF90(*(int *)(*piVar13 + 0x14),(int)local_4c);
  func_00166C20(piVar13,8,&local_78,(int)piVar7);
  puVar3[-0x38] = piVar13;
  *(undefined2 *)((int)puVar3 + -0xe6) = 0;
  *(undefined2 *)(puVar3 + -0x3a) = 0;
  puVar3[-0x35] = piVar13;
  *(undefined2 *)((int)puVar3 + -0xda) = 1;
  *(undefined2 *)(puVar3 + -0x37) = 0;
  puVar3[-0x32] = piVar13;
  *(undefined2 *)((int)puVar3 + -0xce) = 6;
  *(undefined2 *)(puVar3 + -0x34) = 0;
  puVar3[-0x2f] = piVar13;
  *(undefined2 *)((int)puVar3 + -0xc2) = 7;
  *(undefined2 *)(puVar3 + -0x31) = 0;
  puVar3[-0x2c] = piVar13;
  *(undefined2 *)((int)puVar3 + -0xb6) = 8;
  *(undefined2 *)(puVar3 + -0x2e) = 0;
  func_002313DC((int)(puVar3 + -0x34));
  puVar5 = (undefined4 *)func_0010BAB4(0xf8);
  iVar6 = 0;
  if (puVar5 != (undefined4 *)0x0) {
    local_74 = s_L_Xbtn_00_0047c8dc;
    local_78 = iVar1;
    piVar7 = piVar2;
    iVar6 = func_00423F68(puVar5,(int *)puVar3[-0xa1],&local_78,piVar2,0);
  }
  puVar3[-0x2b] = iVar6;
  puVar5 = (undefined4 *)func_0010BAB4(0xf8);
  iVar6 = 0;
  if (puVar5 != (undefined4 *)0x0) {
    local_74 = s_L_Ybtn_00_0047c8e8;
    local_78 = iVar1;
    piVar7 = piVar2;
    iVar6 = func_00423F68(puVar5,(int *)puVar3[-0xa1],&local_78,piVar2,1);
  }
  puVar3[-0x2a] = iVar6;
  iVar6 = puVar3[-0x2b];
  *(int **)(iVar6 + 0x28) = piVar13;
  *(undefined2 *)(iVar6 + 0x22) = 4;
  *(undefined2 *)(iVar6 + 0x20) = 0;
  iVar6 = puVar3[-0x2b];
  *(int **)(iVar6 + 0x34) = piVar13;
  *(undefined2 *)(iVar6 + 0x2e) = 2;
  *(undefined2 *)(iVar6 + 0x2c) = 0;
  iVar6 = puVar3[-0x2a];
  *(int **)(iVar6 + 0x28) = piVar13;
  *(undefined2 *)(iVar6 + 0x22) = 5;
  *(undefined2 *)(iVar6 + 0x20) = 0;
  iVar6 = puVar3[-0x2a];
  *(int **)(iVar6 + 0x34) = piVar13;
  *(undefined2 *)(iVar6 + 0x2e) = 3;
  *(undefined2 *)(iVar6 + 0x2c) = 0;
  func_0014CFF0((int)piVar2,puVar3[-0x2b]);
  func_0014CFF0((int)piVar2,puVar3[-0x2a]);
  *(undefined1 *)(puVar3[-0x2b] + 0xe) = 1;
  *(undefined1 *)(puVar3[-0x2a] + 0xe) = 1;
  uVar8 = 0;
  do {
    puVar5 = puVar3 + -0x62;
    if (uVar8 < 0x14) {
      puVar5 = puVar5 + uVar8;
    }
    uVar8 = uVar8 + 1;
    *puVar5 = 0;
    iVar6 = DAT_0047c8f4;
  } while ((int)uVar8 < 0x14);
  local_6c = local_64;
  uStack_68 = 0x10;
  uStack_55 = 0;
  uVar8 = 0;
  local_64[0] = 0;
  local_70 = DAT_0047c8f4;
  do {
    func_004994B0((int)&local_70,s_L_ItemPanel__02d_0047c8f8,uVar8,piVar7);
    puVar5 = (undefined4 *)func_0010BAB4(0xe4);
    if (puVar5 == (undefined4 *)0x0) {
      iVar11 = 0;
    }
    else {
      iVar11 = func_00422298(puVar5,(int *)puVar3[-0xa1],&local_70);
    }
    piVar13 = puVar3 + -0x4e;
    if (uVar8 < 0x14) {
      piVar13 = piVar13 + uVar8;
    }
    *piVar13 = iVar11;
    piVar13 = puVar3 + -0x4e;
    if (uVar8 < 0x14) {
      piVar13 = piVar13 + uVar8;
    }
    func_0014CFF0((int)piVar2,*piVar13);
    uVar8 = uVar8 + 1;
  } while ((int)uVar8 < 0x14);
  puVar5 = (undefined4 *)func_0010BAB4(0xb8);
  iVar11 = 0;
  if (puVar5 != (undefined4 *)0x0) {
    local_74 = s_L_Drag_00_0047c90c;
    local_78 = iVar1;
    iVar11 = func_00422CC4(puVar5,(int *)puVar3[-0xa1],&local_78);
  }
  puVar3[-0x27] = iVar11;
  func_0014CFF0((int)piVar2,iVar11);
  puVar4 = (undefined4 *)func_0010BAB4(0xb8);
  iVar11 = 0;
  if (puVar4 != (undefined4 *)0x0) {
    local_74 = s_L_Drag_01_0047c918;
    local_78 = iVar1;
    iVar11 = func_00422CC4(puVar4,(int *)puVar3[-0xa1],&local_78);
  }
  puVar3[-0x28] = iVar11;
  func_0014CFF0((int)piVar2,iVar11);
  uVar8 = 0;
  *(undefined1 *)(puVar3[-0x28] + 0xe) = 1;
  *(undefined1 *)(puVar3[-0x27] + 0xe) = 1;
  local_6c = local_64;
  uStack_68 = 0x10;
  uStack_55 = 0;
  local_64[0] = 0;
  local_70 = iVar6;
  do {
    func_004994B0((int)&local_70,s_P_Cursor__02d_0047c924,uVar8,puVar5);
    (**(code **)(local_70 + 8))(&local_70);
    local_88 = iVar1;
    local_84 = local_6c;
    iVar6 = func_005229AC((int *)puVar3[-0xa1],&local_88);
    if ((iVar6 != 0) && ((*(byte *)(iVar6 + 0x44) & 1) != 0)) {
      *(byte *)(iVar6 + 0x44) = *(byte *)(iVar6 + 0x44) & 0xfe;
    }
    uVar8 = uVar8 + 1;
  } while ((int)uVar8 < 0x14);
  local_44 = s_P_CursorX_00_0047c934;
  local_48 = iVar1;
  iVar6 = func_005229AC((int *)puVar3[-0xa1],&local_48);
  if (iVar6 != 0) {
    func_00167E04(puVar3[-0xa1],iVar6,0);
  }
  local_44 = s_P_CursorY_00_0047c944;
  local_48 = iVar1;
  iVar6 = func_005229AC((int *)puVar3[-0xa1],&local_48);
  if (iVar6 != 0) {
    func_00167E04(puVar3[-0xa1],iVar6,0);
  }
  func_0014CFF0((int)piVar2,(int)(puVar3 + -0x21));
  puVar4 = (undefined4 *)func_0010BAB4(0x7c);
  puVar5 = (undefined4 *)0x0;
  if (puVar4 != (undefined4 *)0x0) {
    local_74 = s_L_SlideBtn_00_0047cd4c;
    local_78 = iVar1;
    puVar5 = func_00425388(puVar4,(int *)puVar3[-0xa1],&local_78,piVar2);
  }
  puVar3[-0x26] = puVar5;
  func_0014CFF0((int)piVar2,(int)puVar5);
  puVar4 = (undefined4 *)func_0010BAB4(0x70);
  puVar5 = (undefined4 *)0x0;
  if (puVar4 != (undefined4 *)0x0) {
    local_74 = s_L_Close_00_0047cd5c;
    local_78 = iVar1;
    puVar5 = func_0028BE38(puVar4,(int *)puVar3[-0xa1],&local_78);
  }
  puVar3[-0x29] = puVar5;
  func_0014CFF0((int)piVar2,(int)puVar5);
  puVar4 = (undefined4 *)func_0010BAB4(0x20);
  puVar5 = (undefined4 *)0x0;
  if (puVar4 != (undefined4 *)0x0) {
    puVar5 = func_002C0294(puVar4);
  }
  puVar3[-0xa3] = puVar5;
  *(undefined1 *)((int)puVar3 + -0x291) = 0x18;
  func_003529A0(&local_48,s_UI_ItemSelect_0047cd68,puVar3 + -0x76);
  local_3c = puVar3 + 0x1e;
  func_003525AC(puVar3[0x1d],&local_48,0);
  local_94[0] = 0x11;
  func_0066E870((int)(puVar3 + -0x6c),piVar2,local_94);
  local_74 = s_cStep_Choice_0047cd78;
  local_78 = iVar1;
  func_0010BEC4((int)(puVar3 + -0x6c),0,&local_78);
  iVar6 = DAT_0047cd88;
  uVar16 = *(undefined4 *)(DAT_0047cd88 + 0x244);
  uVar10 = *(undefined4 *)(DAT_0047cd88 + 0x248);
  uVar15 = *(undefined4 *)(DAT_0047cd88 + 0x24c);
  uVar14 = *(undefined4 *)(DAT_0047cd88 + 0x250);
  uVar12 = *(undefined4 *)(DAT_0047cd88 + 0x254);
  local_94[0] = 0;
  puVar5 = (undefined4 *)puVar3[-0x66];
  *puVar5 = *(undefined4 *)(DAT_0047cd88 + 0x240);
  puVar5[1] = uVar16;
  puVar5 = (undefined4 *)puVar3[-0x65];
  *puVar5 = uVar10;
  puVar5[1] = uVar15;
  puVar5 = (undefined4 *)puVar3[-100];
  *puVar5 = uVar14;
  puVar5[1] = uVar12;
  local_74 = s_cStep_Drag_0047cd8c;
  local_78 = iVar1;
  func_0010BEC4((int)(puVar3 + -0x6c),1,&local_78);
  uVar12 = *(undefined4 *)(iVar6 + 0x26c);
  uVar10 = *(undefined4 *)(iVar6 + 0x25c);
  uVar14 = *(undefined4 *)(iVar6 + 0x260);
  uVar16 = *(undefined4 *)(iVar6 + 0x264);
  uVar15 = *(undefined4 *)(iVar6 + 0x268);
  local_94[0] = 1;
  iVar11 = puVar3[-0x66];
  *(undefined4 *)(iVar11 + 8) = *(undefined4 *)(iVar6 + 600);
  *(undefined4 *)(iVar11 + 0xc) = uVar10;
  iVar11 = puVar3[-0x65];
  *(undefined4 *)(iVar11 + 8) = uVar14;
  *(undefined4 *)(iVar11 + 0xc) = uVar16;
  iVar11 = puVar3[-100];
  *(undefined4 *)(iVar11 + 8) = uVar15;
  *(undefined4 *)(iVar11 + 0xc) = uVar12;
  local_74 = s_cStep_Drop_0047cd98;
  local_78 = iVar1;
  func_0010BEC4((int)(puVar3 + -0x6c),2,&local_78);
  uVar10 = *(undefined4 *)(iVar6 + 0x274);
  uVar15 = *(undefined4 *)(iVar6 + 0x278);
  uVar12 = *(undefined4 *)(iVar6 + 0x27c);
  uVar16 = *(undefined4 *)(iVar6 + 0x250);
  uVar14 = *(undefined4 *)(iVar6 + 0x254);
  local_94[0] = 2;
  iVar11 = puVar3[-0x66];
  *(undefined4 *)(iVar11 + 0x10) = *(undefined4 *)(iVar6 + 0x270);
  *(undefined4 *)(iVar11 + 0x14) = uVar10;
  iVar11 = puVar3[-0x65];
  *(undefined4 *)(iVar11 + 0x10) = uVar15;
  *(undefined4 *)(iVar11 + 0x14) = uVar12;
  iVar11 = puVar3[-100];
  *(undefined4 *)(iVar11 + 0x10) = uVar16;
  *(undefined4 *)(iVar11 + 0x14) = uVar14;
  local_74 = s_cStep_DropXY_0047cda4;
  local_78 = iVar1;
  func_0010BEC4((int)(puVar3 + -0x6c),3,&local_78);
  uVar10 = *(undefined4 *)(iVar6 + 0x288);
  uVar14 = *(undefined4 *)(iVar6 + 0x28c);
  uVar15 = *(undefined4 *)(iVar6 + 0x250);
  uVar12 = *(undefined4 *)(iVar6 + 0x254);
  uVar16 = *(undefined4 *)(iVar6 + 0x284);
  local_94[0] = 3;
  iVar11 = puVar3[-0x66];
  *(undefined4 *)(iVar11 + 0x18) = *(undefined4 *)(iVar6 + 0x280);
  *(undefined4 *)(iVar11 + 0x1c) = uVar16;
  iVar11 = puVar3[-0x65];
  *(undefined4 *)(iVar11 + 0x18) = uVar10;
  *(undefined4 *)(iVar11 + 0x1c) = uVar14;
  iVar11 = puVar3[-100];
  *(undefined4 *)(iVar11 + 0x18) = uVar15;
  *(undefined4 *)(iVar11 + 0x1c) = uVar12;
  local_74 = s_cStep_SetItem_0047cdb4;
  local_78 = iVar1;
  func_0010BEC4((int)(puVar3 + -0x6c),4,&local_78);
  uVar10 = *(undefined4 *)(iVar6 + 0x298);
  uVar14 = *(undefined4 *)(iVar6 + 0x29c);
  uVar12 = *(undefined4 *)(iVar6 + 0x250);
  uVar16 = *(undefined4 *)(iVar6 + 0x254);
  uVar15 = *(undefined4 *)(iVar6 + 0x294);
  local_94[0] = 4;
  iVar11 = puVar3[-0x66];
  *(undefined4 *)(iVar11 + 0x20) = *(undefined4 *)(iVar6 + 0x290);
  *(undefined4 *)(iVar11 + 0x24) = uVar15;
  iVar11 = puVar3[-0x65];
  *(undefined4 *)(iVar11 + 0x20) = uVar10;
  *(undefined4 *)(iVar11 + 0x24) = uVar14;
  iVar11 = puVar3[-100];
  *(undefined4 *)(iVar11 + 0x20) = uVar12;
  *(undefined4 *)(iVar11 + 0x24) = uVar16;
  local_74 = s_cStep_EndDrop_0047cdc4;
  local_78 = iVar1;
  func_0010BEC4((int)(puVar3 + -0x6c),5,&local_78);
  uVar12 = *(undefined4 *)(iVar6 + 0x2a8);
  uVar15 = *(undefined4 *)(iVar6 + 0x2ac);
  uVar14 = *(undefined4 *)(iVar6 + 0x250);
  uVar16 = *(undefined4 *)(iVar6 + 0x254);
  uVar10 = *(undefined4 *)(iVar6 + 0x2a4);
  local_94[0] = 5;
  iVar11 = puVar3[-0x66];
  *(undefined4 *)(iVar11 + 0x28) = *(undefined4 *)(iVar6 + 0x2a0);
  *(undefined4 *)(iVar11 + 0x2c) = uVar10;
  iVar11 = puVar3[-0x65];
  *(undefined4 *)(iVar11 + 0x28) = uVar12;
  *(undefined4 *)(iVar11 + 0x2c) = uVar15;
  iVar11 = puVar3[-100];
  *(undefined4 *)(iVar11 + 0x28) = uVar14;
  *(undefined4 *)(iVar11 + 0x2c) = uVar16;
  local_74 = s_cStep_Config_0047cdd4;
  local_78 = iVar1;
  func_0010BEC4((int)(puVar3 + -0x6c),6,&local_78);
  uVar10 = *(undefined4 *)(iVar6 + 0x2b4);
  uVar12 = *(undefined4 *)(iVar6 + 0x2b8);
  uVar14 = *(undefined4 *)(iVar6 + 700);
  uVar15 = *(undefined4 *)(iVar6 + 0x2c0);
  uVar16 = *(undefined4 *)(iVar6 + 0x2c4);
  local_94[0] = 6;
  iVar11 = puVar3[-0x66];
  *(undefined4 *)(iVar11 + 0x30) = *(undefined4 *)(iVar6 + 0x2b0);
  *(undefined4 *)(iVar11 + 0x34) = uVar10;
  iVar11 = puVar3[-0x65];
  *(undefined4 *)(iVar11 + 0x30) = uVar12;
  *(undefined4 *)(iVar11 + 0x34) = uVar14;
  iVar11 = puVar3[-100];
  *(undefined4 *)(iVar11 + 0x30) = uVar15;
  *(undefined4 *)(iVar11 + 0x34) = uVar16;
  local_74 = s_cStep_SlotSelectX_0047cde4;
  local_78 = iVar1;
  func_0010BEC4((int)(puVar3 + -0x6c),7,&local_78);
  uVar10 = *(undefined4 *)(iVar6 + 0x2d0);
  uVar15 = *(undefined4 *)(iVar6 + 0x2d4);
  uVar12 = *(undefined4 *)(DAT_0047cd88 + 0x2cc);
  uVar16 = *(undefined4 *)(iVar6 + 0x250);
  uVar14 = *(undefined4 *)(iVar6 + 0x254);
  local_94[0] = 7;
  iVar11 = puVar3[-0x66];
  *(undefined4 *)(iVar11 + 0x38) = *(undefined4 *)(DAT_0047cd88 + 0x2c8);
  *(undefined4 *)(iVar11 + 0x3c) = uVar12;
  iVar11 = puVar3[-0x65];
  *(undefined4 *)(iVar11 + 0x38) = uVar10;
  *(undefined4 *)(iVar11 + 0x3c) = uVar15;
  iVar11 = puVar3[-100];
  *(undefined4 *)(iVar11 + 0x38) = uVar16;
  *(undefined4 *)(iVar11 + 0x3c) = uVar14;
  local_74 = s_cStep_SlotSelectY_0047d1cc;
  local_78 = iVar1;
  func_0010BEC4((int)(puVar3 + -0x6c),8,&local_78);
  uVar15 = *(undefined4 *)(iVar6 + 0x2e0);
  uVar10 = *(undefined4 *)(iVar6 + 0x2e4);
  uVar14 = *(undefined4 *)(iVar6 + 0x250);
  uVar12 = *(undefined4 *)(iVar6 + 0x254);
  uVar16 = *(undefined4 *)(iVar6 + 0x2dc);
  local_94[0] = 8;
  iVar11 = puVar3[-0x66];
  *(undefined4 *)(iVar11 + 0x40) = *(undefined4 *)(iVar6 + 0x2d8);
  *(undefined4 *)(iVar11 + 0x44) = uVar16;
  iVar11 = puVar3[-0x65];
  *(undefined4 *)(iVar11 + 0x40) = uVar15;
  *(undefined4 *)(iVar11 + 0x44) = uVar10;
  iVar11 = puVar3[-100];
  *(undefined4 *)(iVar11 + 0x40) = uVar14;
  *(undefined4 *)(iVar11 + 0x44) = uVar12;
  local_74 = s_cStep_SlotDecide_0047d1e0;
  local_78 = iVar1;
  func_0010BEC4((int)(puVar3 + -0x6c),9,&local_78);
  uVar14 = *(undefined4 *)(iVar6 + 0x2f0);
  uVar15 = *(undefined4 *)(iVar6 + 0x2f4);
  uVar12 = *(undefined4 *)(iVar6 + 0x250);
  uVar10 = *(undefined4 *)(iVar6 + 0x254);
  uVar16 = *(undefined4 *)(iVar6 + 0x2ec);
  local_94[0] = 9;
  iVar11 = puVar3[-0x66];
  *(undefined4 *)(iVar11 + 0x48) = *(undefined4 *)(iVar6 + 0x2e8);
  *(undefined4 *)(iVar11 + 0x4c) = uVar16;
  iVar11 = puVar3[-0x65];
  *(undefined4 *)(iVar11 + 0x48) = uVar14;
  *(undefined4 *)(iVar11 + 0x4c) = uVar15;
  iVar11 = puVar3[-100];
  *(undefined4 *)(iVar11 + 0x48) = uVar12;
  *(undefined4 *)(iVar11 + 0x4c) = uVar10;
  local_74 = s_cStep_SlotOut_0047d1f4;
  local_78 = iVar1;
  func_0010BEC4((int)(puVar3 + -0x6c),10,&local_78);
  iVar11 = DAT_0047cd88;
  uVar14 = *(undefined4 *)(iVar6 + 0x250);
  uVar16 = *(undefined4 *)(iVar6 + 0x254);
  uVar12 = *(undefined4 *)(DAT_0047cd88 + 0x300);
  uVar15 = *(undefined4 *)(DAT_0047cd88 + 0x304);
  uVar10 = *(undefined4 *)(DAT_0047cd88 + 0x2fc);
  local_94[0] = 10;
  iVar9 = puVar3[-0x66];
  *(undefined4 *)(iVar9 + 0x50) = *(undefined4 *)(DAT_0047cd88 + 0x2f8);
  *(undefined4 *)(iVar9 + 0x54) = uVar10;
  iVar9 = puVar3[-0x65];
  *(undefined4 *)(iVar9 + 0x50) = uVar12;
  *(undefined4 *)(iVar9 + 0x54) = uVar15;
  iVar9 = puVar3[-100];
  *(undefined4 *)(iVar9 + 0x50) = uVar14;
  *(undefined4 *)(iVar9 + 0x54) = uVar16;
  local_74 = s_cStep_SlotCancel_0047d204;
  local_78 = iVar1;
  func_0010BEC4((int)(puVar3 + -0x6c),0xb,&local_78);
  uVar12 = *(undefined4 *)(iVar11 + 0x310);
  uVar14 = *(undefined4 *)(iVar11 + 0x314);
  uVar10 = *(undefined4 *)(iVar6 + 0x250);
  uVar16 = *(undefined4 *)(iVar6 + 0x254);
  uVar15 = *(undefined4 *)(iVar11 + 0x30c);
  local_94[0] = 0xb;
  iVar9 = puVar3[-0x66];
  *(undefined4 *)(iVar9 + 0x58) = *(undefined4 *)(iVar11 + 0x308);
  *(undefined4 *)(iVar9 + 0x5c) = uVar15;
  iVar9 = puVar3[-0x65];
  *(undefined4 *)(iVar9 + 0x58) = uVar12;
  *(undefined4 *)(iVar9 + 0x5c) = uVar14;
  iVar9 = puVar3[-100];
  *(undefined4 *)(iVar9 + 0x58) = uVar10;
  *(undefined4 *)(iVar9 + 0x5c) = uVar16;
  local_74 = s_cStep_GetDemo_0047d218;
  local_78 = iVar1;
  func_0010BEC4((int)(puVar3 + -0x6c),0xc,&local_78);
  uVar12 = *(undefined4 *)(iVar11 + 800);
  uVar14 = *(undefined4 *)(iVar11 + 0x324);
  uVar15 = *(undefined4 *)(iVar6 + 0x250);
  uVar10 = *(undefined4 *)(iVar6 + 0x254);
  uVar16 = *(undefined4 *)(iVar11 + 0x31c);
  local_94[0] = 0xc;
  iVar9 = puVar3[-0x66];
  *(undefined4 *)(iVar9 + 0x60) = *(undefined4 *)(iVar11 + 0x318);
  *(undefined4 *)(iVar9 + 100) = uVar16;
  iVar9 = puVar3[-0x65];
  *(undefined4 *)(iVar9 + 0x60) = uVar12;
  *(undefined4 *)(iVar9 + 100) = uVar14;
  iVar9 = puVar3[-100];
  *(undefined4 *)(iVar9 + 0x60) = uVar15;
  *(undefined4 *)(iVar9 + 100) = uVar10;
  local_74 = s_cStep_Effect_0047d228;
  local_78 = iVar1;
  func_0010BEC4((int)(puVar3 + -0x6c),0xd,&local_78);
  uVar12 = *(undefined4 *)(iVar6 + 0x250);
  uVar15 = *(undefined4 *)(iVar6 + 0x254);
  uVar10 = *(undefined4 *)(iVar11 + 0x330);
  uVar14 = *(undefined4 *)(iVar11 + 0x334);
  uVar16 = *(undefined4 *)(iVar11 + 0x32c);
  local_94[0] = 0xd;
  iVar9 = puVar3[-0x66];
  *(undefined4 *)(iVar9 + 0x68) = *(undefined4 *)(iVar11 + 0x328);
  *(undefined4 *)(iVar9 + 0x6c) = uVar16;
  iVar9 = puVar3[-0x65];
  *(undefined4 *)(iVar9 + 0x68) = uVar10;
  *(undefined4 *)(iVar9 + 0x6c) = uVar14;
  iVar9 = puVar3[-100];
  *(undefined4 *)(iVar9 + 0x68) = uVar12;
  *(undefined4 *)(iVar9 + 0x6c) = uVar15;
  local_74 = s_cStep_GetLost_0047d238;
  local_78 = iVar1;
  func_0010BEC4((int)(puVar3 + -0x6c),0xe,&local_78);
  uVar10 = *(undefined4 *)(iVar11 + 0x340);
  uVar15 = *(undefined4 *)(DAT_0047cd88 + 0x250);
  uVar16 = *(undefined4 *)(DAT_0047cd88 + 0x33c);
  uVar14 = *(undefined4 *)(iVar11 + 0x344);
  uVar12 = *(undefined4 *)(DAT_0047cd88 + 0x254);
  local_94[0] = 0xe;
  iVar9 = puVar3[-0x66];
  *(undefined4 *)(iVar9 + 0x70) = *(undefined4 *)(DAT_0047cd88 + 0x338);
  *(undefined4 *)(iVar9 + 0x74) = uVar16;
  iVar9 = puVar3[-0x65];
  *(undefined4 *)(iVar9 + 0x70) = uVar10;
  *(undefined4 *)(iVar9 + 0x74) = uVar14;
  iVar9 = puVar3[-100];
  *(undefined4 *)(iVar9 + 0x70) = uVar15;
  *(undefined4 *)(iVar9 + 0x74) = uVar12;
  local_74 = s_cStep_BarDemo_0047d248;
  local_78 = iVar1;
  func_0010BEC4((int)(puVar3 + -0x6c),0xf,&local_78);
  uVar12 = *(undefined4 *)(iVar11 + 0x350);
  uVar14 = *(undefined4 *)(iVar11 + 0x354);
  uVar10 = *(undefined4 *)(iVar11 + 0x358);
  uVar15 = *(undefined4 *)(iVar11 + 0x35c);
  uVar16 = *(undefined4 *)(iVar11 + 0x34c);
  local_94[0] = 0xf;
  iVar9 = puVar3[-0x66];
  *(undefined4 *)(iVar9 + 0x78) = *(undefined4 *)(iVar11 + 0x348);
  *(undefined4 *)(iVar9 + 0x7c) = uVar16;
  iVar9 = puVar3[-0x65];
  *(undefined4 *)(iVar9 + 0x78) = uVar12;
  *(undefined4 *)(iVar9 + 0x7c) = uVar14;
  iVar9 = puVar3[-100];
  *(undefined4 *)(iVar9 + 0x78) = uVar10;
  *(undefined4 *)(iVar9 + 0x7c) = uVar15;
  local_74 = s_cStep_None_0047d258;
  local_78 = iVar1;
  func_0010BEC4((int)(puVar3 + -0x6c),0x10,&local_78);
  iVar9 = puVar3[-0x66];
  uVar10 = *(undefined4 *)(iVar6 + 0x250);
  uVar14 = *(undefined4 *)(iVar6 + 0x254);
  uVar12 = *(undefined4 *)(iVar11 + 0x364);
  uVar15 = *(undefined4 *)(iVar11 + 0x368);
  uVar16 = *(undefined4 *)(iVar11 + 0x36c);
  *(undefined4 *)(iVar9 + 0x80) = *(undefined4 *)(iVar11 + 0x360);
  *(undefined4 *)(iVar9 + 0x84) = uVar12;
  iVar6 = puVar3[-0x65];
  *(undefined4 *)(iVar6 + 0x80) = uVar15;
  *(undefined4 *)(iVar6 + 0x84) = uVar16;
  iVar6 = puVar3[-100];
  *(undefined4 *)(iVar6 + 0x80) = uVar10;
  *(undefined4 *)(iVar6 + 0x84) = uVar14;
  local_94[0] = 5;
  func_0066E870((int)(puVar3 + -0x75),piVar2,local_94);
  local_74 = s_cState_Idle_0047d264;
  local_78 = iVar1;
  func_0010BEC4((int)(puVar3 + -0x75),0,&local_78);
  uVar10 = *(undefined4 *)(iVar11 + 0x374);
  uVar12 = *(undefined4 *)(iVar11 + 0x378);
  uVar14 = *(undefined4 *)(iVar11 + 0x37c);
  uVar15 = *(undefined4 *)(iVar11 + 0x380);
  uVar16 = *(undefined4 *)(iVar11 + 900);
  local_94[0] = 0;
  puVar5 = (undefined4 *)puVar3[-0x6f];
  *puVar5 = *(undefined4 *)(iVar11 + 0x370);
  puVar5[1] = uVar10;
  puVar5 = (undefined4 *)puVar3[-0x6e];
  *puVar5 = uVar12;
  puVar5[1] = uVar14;
  puVar5 = (undefined4 *)puVar3[-0x6d];
  *puVar5 = uVar15;
  puVar5[1] = uVar16;
  local_74 = s_cState_Select_0047d3e4;
  local_78 = iVar1;
  func_0010BEC4((int)(puVar3 + -0x75),1,&local_78);
  uVar10 = *(undefined4 *)(iVar11 + 0x38c);
  uVar12 = *(undefined4 *)(iVar11 + 0x390);
  uVar14 = *(undefined4 *)(iVar11 + 0x394);
  uVar15 = *(undefined4 *)(iVar11 + 0x398);
  uVar16 = *(undefined4 *)(iVar11 + 0x39c);
  local_94[0] = 1;
  iVar6 = puVar3[-0x6f];
  *(undefined4 *)(iVar6 + 8) = *(undefined4 *)(iVar11 + 0x388);
  *(undefined4 *)(iVar6 + 0xc) = uVar10;
  iVar6 = puVar3[-0x6e];
  *(undefined4 *)(iVar6 + 8) = uVar12;
  *(undefined4 *)(iVar6 + 0xc) = uVar14;
  iVar6 = puVar3[-0x6d];
  *(undefined4 *)(iVar6 + 8) = uVar15;
  *(undefined4 *)(iVar6 + 0xc) = uVar16;
  local_74 = s_cState_Slot_0047d3f4;
  local_78 = iVar1;
  func_0010BEC4((int)(puVar3 + -0x75),2,&local_78);
  uVar10 = *(undefined4 *)(iVar11 + 0x3a4);
  uVar12 = *(undefined4 *)(iVar11 + 0x3a8);
  uVar14 = *(undefined4 *)(iVar11 + 0x3ac);
  uVar15 = *(undefined4 *)(iVar11 + 0x3b0);
  uVar16 = *(undefined4 *)(iVar11 + 0x3b4);
  local_94[0] = 2;
  iVar6 = puVar3[-0x6f];
  *(undefined4 *)(iVar6 + 0x10) = *(undefined4 *)(iVar11 + 0x3a0);
  *(undefined4 *)(iVar6 + 0x14) = uVar10;
  iVar6 = puVar3[-0x6e];
  *(undefined4 *)(iVar6 + 0x10) = uVar12;
  *(undefined4 *)(iVar6 + 0x14) = uVar14;
  iVar6 = puVar3[-0x6d];
  *(undefined4 *)(iVar6 + 0x10) = uVar15;
  *(undefined4 *)(iVar6 + 0x14) = uVar16;
  local_74 = s_cState_Show_0047d400;
  local_78 = iVar1;
  func_0010BEC4((int)(puVar3 + -0x75),3,&local_78);
  uVar10 = *(undefined4 *)(iVar11 + 0x3bc);
  uVar12 = *(undefined4 *)(iVar11 + 0x3c0);
  uVar14 = *(undefined4 *)(iVar11 + 0x3c4);
  uVar15 = *(undefined4 *)(iVar11 + 0x3c8);
  uVar16 = *(undefined4 *)(iVar11 + 0x3cc);
  local_94[0] = 3;
  iVar6 = puVar3[-0x6f];
  *(undefined4 *)(iVar6 + 0x18) = *(undefined4 *)(iVar11 + 0x3b8);
  *(undefined4 *)(iVar6 + 0x1c) = uVar10;
  iVar6 = puVar3[-0x6e];
  *(undefined4 *)(iVar6 + 0x18) = uVar12;
  *(undefined4 *)(iVar6 + 0x1c) = uVar14;
  iVar6 = puVar3[-0x6d];
  *(undefined4 *)(iVar6 + 0x18) = uVar15;
  *(undefined4 *)(iVar6 + 0x1c) = uVar16;
  local_74 = s_cState_Out_0047d40c;
  local_78 = iVar1;
  func_0010BEC4((int)(puVar3 + -0x75),4,&local_78);
  uVar12 = *(undefined4 *)(iVar11 + 0x3d8);
  uVar14 = *(undefined4 *)(iVar11 + 0x3dc);
  uVar16 = *(undefined4 *)(DAT_0047cd88 + 0x3d4);
  uVar10 = *(undefined4 *)(iVar11 + 0x3e0);
  uVar15 = *(undefined4 *)(iVar11 + 0x3e4);
  local_94[0] = 4;
  iVar6 = puVar3[-0x6f];
  *(undefined4 *)(iVar6 + 0x20) = *(undefined4 *)(DAT_0047cd88 + 0x3d0);
  *(undefined4 *)(iVar6 + 0x24) = uVar16;
  iVar6 = puVar3[-0x6e];
  *(undefined4 *)(iVar6 + 0x20) = uVar12;
  *(undefined4 *)(iVar6 + 0x24) = uVar14;
  iVar6 = puVar3[-0x6d];
  *(undefined4 *)(iVar6 + 0x20) = uVar10;
  *(undefined4 *)(iVar6 + 0x24) = uVar15;
  func_0066E7A0(puVar3 + -0x75,'\0');
  return piVar2;
}

