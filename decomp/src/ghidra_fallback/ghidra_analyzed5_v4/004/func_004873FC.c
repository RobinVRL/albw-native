#include "ghidra_types.h"

extern int func_00166C20(int *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016773C(int param_1,int param_2);
extern int func_002313DC(int param_1);
extern int func_00231448(int param_1);
extern int func_00232384(int param_1);
extern int func_003FDF90(int param_1,int param_2);
extern int func_004B9A10(undefined4 *param_1,undefined1 param_2);
extern int func_0051E300(int param_1);
extern int DAT_00487734;
extern int DAT_00487738;
extern undefined1 *DAT_0048773c;
extern int DAT_00487754;
extern char s_G_ItemNoBell_00_00487778[];
extern char s_G_Item_00_00487788[];
extern char s_G_Tsumami_00_00487794[];
extern char s_G_XYBtn_00_0048776c[];
extern char s_G_YBtn_00_00487760[];
extern char s_Gm_ExplainItemMaskB_00487740[];
extern char s_InOut_00487758[];

// USA 004873FC <- EU 004873D4 (Ghidra, non-matching)
// GLOBAL DAT_00487734 int
// GLOBAL DAT_00487738 int
// GLOBAL DAT_0048773c undefined1 *
// GLOBAL DAT_00487754 int
// GLOBAL s_G_ItemNoBell_00_00487778 string
// GLOBAL s_G_Item_00_00487788 string
// GLOBAL s_G_Tsumami_00_00487794 string
// GLOBAL s_G_XYBtn_00_0048776c string
// GLOBAL s_G_YBtn_00_00487760 string
// GLOBAL s_Gm_ExplainItemMaskB_00487740 string
// GLOBAL s_InOut_00487758 string

int * func_004873FC(undefined4 *param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define local_80 (*(int *)(albw_frame + 0x0))
  #define local_7c (*(char * *)(albw_frame + 0x4))
  #define local_78 (*(int *)(albw_frame + 0x8))
  #define local_74 (*(char * *)(albw_frame + 0xc))
  #define local_70 (*(undefined2 *)(albw_frame + 0x10))
  #define local_6e (*(undefined2 *)(albw_frame + 0x12))
  #define local_6c (*(int *)(albw_frame + 0x14))
  #define local_68 (*(int * *)(albw_frame + 0x18))
  #define local_60 (*(undefined2 *)(albw_frame + 0x20))
  #define local_5e (*(undefined2 *)(albw_frame + 0x22))
  #define local_5c (*(int *)(albw_frame + 0x24))
  #define local_58 (*(int * *)(albw_frame + 0x28))
  #define local_54 (*(undefined2 *)(albw_frame + 0x2c))
  #define local_52 (*(undefined2 *)(albw_frame + 0x2e))
  #define local_50 (*(int *)(albw_frame + 0x30))
  #define local_4c (*(int * *)(albw_frame + 0x34))
  #define local_48 (*(undefined2 *)(albw_frame + 0x38))
  #define local_46 (*(undefined2 *)(albw_frame + 0x3a))
  #define local_44 (*(int *)(albw_frame + 0x3c))
  #define local_40 (*(int * *)(albw_frame + 0x40))
  #define local_3c (*(undefined2 *)(albw_frame + 0x44))
  #define local_3a (*(undefined2 *)(albw_frame + 0x46))
  #define local_38 (*(int *)(albw_frame + 0x48))
  #define local_34 (*(int * *)(albw_frame + 0x4c))
  piVar2 = func_004B9A10(param_1,0);
  iVar5 = DAT_00487734 + 0x54;
  *piVar2 = DAT_00487734;
  piVar2[0xe] = iVar5;
  iVar5 = DAT_00487738;
  *(undefined2 *)(piVar2 + 0x1d) = 0;
  *(undefined2 *)((int)piVar2 + 0x76) = 0xffff;
  puVar1 = DAT_0048773c;
  piVar2[0x1e] = iVar5;
  piVar2[0x1f] = 0;
  *(undefined1 *)(piVar2 + 0x20) = 0xff;
  iVar4 = DAT_00487754;
  *(undefined1 *)((int)piVar2 + 0x81) = 0xff;
  *puVar1 = 1;
  local_7c = s_Gm_ExplainItemMaskB_00487740;
  local_80 = iVar4;
  (**(code **)(*piVar2 + 0x38))(piVar2,&local_80,0);
  piVar6 = (int *)piVar2[7];
  func_0016773C((int)piVar6,5);
  local_7c = s_InOut_00487758;
  local_80 = iVar4;
  local_74 = s_G_YBtn_00_00487760;
  local_78 = iVar4;
  (**(code **)(iVar4 + 8))(&local_78);
  iVar3 = func_003FDF90(*(int *)(*piVar6 + 0x14),(int)local_74);
  func_00166C20(piVar6,0,&local_80,iVar3);
  local_74 = s_InOut_00487758;
  local_78 = iVar4;
  local_7c = s_G_XYBtn_00_0048776c;
  local_80 = iVar4;
  (**(code **)(iVar4 + 8))(&local_80);
  iVar3 = func_003FDF90(*(int *)(*piVar6 + 0x14),(int)local_7c);
  func_00166C20(piVar6,1,&local_78,iVar3);
  local_74 = s_InOut_00487758;
  local_78 = iVar4;
  local_7c = s_G_ItemNoBell_00_00487778;
  local_80 = iVar4;
  (**(code **)(iVar4 + 8))(&local_80);
  iVar3 = func_003FDF90(*(int *)(*piVar6 + 0x14),(int)local_7c);
  func_00166C20(piVar6,2,&local_78,iVar3);
  local_74 = s_InOut_00487758;
  local_78 = iVar4;
  local_7c = s_G_Item_00_00487788;
  local_80 = iVar4;
  (**(code **)(iVar4 + 8))(&local_80);
  iVar3 = func_003FDF90(*(int *)(*piVar6 + 0x14),(int)local_7c);
  func_00166C20(piVar6,3,&local_78,iVar3);
  local_74 = s_InOut_00487758;
  local_78 = iVar4;
  local_7c = s_G_Tsumami_00_00487794;
  local_80 = iVar4;
  (**(code **)(iVar4 + 8))(&local_80);
  iVar4 = func_003FDF90(*(int *)(*piVar6 + 0x14),(int)local_7c);
  func_00166C20(piVar6,4,&local_78,iVar4);
  local_70 = 0;
  local_54 = 0;
  local_48 = 0;
  local_3c = 0;
  local_60 = 0;
  local_52 = 1;
  local_6e = 0;
  local_46 = 2;
  local_3a = 3;
  local_5e = 4;
  local_6c = iVar5;
  local_68 = piVar6;
  local_5c = iVar5;
  local_58 = piVar6;
  local_50 = iVar5;
  local_4c = piVar6;
  local_44 = iVar5;
  local_40 = piVar6;
  local_38 = iVar5;
  local_34 = piVar6;
  func_002313DC((int)&local_70);
  func_002313DC((int)&local_54);
  func_002313DC((int)&local_48);
  func_002313DC((int)&local_3c);
  func_002313DC((int)&local_60);
  iVar5 = func_0051E300((int)piVar2);
  if (iVar5 != 0) {
    iVar4 = piVar2[0x15];
    iVar5 = piVar2[0x13];
    while (piVar6 = (int *)(iVar5 - iVar4), piVar6 != (int *)((int)piVar2 + (0x48 - piVar2[0x15])))
    {
      (**(code **)(*piVar6 + 8))(piVar6);
      iVar5 = *(int *)((int)piVar6 + iVar4 + 4);
    }
    func_00232384((int)piVar2);
  }
  func_00231448((int)&local_70);
  func_00231448((int)&local_54);
  func_00231448((int)&local_48);
  func_00231448((int)&local_3c);
  func_00231448((int)&local_60);
  *(undefined1 *)((int)piVar2 + 0xf) = 0x46;
  *puVar1 = 0;
  return piVar2;
}

