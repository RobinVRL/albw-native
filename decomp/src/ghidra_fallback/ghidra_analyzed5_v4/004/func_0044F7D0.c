#include "ghidra_types.h"

extern int func_00166C20(int *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016773C(int param_1,int param_2);
extern int func_002313DC(int param_1);
extern int func_00231448(int param_1);
extern int func_00232384(int param_1);
extern int func_003FDF90(int param_1,int param_2);
extern int func_003FF904(int param_1,int param_2);
extern int func_004B9A10(undefined4 *param_1,undefined1 param_2);
extern int func_0051E300(int param_1);
extern int func_005229AC(int *param_1,int *param_2);
extern int DAT_0044fb74;
extern int DAT_0044fb78;
extern int DAT_0044fb90;
extern undefined DAT_0044fba8;
extern char s_G_DragLB_00_0044fbc8[];
extern char s_G_DragLT_00_0044fb9c[];
extern char s_G_DragRB_00_0044fbd4[];
extern char s_G_DragRT_00_0044fbbc[];
extern char s_G_Drag_00_0044fbb0[];
extern char s_G_Drop_00_0044ff98[];
extern char s_G_Move_00_0044fbe0[];
extern char s_G_Move_01_0044ffa4[];
extern char s_G_Move_02_0044ffb0[];
extern char s_G_Move_03_0044ffbc[];
extern char s_Gm_ExplainItemSetB_0044fb7c[];
extern char s_InOut_0044fb94[];
extern char s_N_Drag_00_0044ffc8[];

// USA 0044F7D0 <- EU 0044F7A8 (Ghidra, non-matching)
// GLOBAL DAT_0044fb74 int
// GLOBAL DAT_0044fb78 int
// GLOBAL DAT_0044fb90 int
// GLOBAL DAT_0044fba8 undefined
// GLOBAL s_G_DragLB_00_0044fbc8 string
// GLOBAL s_G_DragLT_00_0044fb9c string
// GLOBAL s_G_DragRB_00_0044fbd4 string
// GLOBAL s_G_DragRT_00_0044fbbc string
// GLOBAL s_G_Drag_00_0044fbb0 string
// GLOBAL s_G_Drop_00_0044ff98 string
// GLOBAL s_G_Move_00_0044fbe0 string
// GLOBAL s_G_Move_01_0044ffa4 string
// GLOBAL s_G_Move_02_0044ffb0 string
// GLOBAL s_G_Move_03_0044ffbc string
// GLOBAL s_Gm_ExplainItemSetB_0044fb7c string
// GLOBAL s_InOut_0044fb94 string
// GLOBAL s_N_Drag_00_0044ffc8 string

int * func_0044F7D0(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  _Alignas(8) unsigned char albw_frame[0xb0];
  #define local_a8 (*(int *)(albw_frame + 0x8))
  #define local_a4 (*(char * *)(albw_frame + 0xc))
  #define local_a0 (*(int *)(albw_frame + 0x10))
  #define local_9c (*(char * *)(albw_frame + 0x14))
  #define local_98 (*(undefined2 *)(albw_frame + 0x18))
  #define local_96 (*(undefined2 *)(albw_frame + 0x1a))
  #define local_94 (*(int *)(albw_frame + 0x1c))
  #define local_90 (*(int * *)(albw_frame + 0x20))
  #define local_8c (*(undefined2 *)(albw_frame + 0x24))
  #define local_8a (*(undefined2 *)(albw_frame + 0x26))
  #define local_88 (*(int *)(albw_frame + 0x28))
  #define local_84 (*(int * *)(albw_frame + 0x2c))
  #define local_80 (*(undefined2 *)(albw_frame + 0x30))
  #define local_7e (*(undefined2 *)(albw_frame + 0x32))
  #define local_7c (*(int *)(albw_frame + 0x34))
  #define local_78 (*(int * *)(albw_frame + 0x38))
  #define local_74 (*(undefined2 *)(albw_frame + 0x3c))
  #define local_72 (*(undefined2 *)(albw_frame + 0x3e))
  #define local_70 (*(int *)(albw_frame + 0x40))
  #define local_6c (*(int * *)(albw_frame + 0x44))
  #define local_68 (*(undefined2 *)(albw_frame + 0x48))
  #define local_66 (*(undefined2 *)(albw_frame + 0x4a))
  #define local_64 (*(int *)(albw_frame + 0x4c))
  #define local_60 (*(int * *)(albw_frame + 0x50))
  #define local_5c (*(undefined2 *)(albw_frame + 0x54))
  #define local_5a (*(undefined2 *)(albw_frame + 0x56))
  #define local_58 (*(int *)(albw_frame + 0x58))
  #define local_54 (*(int * *)(albw_frame + 0x5c))
  #define local_50 (*(undefined2 *)(albw_frame + 0x60))
  #define local_4e (*(undefined2 *)(albw_frame + 0x62))
  #define local_4c (*(int *)(albw_frame + 0x64))
  #define local_48 (*(int * *)(albw_frame + 0x68))
  #define local_44 (*(undefined2 *)(albw_frame + 0x6c))
  #define local_42 (*(undefined2 *)(albw_frame + 0x6e))
  #define local_40 (*(int *)(albw_frame + 0x70))
  #define local_3c (*(int * *)(albw_frame + 0x74))
  #define local_38 (*(undefined2 *)(albw_frame + 0x78))
  #define local_36 (*(undefined2 *)(albw_frame + 0x7a))
  #define local_34 (*(int *)(albw_frame + 0x7c))
  #define local_30 (*(int * *)(albw_frame + 0x80))
  piVar1 = func_004B9A10(param_1,0);
  iVar4 = DAT_0044fb74 + 0x54;
  *piVar1 = DAT_0044fb74;
  piVar1[0xe] = iVar4;
  iVar4 = DAT_0044fb78;
  *(undefined2 *)(piVar1 + 0x1d) = 0;
  *(undefined2 *)((int)piVar1 + 0x76) = 0xffff;
  piVar1[0x1e] = iVar4;
  piVar1[0x1f] = 0;
  *(undefined2 *)(piVar1 + 0x20) = 0;
  *(undefined2 *)((int)piVar1 + 0x82) = 0xffff;
  piVar1[0x21] = iVar4;
  piVar1[0x22] = 0;
  piVar1[0x25] = 0;
  *(undefined1 *)(piVar1 + 0x26) = 9;
  *(undefined1 *)((int)piVar1 + 0x99) = 9;
  iVar3 = DAT_0044fb90;
  *(undefined1 *)((int)piVar1 + 0x9a) = 0;
  local_a4 = s_Gm_ExplainItemSetB_0044fb7c;
  local_a8 = iVar3;
  (**(code **)(*piVar1 + 0x38))(piVar1,&local_a8,0);
  piVar5 = (int *)piVar1[7];
  func_0016773C((int)piVar5,0x12);
  local_a4 = s_InOut_0044fb94;
  local_a8 = iVar3;
  local_9c = s_G_DragLT_00_0044fb9c;
  local_a0 = iVar3;
  (**(code **)(iVar3 + 8))(&local_a0);
  iVar2 = func_003FDF90(*(int *)(*piVar5 + 0x14),(int)local_9c);
  func_00166C20(piVar5,0,&local_a8,iVar2);
  local_9c = &DAT_0044fba8;
  local_a0 = iVar3;
  local_a4 = s_G_Drag_00_0044fbb0;
  local_a8 = iVar3;
  (**(code **)(iVar3 + 8))(&local_a8);
  iVar2 = func_003FDF90(*(int *)(*piVar5 + 0x14),(int)local_a4);
  func_00166C20(piVar5,1,&local_a0,iVar2);
  local_9c = s_InOut_0044fb94;
  local_a0 = iVar3;
  local_a4 = s_G_DragRT_00_0044fbbc;
  local_a8 = iVar3;
  (**(code **)(iVar3 + 8))(&local_a8);
  iVar2 = func_003FDF90(*(int *)(*piVar5 + 0x14),(int)local_a4);
  func_00166C20(piVar5,2,&local_a0,iVar2);
  local_9c = &DAT_0044fba8;
  local_a0 = iVar3;
  local_a4 = s_G_Drag_00_0044fbb0;
  local_a8 = iVar3;
  (**(code **)(iVar3 + 8))(&local_a8);
  iVar2 = func_003FDF90(*(int *)(*piVar5 + 0x14),(int)local_a4);
  func_00166C20(piVar5,3,&local_a0,iVar2);
  local_9c = s_InOut_0044fb94;
  local_a0 = iVar3;
  local_a4 = s_G_DragLB_00_0044fbc8;
  local_a8 = iVar3;
  (**(code **)(iVar3 + 8))(&local_a8);
  iVar2 = func_003FDF90(*(int *)(*piVar5 + 0x14),(int)local_a4);
  func_00166C20(piVar5,4,&local_a0,iVar2);
  local_9c = &DAT_0044fba8;
  local_a0 = iVar3;
  local_a4 = s_G_Drag_00_0044fbb0;
  local_a8 = iVar3;
  (**(code **)(iVar3 + 8))(&local_a8);
  iVar2 = func_003FDF90(*(int *)(*piVar5 + 0x14),(int)local_a4);
  func_00166C20(piVar5,5,&local_a0,iVar2);
  local_9c = s_InOut_0044fb94;
  local_a0 = iVar3;
  local_a4 = s_G_DragRB_00_0044fbd4;
  local_a8 = iVar3;
  (**(code **)(iVar3 + 8))(&local_a8);
  iVar2 = func_003FDF90(*(int *)(*piVar5 + 0x14),(int)local_a4);
  func_00166C20(piVar5,6,&local_a0,iVar2);
  local_9c = &DAT_0044fba8;
  local_a0 = iVar3;
  local_a4 = s_G_Drag_00_0044fbb0;
  local_a8 = iVar3;
  (**(code **)(iVar3 + 8))(&local_a8);
  iVar2 = func_003FDF90(*(int *)(*piVar5 + 0x14),(int)local_a4);
  func_00166C20(piVar5,7,&local_a0,iVar2);
  local_9c = s_InOut_0044fb94;
  local_a0 = iVar3;
  local_a4 = s_G_Move_00_0044fbe0;
  local_a8 = iVar3;
  (**(code **)(iVar3 + 8))(&local_a8);
  iVar2 = func_003FDF90(*(int *)(*piVar5 + 0x14),(int)local_a4);
  func_00166C20(piVar5,8,&local_a0,iVar2);
  local_9c = &DAT_0044fba8;
  local_a0 = iVar3;
  local_a4 = s_G_Move_00_0044fbe0;
  local_a8 = iVar3;
  (**(code **)(iVar3 + 8))(&local_a8);
  iVar2 = func_003FDF90(*(int *)(*piVar5 + 0x14),(int)local_a4);
  func_00166C20(piVar5,9,&local_a0,iVar2);
  local_9c = s_InOut_0044fb94;
  local_a0 = iVar3;
  local_a4 = s_G_Drop_00_0044ff98;
  local_a8 = iVar3;
  (**(code **)(iVar3 + 8))(&local_a8);
  iVar2 = func_003FDF90(*(int *)(*piVar5 + 0x14),(int)local_a4);
  func_00166C20(piVar5,10,&local_a0,iVar2);
  local_9c = &DAT_0044fba8;
  local_a0 = iVar3;
  local_a4 = s_G_Drop_00_0044ff98;
  local_a8 = iVar3;
  (**(code **)(iVar3 + 8))(&local_a8);
  iVar2 = func_003FDF90(*(int *)(*piVar5 + 0x14),(int)local_a4);
  func_00166C20(piVar5,0xb,&local_a0,iVar2);
  local_9c = s_InOut_0044fb94;
  local_a0 = iVar3;
  local_a4 = s_G_Move_01_0044ffa4;
  local_a8 = iVar3;
  (**(code **)(iVar3 + 8))(&local_a8);
  iVar2 = func_003FDF90(*(int *)(*piVar5 + 0x14),(int)local_a4);
  func_00166C20(piVar5,0xc,&local_a0,iVar2);
  local_9c = &DAT_0044fba8;
  local_a0 = iVar3;
  local_a4 = s_G_Move_01_0044ffa4;
  local_a8 = iVar3;
  (**(code **)(iVar3 + 8))(&local_a8);
  iVar2 = func_003FDF90(*(int *)(*piVar5 + 0x14),(int)local_a4);
  func_00166C20(piVar5,0xd,&local_a0,iVar2);
  local_9c = s_InOut_0044fb94;
  local_a0 = iVar3;
  local_a4 = s_G_Move_02_0044ffb0;
  local_a8 = iVar3;
  (**(code **)(iVar3 + 8))(&local_a8);
  iVar2 = func_003FDF90(*(int *)(*piVar5 + 0x14),(int)local_a4);
  func_00166C20(piVar5,0xe,&local_a0,iVar2);
  local_9c = &DAT_0044fba8;
  local_a0 = iVar3;
  local_a4 = s_G_Move_02_0044ffb0;
  local_a8 = iVar3;
  (**(code **)(iVar3 + 8))(&local_a8);
  iVar2 = func_003FDF90(*(int *)(*piVar5 + 0x14),(int)local_a4);
  func_00166C20(piVar5,0xf,&local_a0,iVar2);
  local_9c = s_InOut_0044fb94;
  local_a0 = iVar3;
  local_a4 = s_G_Move_03_0044ffbc;
  local_a8 = iVar3;
  (**(code **)(iVar3 + 8))(&local_a8);
  iVar2 = func_003FDF90(*(int *)(*piVar5 + 0x14),(int)local_a4);
  func_00166C20(piVar5,0x10,&local_a0,iVar2);
  local_9c = &DAT_0044fba8;
  local_a0 = iVar3;
  local_a4 = s_G_Move_03_0044ffbc;
  local_a8 = iVar3;
  (**(code **)(iVar3 + 8))(&local_a8);
  iVar2 = func_003FDF90(*(int *)(*piVar5 + 0x14),(int)local_a4);
  func_00166C20(piVar5,0x11,&local_a0,iVar2);
  local_9c = s_N_Drag_00_0044ffc8;
  local_a0 = iVar3;
  iVar3 = func_005229AC(piVar5,&local_a0);
  piVar1[0x25] = iVar3;
  *(int *)(iVar3 + 0x1c) = iVar4;
  *(int *)(iVar3 + 0x20) = iVar4;
  *(byte *)(iVar3 + 0x44) = *(byte *)(iVar3 + 0x44) & 0xef | 0x10;
  iVar3 = *(int *)(piVar1[0x25] + 0xc);
  if (iVar3 != 0) {
    func_003FF904(iVar3,piVar1[0x25]);
  }
  local_5c = 0;
  local_50 = 0;
  local_98 = 0;
  local_8c = 0;
  local_80 = 0;
  local_44 = 0;
  local_68 = 0;
  local_38 = 0;
  local_74 = 0;
  local_5a = 0;
  local_4e = 2;
  local_96 = 4;
  local_8a = 6;
  local_7e = 8;
  local_42 = 10;
  local_66 = 0xc;
  local_36 = 0xe;
  local_72 = 0x10;
  local_94 = iVar4;
  local_90 = piVar5;
  local_88 = iVar4;
  local_84 = piVar5;
  local_7c = iVar4;
  local_78 = piVar5;
  local_70 = iVar4;
  local_6c = piVar5;
  local_64 = iVar4;
  local_60 = piVar5;
  local_58 = iVar4;
  local_54 = piVar5;
  local_4c = iVar4;
  local_48 = piVar5;
  local_40 = iVar4;
  local_3c = piVar5;
  local_34 = iVar4;
  local_30 = piVar5;
  func_002313DC((int)&local_5c);
  func_002313DC((int)&local_50);
  func_002313DC((int)&local_98);
  func_002313DC((int)&local_8c);
  func_002313DC((int)&local_80);
  func_002313DC((int)&local_44);
  func_002313DC((int)&local_68);
  func_002313DC((int)&local_38);
  func_002313DC((int)&local_74);
  iVar4 = func_0051E300((int)piVar1);
  if (iVar4 != 0) {
    iVar4 = piVar1[0x15];
    for (piVar5 = (int *)(piVar1[0x13] - iVar4);
        piVar5 != (int *)((int)piVar1 + (0x48 - piVar1[0x15]));
        piVar5 = (int *)(*(int *)((int)piVar5 + iVar4 + 4) - iVar4)) {
      (**(code **)(*piVar5 + 8))(piVar5);
    }
    func_00232384((int)piVar1);
  }
  func_00231448((int)&local_5c);
  func_00231448((int)&local_50);
  func_00231448((int)&local_98);
  func_00231448((int)&local_8c);
  func_00231448((int)&local_80);
  func_00231448((int)&local_44);
  func_00231448((int)&local_68);
  func_00231448((int)&local_38);
  func_00231448((int)&local_74);
  *(undefined1 *)((int)piVar1 + 0xf) = 0x45;
  return piVar1;
}

