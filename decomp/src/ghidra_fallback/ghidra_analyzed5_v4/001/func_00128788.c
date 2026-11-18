#include "ghidra_types.h"

extern int func_001507D8(int param_1,int *param_2,int param_3);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern void func_004F48F0(int param_1);
extern void func_004F5588(int param_1);
extern int func_004F5BD8(int param_1,uint *param_2,int **param_3,float *param_4);
extern int func_004F70A8(int *param_1);
extern int func_004F86FC(int param_1,undefined1 param_2,float fparam_0);
extern int func_004F8998(int *param_1,int param_2,char *param_3);
extern int func_00588BE4(int param_1);
extern int func_0058A960(int param_1);
extern undefined8 func_0058AB74(int param_1);
extern int func_006568D8(undefined4 *param_1,undefined1 param_2);
extern float DAT_0012899c;
extern int *DAT_001289a0;
extern int DAT_001289a4;
extern float DAT_001289cc;
extern char s_SE_Chasupa_V_FLY_001289a8[];
extern char s_SE_Keease_V_FLY_001289bc[];

// USA 00128788 <- EU 00128788 (Ghidra, non-matching)
// GLOBAL DAT_0012899c float
// GLOBAL DAT_001289a0 int *
// GLOBAL DAT_001289a4 int
// GLOBAL DAT_001289cc float
// GLOBAL s_SE_Chasupa_V_FLY_001289a8 string
// GLOBAL s_SE_Keease_V_FLY_001289bc string

undefined4 func_00128788(int *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int *piVar5;
  float *pfVar6;
  int *piVar7;
  bool bVar8;
  uint in_fpscr;
  float fparam_0;
  undefined8 uVar9;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  iVar2 = func_004F70A8(param_1);
  if (iVar2 == 0) {
    return 0;
  }
  piVar7 = param_1 + 0x22f;
  if ((char)param_1[0x230] == '\x03' || (char)param_1[0x230] == '\x04') goto LAB_0012886c;
  if (param_1[0x249] != 0) {
    param_1[0x249] = param_1[0x249] + -1;
    goto LAB_0012886c;
  }
  iVar2 = func_0058A960((int)param_1);
  if (iVar2 == 0) goto LAB_00128844;
  if ((param_1[0x168] & 0x2000000U) == 0) goto LAB_0012886c;
  cVar1 = (char)param_1[0x230];
  if (cVar1 == '\x01' || cVar1 == '\b') {
LAB_0012882c:
    func_006568D8(piVar7,2);
    param_1[0x249] = 0x1e;
  }
  else {
    if (cVar1 == '\x02') {
      uVar4 = in_fpscr & 0xfffffff;
      in_fpscr = uVar4 | (uint)(ALBW_AS_F32(param_1[0xf7]) == DAT_0012899c) << 0x1e;
      bVar8 = false;
      if (SUB41(in_fpscr >> 0x1e,0)) {
        in_fpscr = uVar4 | (uint)(ALBW_AS_F32(param_1[0xf9]) == DAT_0012899c) << 0x1e;
        bVar8 = SUB41(in_fpscr >> 0x1e,0);
      }
      if (bVar8) goto LAB_0012882c;
    }
LAB_00128844:
    iVar2 = func_004F8998(param_1,0,(char *)0x0);
    if (iVar2 != 0) {
      func_006568D8(piVar7,3);
    }
  }
LAB_0012886c:
  pfVar6 = (float *)param_1[0x234];
  piVar3 = (int *)(param_1[0x236] + (char)param_1[0x230] * 8);
  uVar4 = *(uint *)(param_1[0x236] + (char)param_1[0x230] * 8 + 4);
  piVar5 = (int *)((int)pfVar6 + ((int)uVar4 >> 1));
  if ((uVar4 & 1) != 0) {
    piVar3 = (int *)(*piVar3 + *piVar5);
  }
  (*(code *)*piVar3)(piVar5);
  iVar2 = *piVar7;
  *piVar7 = iVar2 + 1;
  if (param_1[0x233] != 0) {
    fparam_0 = (float)VectorUnsignedToFloat(iVar2 + 1,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210(param_1[0x233],1,fparam_0);
  }
  uVar9 = func_0058AB74((int)param_1);
  if ((int)uVar9 == 0) {
    iVar2 = func_00588BE4((int)param_1);
    local_18 = DAT_001289a4;
    if (iVar2 == *DAT_001289a0) {
      local_14 = s_SE_Chasupa_V_FLY_001289a8;
      func_001507D8((int)param_1,&local_18,0);
    }
    else {
      local_14 = s_SE_Keease_V_FLY_001289bc;
      func_001507D8((int)param_1,&local_18,0);
    }
  }
  func_004F48F0((int)param_1);
  func_004F5588((int)param_1);
  func_004F5BD8((int)param_1,(uint *)0x0,(int **)0x0,pfVar6);
  if ((char)param_1[0x230] != '\0' && (char)param_1[0x230] != '\x02') {
    return 0;
  }
  return func_004F86FC((int)param_1,2,DAT_001289cc);
}

