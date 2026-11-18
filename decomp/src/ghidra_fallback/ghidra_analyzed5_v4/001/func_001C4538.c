#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_001C4388(int param_1,undefined1 param_2);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int DAT_001c473c;
extern float DAT_001c4740;
extern int DAT_001c4744;
extern int DAT_001c4774;
extern char s_SE_SwitchHit_OFF_001c4760[];
extern char s_SE_SwitchHit_ON_001c4778[];
extern char s_SE_Switch_REFLECT_SWORD_001c4748[];
extern char s_SwitchOnOff_001c47a0[];
extern char s_SwitchOn_001c4794[];
extern char s_SwitchTimer_001c4788[];

// USA 001C4538 <- EU 001C4538 (Ghidra, non-matching)
// GLOBAL DAT_001c473c int
// GLOBAL DAT_001c4740 float
// GLOBAL DAT_001c4744 int
// GLOBAL DAT_001c4774 int
// GLOBAL s_SE_SwitchHit_OFF_001c4760 string
// GLOBAL s_SE_SwitchHit_ON_001c4778 string
// GLOBAL s_SE_Switch_REFLECT_SWORD_001c4748 string
// GLOBAL s_SwitchOnOff_001c47a0 string
// GLOBAL s_SwitchOn_001c4794 string
// GLOBAL s_SwitchTimer_001c4788 string

undefined4 func_001C4538(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  uint in_fpscr;
  float fVar7;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  iVar5 = DAT_001c473c;
  if ((uint)param_1[0x105] <= (uint)param_1[0x104]) {
    param_1[0x105] = 0xf;
    param_1[0x106] = iVar5;
    param_1[0x104] = 0;
    iVar3 = DAT_001c4744;
    fVar2 = DAT_001c4740;
    if ((char)param_1[0x103] != '\0') {
      if ((char)param_1[0x103] != '\x01') {
        return 0;
      }
      if (*(char *)((int)param_1 + 0x40d) != '\x01') {
        if (param_2 == 0) {
          return 0;
        }
        local_14 = s_SE_Switch_REFLECT_SWORD_001c4748;
        local_18 = DAT_001c4744;
        return func_00150A84(param_1,&local_18,0);
      }
      func_001C4388((int)param_1,0);
      if (param_2 == 0) {
        return 0;
      }
      local_14 = s_SE_SwitchHit_OFF_001c4760;
      local_18 = iVar3;
      return func_00150A84(param_1,&local_18,0);
    }
    cVar1 = *(char *)((int)param_1 + 0x40d);
    if (cVar1 == '\0') {
      func_001C4388((int)param_1,1);
      if (param_2 != 0) {
        local_14 = s_SE_SwitchHit_ON_001c4778;
        local_18 = iVar3;
        func_00150A84(param_1,&local_18,0);
      }
      iVar5 = param_1[0xd1];
      pcVar6 = s_SwitchOn_001c4794;
    }
    else {
      if (cVar1 == '\x01') {
        func_001C4388((int)param_1,1);
        if (param_2 != 0) {
          local_14 = s_SE_SwitchHit_ON_001c4778;
          local_18 = iVar3;
          func_00150A84(param_1,&local_18,0);
        }
        iVar5 = param_1[0xd1];
        pcVar6 = s_SwitchOnOff_001c47a0;
        if (iVar5 == 0) {
          return 0;
        }
        goto LAB_001c4698;
      }
      if (cVar1 != '\x02') {
        return 0;
      }
      iVar4 = param_1[0x10a];
      if (iVar4 == 0) {
        iVar5 = DAT_001c4774;
      }
      param_1[0x108] = iVar4;
      if (iVar4 == 0) {
        param_1[0x109] = iVar5;
      }
      else {
        fVar7 = (float)VectorUnsignedToFloat(iVar4,(byte)(in_fpscr >> 0x15) & 3);
        param_1[0x109] = (int)ALBW_AS_U32((fVar2 / fVar7));
      }
      param_1[0x107] = 0;
      func_001C4388((int)param_1,1);
      if (param_2 != 0) {
        local_14 = s_SE_SwitchHit_ON_001c4778;
        local_18 = iVar3;
        func_00150A84(param_1,&local_18,0);
      }
      iVar5 = param_1[0xd1];
      pcVar6 = s_SwitchTimer_001c4788;
    }
    if (iVar5 != 0) {
LAB_001c4698:
      return func_004A1B9C(&local_18,iVar5,(uint *)pcVar6);
    }
  }
  return 0;
}

