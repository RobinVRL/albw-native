#include "ghidra_types.h"

extern int func_0016898C(int param_1,uint *param_2);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_002B9EA4(int param_1,int param_2);
extern int func_003A2F68(int param_1,uint param_2);
extern int func_004C6C50(int param_1,uint param_2);
extern int func_004CBB0C(undefined4 *param_1,uint param_2,int param_3,undefined4 param_4);
extern int func_004CEA18(int param_1,int param_2,uint param_3);
extern int func_004CF478(int param_1,int param_2);
extern int func_004EABB8(int param_1,int *param_2,undefined4 *param_3);
extern float fRam00397804;
extern undefined4 uRam0039780c;
extern float DAT_00397808;
extern int *DAT_00397810;
extern int DAT_00397820;
extern int *DAT_00397824;
extern float DAT_00397828;
extern float DAT_0039782c;
extern float DAT_00397830;
extern char s_SE_PL_DRINK_00397814[];
extern char s_SE_PL_EAT_APPLE_00397ab8[];

// USA 003974A0 <- EU 0039747C (Ghidra, non-matching)
// GLOBAL DAT_00397808 float
// GLOBAL DAT_00397810 int *
// GLOBAL DAT_00397820 int
// GLOBAL DAT_00397824 int *
// GLOBAL DAT_00397828 float
// GLOBAL DAT_0039782c float
// GLOBAL DAT_00397830 float
// GLOBAL UNK_00397804 float
// GLOBAL UNK_0039780c undefined4
// GLOBAL s_SE_PL_DRINK_00397814 string
// GLOBAL s_SE_PL_EAT_APPLE_00397ab8 string

undefined4 func_003974A0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  float *pfVar3;
  uint in_r12;
  float fVar4;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define auStack_80 ((uint *)(albw_frame + 0x0))
  #define puStack_78 (*(undefined4 * *)(albw_frame + 0x8))
  #define uStack_74 (*(undefined4 *)(albw_frame + 0xc))
  #define fStack_70 (*(float *)(albw_frame + 0x10))
  #define fStack_6c (*(float *)(albw_frame + 0x14))
  #define uStack_68 (*(undefined4 *)(albw_frame + 0x18))
  #define fStack_64 (*(float *)(albw_frame + 0x1c))
  #define uStack_60 (*(uint *)(albw_frame + 0x20))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x54))
  #define uStack_28 (*(undefined1 *)(albw_frame + 0x58))
  #define iStack_20 (*(int *)(albw_frame + 0x60))
  #define pcStack_1c (*(char * *)(albw_frame + 0x64))
  func_004CF478(*(int *)(param_1 + 0x34),1);
  func_004CF478(*(int *)(param_1 + 0x38),0);
  func_004CF478(*(int *)(param_1 + 0x3c),0);
  *(char *)(param_1 + 0x44) = (char)param_2;
  func_004CEA18(*(int *)(param_1 + 0x34),1,1);
  auStack_80[1] = 3;
  puStack_78 = &uStack_74;
  uStack_28 = 0;
  uStack_2c = 10;
  uStack_74 = 0;
  auStack_80[0] = 1;
  uStack_68 = uRam0039780c;
  fStack_64 = DAT_00397808;
  pfVar3 = &fStack_70;
  in_r12 = in_r12 | 0xff;
  fStack_70 = fRam00397804;
  fStack_6c = DAT_00397808;
  fVar4 = fRam00397804;
  uStack_60 = in_r12;
  func_0016898C(*(int *)(param_1 + 0x40),auStack_80);
  *(float *)(*(int *)(*(int *)(param_1 + 0x40) + 0x14) + 0x10) = fVar4;
  uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x40) + 0xc);
  iVar1 = *(int *)(*(int *)(param_1 + 0x40) + 0x14);
  if (*(float *)(iVar1 + 8) != fVar4) {
    *(float *)(iVar1 + 8) = fVar4;
    *(undefined1 *)(iVar1 + 0x26) = 1;
  }
  func_00169A80(*(int **)(param_1 + 0x40),uVar2,in_r12,(int *)pfVar3);
  switch(param_2) {
  case 1:
    iVar1 = *(int *)(*(int *)(param_1 + 0x40) + 0x14);
    if (*(float *)(iVar1 + 8) != DAT_00397808) {
      *(float *)(iVar1 + 8) = DAT_00397808;
      *(undefined1 *)(iVar1 + 0x26) = 1;
    }
    func_002B9EA4(*(int *)(param_1 + 4),0x20);
    func_003A2F68(*(int *)(param_1 + 4) + 0xbc8,0xe);
    func_004C6C50(*DAT_00397810,0xe);
    pcStack_1c = s_SE_PL_DRINK_00397814;
    iStack_20 = DAT_00397820;
    func_004EABB8(*DAT_00397824,&iStack_20,(undefined4 *)0x0);
    break;
  case 2:
    iVar1 = *(int *)(*(int *)(param_1 + 0x40) + 0x14);
    if (*(float *)(iVar1 + 8) != DAT_00397828) {
      *(float *)(iVar1 + 8) = DAT_00397828;
      *(undefined1 *)(iVar1 + 0x26) = 1;
    }
    func_002B9EA4(*(int *)(param_1 + 4),0x50);
    func_003A2F68(*(int *)(param_1 + 4) + 0xbc8,0xf);
    func_004C6C50(*DAT_00397810,0xf);
    pcStack_1c = s_SE_PL_DRINK_00397814;
    iStack_20 = DAT_00397820;
    return func_004EABB8(*DAT_00397824,&iStack_20,(undefined4 *)0x0);
  case 3:
    iVar1 = *(int *)(*(int *)(param_1 + 0x40) + 0x14);
    if (*(float *)(iVar1 + 8) != DAT_0039782c) {
      *(float *)(iVar1 + 8) = DAT_0039782c;
      *(undefined1 *)(iVar1 + 0x26) = 1;
    }
    func_003A2F68(*(int *)(param_1 + 4) + 0xbc8,0x11);
    func_004C6C50(*DAT_00397810,0x11);
    pcStack_1c = s_SE_PL_DRINK_00397814;
    iStack_20 = DAT_00397820;
    return func_004EABB8(*DAT_00397824,&iStack_20,(undefined4 *)0x0);
  case 4:
    iVar1 = *(int *)(*(int *)(param_1 + 0x40) + 0x14);
    if (*(float *)(iVar1 + 8) != DAT_00397830) {
      *(float *)(iVar1 + 8) = DAT_00397830;
      *(undefined1 *)(iVar1 + 0x26) = 1;
    }
    func_003A2F68(*(int *)(param_1 + 4) + 0xbc8,0x10);
    func_004C6C50(*DAT_00397810,0x10);
    pcStack_1c = s_SE_PL_DRINK_00397814;
    iStack_20 = DAT_00397820;
    return func_004EABB8(*DAT_00397824,&iStack_20,(undefined4 *)0x0);
  case 5:
    func_004CBB0C((undefined4 *)(*(int *)(param_1 + 4) + 0x3d0),4,0,
                  (int)*(char *)(*(int *)(*(int *)(param_1 + 4) + 0x8bc) + 1));
    func_003A2F68(*(int *)(param_1 + 4) + 0xbc8,0x13);
    return func_004C6C50(*DAT_00397810,0x13);
  case 6:
    func_004CBB0C((undefined4 *)(*(int *)(param_1 + 4) + 0x3d0),4,1,0);
    func_003A2F68(*(int *)(param_1 + 4) + 0xbc8,0x14);
    return func_004C6C50(*DAT_00397810,0x14);
  case 8:
    iVar1 = *(int *)(*(int *)(param_1 + 0x40) + 0x14);
    if (*(float *)(iVar1 + 8) != DAT_00397808) {
      *(float *)(iVar1 + 8) = DAT_00397808;
      *(undefined1 *)(iVar1 + 0x26) = 1;
    }
    func_002B9EA4(*(int *)(param_1 + 4),4);
    func_003A2F68(*(int *)(param_1 + 4) + 0xbc8,0x17);
    return func_004C6C50(*DAT_00397810,0x17);
  case 9:
    func_002B9EA4(*(int *)(param_1 + 4),4);
    func_003A2F68(*(int *)(param_1 + 4) + 0xbc8,0x18);
    func_004C6C50(*DAT_00397810,0x18);
    func_004CF478(*(int *)(param_1 + 0x34),0);
    return func_004CF478(*(int *)(param_1 + 0x38),1);
  case 10:
    func_002B9EA4(*(int *)(param_1 + 4),0xc);
    func_003A2F68(*(int *)(param_1 + 4) + 0xbc8,0x19);
    func_004C6C50(*DAT_00397810,0x19);
    func_004CF478(*(int *)(param_1 + 0x34),0);
    func_004CF478(*(int *)(param_1 + 0x3c),1);
    pcStack_1c = s_SE_PL_EAT_APPLE_00397ab8;
    iStack_20 = DAT_00397820;
    return func_004EABB8(*DAT_00397824,&iStack_20,(undefined4 *)0x0);
  case 0xc:
    iVar1 = *(int *)(*(int *)(param_1 + 0x40) + 0x14);
    if (*(float *)(iVar1 + 8) != fVar4) {
      *(float *)(iVar1 + 8) = fVar4;
      *(undefined1 *)(iVar1 + 0x26) = 1;
    }
    func_002B9EA4(*(int *)(param_1 + 4),0x14);
    func_003A2F68(*(int *)(param_1 + 4) + 0xbc8,0x1b);
    func_004C6C50(*DAT_00397810,0x1b);
    pcStack_1c = s_SE_PL_DRINK_00397814;
    iStack_20 = DAT_00397820;
    return func_004EABB8(*DAT_00397824,&iStack_20,(undefined4 *)0x0);
  case 0xd:
    iVar1 = *(int *)(*(int *)(param_1 + 0x40) + 0x14);
    if (*(float *)(iVar1 + 8) != fVar4) {
      *(float *)(iVar1 + 8) = fVar4;
      *(undefined1 *)(iVar1 + 0x26) = 1;
    }
    func_002B9EA4(*(int *)(param_1 + 4),0x14);
    func_003A2F68(*(int *)(param_1 + 4) + 0xbc8,0x1c);
    func_004C6C50(*DAT_00397810,0x1c);
    pcStack_1c = s_SE_PL_DRINK_00397814;
    iStack_20 = DAT_00397820;
    return func_004EABB8(*DAT_00397824,&iStack_20,(undefined4 *)0x0);
  }
  return 0;
}

