/* compilefix: func_002A13A0, the converted stage-2 text (build/decomp/ghidra_fallback/ghidra_analyzed5_v4/002/func_002A13A0.c) with `this` restored in 1
 * member-function-pointer call(s) by tools/pmf_this_fix.py (BOOT_LOG 140): this = BASE + (adj >> 1).
 * Further arguments of those calls are as Ghidra printed them. */
#include "ghidra_types.h"

extern int func_001151D8(undefined4 *param_1,undefined4 *param_2);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115C8C(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_002A10C0(int param_1);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_004356B4(int *param_1);
extern void func_004F48F0(int param_1);
extern void func_004F5588(int param_1);
extern int func_004F5BD8(int param_1,uint *param_2,int **param_3,float *param_4);
extern int func_004F70A8(int *param_1);
extern int func_004F86FC(int param_1,undefined1 param_2,float fparam_0);
extern int func_004F8998(int *param_1,int param_2,char *param_3);
extern int func_0054D884(int param_1,uint param_2);
extern int func_00661FE4(undefined4 *param_1,undefined1 param_2);
extern float DAT_002a1724;
extern float DAT_002a1728;
extern float DAT_002a172c;

// USA 002A13A0 <- EU 002A137C (Ghidra, non-matching)
// GLOBAL DAT_002a1724 float
// GLOBAL DAT_002a1728 float
// GLOBAL DAT_002a172c float

undefined4 func_002A13A0(int *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  float *pfVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  uint in_fpscr;
  float fVar9;
  _Alignas(8) unsigned char albw_frame[0xa0];
  #define local_98 (*(float *)(albw_frame + 0x8))
  #define local_94 (*(int *)(albw_frame + 0xc))
  #define local_90 (*(int *)(albw_frame + 0x10))
  #define local_8c (*(float *)(albw_frame + 0x14))
  #define local_88 (*(float *)(albw_frame + 0x18))
  #define local_84 (*(int *)(albw_frame + 0x1c))
  #define local_80 (*(float *)(albw_frame + 0x20))
  #define iStack_7c (*(int *)(albw_frame + 0x24))
  #define iStack_78 (*(int *)(albw_frame + 0x28))
  #define local_6c (*(float *)(albw_frame + 0x34))
  #define iStack_68 (*(int *)(albw_frame + 0x38))
  #define iStack_64 (*(int *)(albw_frame + 0x3c))
  #define local_5c (*(float *)(albw_frame + 0x44))
  #define iStack_58 (*(int *)(albw_frame + 0x48))
  #define iStack_54 (*(int *)(albw_frame + 0x4c))
  #define local_44 (*(float *)(albw_frame + 0x5c))
  #define local_40 (*(undefined4 *)(albw_frame + 0x60))
  #define local_3c (*(undefined4 *)(albw_frame + 0x64))
  #define local_38 (*(float *)(albw_frame + 0x68))
  #define iStack_34 (*(int *)(albw_frame + 0x6c))
  #define iStack_30 (*(int *)(albw_frame + 0x70))
  iVar2 = func_004F70A8(param_1);
  if (iVar2 == 0) {
    return 0;
  }
  piVar7 = param_1 + 0x24e;
  if (((char)param_1[0x24f] != '\x04' && (char)param_1[0x24f] != '\n') &&
     (iVar2 = func_004F8998(param_1,0,(char *)0x0), iVar2 != 0)) {
    func_00661FE4(piVar7,4);
  }
  pfVar5 = (float *)param_1[0x253];
  piVar4 = (int *)(param_1[0x255] + (char)param_1[0x24f] * 8);
  uVar3 = *(uint *)(param_1[0x255] + (char)param_1[0x24f] * 8 + 4);
  if ((uVar3 & 1) != 0) {
    piVar4 = (int *)(*piVar4 + *(int *)((int)pfVar5 + ((int)uVar3 >> 1)));
  }
  (*(int (*)(int *))(code *)*piVar4)(((int *)((int)(pfVar5) + ((int)uVar3 >> 1))));   /* this restored (pmf_this_fix) */
  iVar2 = *piVar7;
  *piVar7 = iVar2 + 1;
  if (param_1[0x252] != 0) {
    fVar9 = (float)VectorUnsignedToFloat(iVar2 + 1,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210(param_1[0x252],1,fVar9);
  }
  fVar9 = ALBW_AS_F32(param_1[0xf8]) - ALBW_AS_F32(param_1[0x240]);
  if (ALBW_AS_F32(param_1[0xf8]) - ALBW_AS_F32(param_1[0x240]) < DAT_002a1724) {
    fVar9 = DAT_002a1724;
  }
  param_1[0xf8] = (int)ALBW_AS_U32(fVar9);
  func_004F48F0((int)param_1);
  func_004F5588((int)param_1);
  func_004F5BD8((int)param_1,(uint *)0x0,(int **)0x0,pfVar5);
  if (param_1[0x235] == 0) goto LAB_002a16c4;
  if (*(char *)(param_1[0x235] + 0x61) == '\0') goto LAB_002a16a0;
  iVar8 = param_1[0x103];
  func_00115C54(&local_98,(float *)(param_1 + 0xf4),(float *)(param_1 + 0x232));
  iVar2 = func_0054D884(param_1[0xb4] + 0x18,1);
  func_00115C8C(&local_8c,(float *)(iVar8 + 0x74),(float *)(iVar2 + 4));
  fVar9 = DAT_002a1728;
  piVar7 = (int *)param_1[0x236];
  switch((short)piVar7[0x15]) {
  case 1:
    piVar4 = piVar7 + 1;
    piVar7[1] = (int)ALBW_AS_U32(local_98);
    piVar7[2] = local_94;
    local_84 = local_90;
    goto LAB_002a15f0;
  case 5:
    iVar2 = *(int *)(iVar8 + 0x84);
    iVar6 = *(int *)(iVar8 + 0x94);
    piVar7[0x18] = *(int *)(iVar8 + 0xa4);
    piVar7[0x16] = iVar2;
    piVar7[0x17] = iVar6;
    break;
  case 6:
    piVar7[1] = (int)ALBW_AS_U32(local_98);
    piVar7[2] = local_94;
    piVar7[3] = local_90;
    piVar7[0x16] = (int)ALBW_AS_U32((local_8c * fVar9));
    break;
  case 7:
    piVar7[1] = (int)ALBW_AS_U32(local_98);
    piVar7[2] = local_94;
    piVar7[3] = local_90;
    piVar7[0x16] = (int)ALBW_AS_U32(local_8c);
    piVar7[0x17] = (int)ALBW_AS_U32(local_88);
    piVar7[0x18] = local_84;
    break;
  case 8:
    piVar7[1] = (int)ALBW_AS_U32(local_98);
    piVar7[2] = local_94;
    piVar7[3] = local_90;
    func_001151D8(piVar7 + 0x19,(undefined4 *)(iVar8 + 0x80));
    piVar4 = piVar7 + 0x16;
    piVar7[0x16] = (int)ALBW_AS_U32(local_8c);
    piVar7[0x17] = (int)ALBW_AS_U32(local_88);
LAB_002a15f0:
    piVar4[2] = local_84;
    break;
  case 9:
    local_44 = *(float *)(iVar8 + 0x84);
    local_40 = *(undefined4 *)(iVar8 + 0x94);
    local_3c = *(undefined4 *)(iVar8 + 0xa4);
    func_00115D70(&local_6c,&local_44,local_88);
    local_80 = local_6c;
    iStack_7c = iStack_68;
    iStack_78 = iStack_64;
    func_00115C54(&local_6c,&local_98,&local_80);
    iVar2 = iStack_64;
    fVar9 = local_6c;
    iVar8 = iStack_68;
    func_00115D70(&local_38,&local_44,local_88);
    local_5c = local_38;
    iStack_58 = iStack_34;
    iStack_54 = iStack_30;
    func_00115C70(&local_38,&local_98,&local_5c);
    piVar7[0x16] = (int)ALBW_AS_U32(fVar9);
    piVar7[0x17] = iVar8;
    piVar7[0x18] = iVar2;
    piVar7[0x19] = (int)ALBW_AS_U32(local_38);
    piVar7[0x1a] = iStack_34;
    piVar7[0x1b] = iStack_30;
    piVar7[0x1c] = (int)ALBW_AS_U32((local_8c * DAT_002a1728));
  }
  func_004356B4(piVar7);
LAB_002a16a0:
  if ((uint)param_1[0x22f] < (uint)param_1[0x230]) {
    param_1[0x22f] = param_1[0x22f] + 1;
  }
  else {
    *(undefined1 *)(param_1[0x235] + 0x61) = 0;
  }
LAB_002a16c4:
  cVar1 = (char)param_1[0x24f];
  if (cVar1 == '\t' || cVar1 == '\b') {
    return func_002A10C0((int)param_1);
  }
  if ((cVar1 != '\0' && cVar1 != '\x02') && (cVar1 != '\x03')) {
    return func_004F86FC((int)param_1,2,DAT_002a172c);
  }
  return 0;
}

