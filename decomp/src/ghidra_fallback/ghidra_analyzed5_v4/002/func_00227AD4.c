#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_0014EEC8(int param_1,uint param_2,undefined4 *param_3,undefined4 param_4,float fparam_0);
extern int func_001507D8(int param_1,int *param_2,int param_3);
extern int func_002249B0(int param_1);
extern int func_00224D78(int param_1);
extern int func_00226BBC(int param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_00227374(int param_1);
extern int func_00227894(int param_1);
extern int func_00227CA4(int *param_1);
extern void func_002283D4(int param_1);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_005811E8(int *param_1);
extern int DAT_00227c80;
extern float *DAT_00227c84;
extern int *DAT_00227c88;
extern float DAT_00227c8c;
extern float DAT_00227c90;
extern float DAT_00227ca0;
extern char s_SE_EN_FAINT_00227c94[];

// USA 00227AD4 <- EU 00227AD4 (Ghidra, non-matching)
// GLOBAL DAT_00227c80 int
// GLOBAL DAT_00227c84 float *
// GLOBAL DAT_00227c88 int *
// GLOBAL DAT_00227c8c float
// GLOBAL DAT_00227c90 float
// GLOBAL DAT_00227ca0 float
// GLOBAL s_SE_EN_FAINT_00227c94 string

void func_00227AD4(int *param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  float *pfVar4;
  float *pfVar5;
  uint in_fpscr;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(float *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  #define fStack_10 (*(float *)(albw_frame + 0x10))
  pfVar5 = &local_18;
  func_00227CA4(param_1);
  piVar3 = (int *)(param_1[0x121] + (char)param_1[0x11b] * 8);
  uVar1 = *(uint *)(param_1[0x121] + (char)param_1[0x11b] * 8 + 4);
  if ((uVar1 & 1) != 0) {
    piVar3 = (int *)(*piVar3 + *(int *)(param_1[0x11f] + ((int)uVar1 >> 1)));
  }
  (*(code *)*piVar3)();
  iVar2 = param_1[0x11a] + 1;
  param_1[0x11a] = iVar2;
  if (param_1[0x11e] != 0) {
    fparam_0 = (float)VectorUnsignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210(param_1[0x11e],1,fparam_0);
  }
  if ((((char)param_1[0x1cf] == '\0') && (*(char *)(DAT_00227c80 + (int)param_1) != '\x05')) &&
     (*(char *)(DAT_00227c80 + (int)param_1) != '\0')) {
    *(undefined1 *)(param_1[0x181] + 0x44) = 1;
  }
  else {
    *(undefined1 *)(param_1[0x181] + 0x44) = 0;
  }
  local_18 = *DAT_00227c84;
  local_14 = (char *)ALBW_PTR_BITS(DAT_00227c84[1]);
  fStack_10 = DAT_00227c84[2];
  pfVar4 = DAT_00227c84;
  piVar3 = DAT_00227c88;
  iVar2 = func_0014EEC8((int)param_1,(uint)&local_18,DAT_00227c84,DAT_00227c88,DAT_00227c8c);
  if (iVar2 != 0) {
    local_14 = (char *)ALBW_PTR_BITS(DAT_00227c90);
    func_00115C54((float *)(param_1 + 0xf4),(float *)(param_1 + 0xf4),&local_18);
    pfVar4 = pfVar5;
  }
  func_00227374((int)param_1);
  if (*(char *)((int)param_1 + 0x74a) == '\0') {
    *(undefined2 *)((int)param_1 + 0x73e) = 0;
    iVar2 = 0;
  }
  else {
    iVar2 = *(ushort *)((int)param_1 + 0x73e) + 1;
    *(short *)((int)param_1 + 0x73e) = (short)iVar2;
  }
  *(undefined1 *)((int)param_1 + 0x74a) = 0;
  func_00226BBC((int)param_1,iVar2,pfVar4,piVar3);
  func_002249B0((int)param_1);
  func_002283D4((int)param_1);
  func_00227894((int)param_1);
  func_00224D78((int)param_1);
  iVar2 = func_005811E8(param_1 + 0x103);
  if (iVar2 != 0) {
    local_14 = s_SE_EN_FAINT_00227c94;
    local_18 = DAT_00227ca0;
    func_001507D8((int)param_1,(int *)&local_18,0);
  }
  return;
}

